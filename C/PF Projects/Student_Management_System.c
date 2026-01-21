#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_STUDENTS 100
#define FILENAME "students.txt"

// Enumeration for student gender
typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

// Student structure
typedef struct {
    int id;
    char name[50];
    int age;
    Gender gender;
    float marks;
} Student;

// Function prototypes
void saveStudents(Student students[], int studentCount);
int loadStudents(Student students[]);
void addStudent(Student students[], int *studentCount);
void displayStudents(Student students[], int studentCount);
void searchStudent(Student students[], int studentCount, int id);
void updateStudent(Student students[], int studentCount, int id);
void deleteStudent(Student students[], int *studentCount, int id);

int main() {
    Student students[MAX_STUDENTS];
    int studentCount = 0;
    int choice;
    int id;

    // Load existing student records from file
    studentCount = loadStudents(students);

    while (1) {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &studentCount);
                break;
            case 2:
                displayStudents(students, studentCount);
                break;
            case 3:
                printf("Enter student ID to search: ");
                scanf("%d", &id);
                searchStudent(students, studentCount, id);
                break;
            case 4:
                printf("Enter student ID to update: ");
                scanf("%d", &id);
                updateStudent(students, studentCount, id);
                break;
            case 5:
                printf("Enter student ID to delete: ");
                scanf("%d", &id);
                deleteStudent(students, &studentCount, id);
                break;
            case 6:
                printf("Exiting program.\n");
                // Save student records to file before exiting
                saveStudents(students, studentCount);
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
    }

    return 0;
}

// Function to save student records to file
void saveStudents(Student students[], int studentCount) {
    FILE *fp = fopen(FILENAME, "w");
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }
    for (int i = 0; i < studentCount; i++) {
        fprintf(fp, "%d,%s,%d,%d,%.2f\n", students[i].id, students[i].name, students[i].age, students[i].gender, students[i].marks);
    }
    fclose(fp);
}

// Function to load student records from file
int loadStudents(Student students[]) {
    FILE *fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        // If file does not exist, return 0 student count
        return 0;
    }
    int count = 0;
    while (fscanf(fp, "%d,%[^,],%d,%d,%f\n", &students[count].id, students[count].name, &students[count].age, &students[count].gender, &students[count].marks) == 5) {
        count++;
    }
    fclose(fp);
    return count;
}

// Function to add a new student
void addStudent(Student students[], int *studentCount) {
    if (*studentCount >= MAX_STUDENTS) {
        printf("Cannot add more students. Maximum limit reached.\n");
        return;
    }

    Student newStudent;
    printf("Enter student details:\n");
    printf("ID: ");
    scanf("%d", &newStudent.id);
    printf("Name: ");
    scanf(" %[^\n]", newStudent.name);  // Read name with spaces
    printf("Age: ");
    scanf("%d", &newStudent.age);
    printf("Gender (0 for Male, 1 for Female, 2 for Other): ");
    scanf("%d", (int *)&newStudent.gender); // Cast to int pointer for enum input
    printf("Marks: ");
    scanf("%f", &newStudent.marks);

    students[*studentCount] = newStudent;
    (*studentCount)++;
    saveStudents(students, *studentCount);
    printf("Student added successfully.\n");
}

// Function to display all students
void displayStudents(Student students[], int studentCount) {
    if (studentCount == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("\nList of Students:\n");
    printf("ID\tName\tAge\tGender\tMarks\n");
    printf("---------------------------------------------\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%d\t%s\t%d\t", students[i].id, students[i].name, students[i].age);
        switch (students[i].gender) {
            case MALE:
                printf("Male\t");
                break;
            case FEMALE:
                printf("Female\t");
                break;
            case OTHER:
                printf("Other\t");
                break;
            default:
                printf("Unknown\t");
        }
        printf("%.2f\n", students[i].marks);
    }
}

// Function to search for a student by ID
void searchStudent(Student students[], int studentCount, int id) {
    bool found = false;
    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            printf("Student found:\n");
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Gender: ");
            switch (students[i].gender) {
                case MALE:
                    printf("Male\n");
                    break;
                case FEMALE:
                    printf("Female\n");
                    break;
                case OTHER:
                    printf("Other\n");
                    break;
                default:
                    printf("Unknown\n");
            }
            printf("Marks: %.2f\n", students[i].marks);
            found = true;
            break;
        }
    }
    if (!found) {
        printf("Student with ID %d not found.\n", id);
    }
}

// Function to update student details
void updateStudent(Student students[], int studentCount, int id) {
    bool found = false;
    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            printf("Enter new details for student ID %d:\n", id);
            printf("Name: ");
            scanf(" %[^\n]", students[i].name);  // Read name with spaces
            printf("Age: ");
            scanf("%d", &students[i].age);
            printf("Gender (0 for Male, 1 for Female, 2 for Other): ");
            scanf("%d", (int *)&students[i].gender); // Cast to int pointer for enum input
            printf("Marks: ");
            scanf("%f", &students[i].marks);
            saveStudents(students, studentCount);
            printf("Student details updated successfully.\n");
            found = true;
            break;
        }
    }
    if (!found) {
        printf("Student with ID %d not found.\n", id);
    }
}

// Function to delete a student
void deleteStudent(Student students[], int *studentCount, int id) {
    bool found = false;
    for (int i = 0; i < *studentCount; i++) {
        if (students[i].id == id) {
            // Shift elements to overwrite the deleted student
            for (int j = i; j < *studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            (*studentCount)--;
            saveStudents(students, *studentCount);
            printf("Student with ID %d deleted successfully.\n", id);
            found = true;
            break;
        }
    }
    if (!found) {
        printf("Student with ID %d not found.\n", id);
    }
}





/*

File Handling:

Changed file extension to .txt and updated the file operations accordingly (FILENAME macro).
Used fprintf and fscanf to write and read student records in a structured format (id,name,age,gender,marks).
Add Student Function:

Corrected input reading for name to handle spaces (scanf(" %[^\n]", newStudent.name)).
Used a cast for reading gender input (scanf("%d", (int *)&newStudent.gender)) to convert it to the Gender enum type.
Display Function:

Added a switch-case statement to print the correct gender string based on the enum value.
Update and Delete Functions:

Fixed the update and delete functions to properly shift elements in the array after deleting a student.
Error Handling:

Basic error handling included for file operations.
This version should now correctly handle storing data in a .txt file (students.txt) and includes basic error handling. It maintains simplicity while addressing the bugs found in the previous version. Adjustments can be made further based on specific requirements or additional features needed.

*/