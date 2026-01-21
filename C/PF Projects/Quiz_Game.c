#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUESTIONS 10
#define MAX_ANSWER_LENGTH 50
#define MAX_LINE_LENGTH 256

typedef struct {
    char question[MAX_LINE_LENGTH];
    char options[4][MAX_ANSWER_LENGTH];
    int correctAnswer;
} Question;

Question questions[MAX_QUESTIONS];
int totalQuestions = 0;
int score = 0;

void loadQuestions(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        perror("Failed to open file");
        exit(1);
    }

    char line[MAX_LINE_LENGTH];
    int index = 0;

    while (fgets(line, sizeof(line), file) && index < MAX_QUESTIONS) {
        strcpy(questions[index].question, strtok(line, ","));
        for (int i = 0; i < 4; i++) {
            strcpy(questions[index].options[i], strtok(NULL, ","));
        }
        questions[index].correctAnswer = atoi(strtok(NULL, ","));
        index++;
    }

    totalQuestions = index;
    fclose(file);
}

void displayQuestion(int index) {
    printf("Question %d: %s\n", index + 1, questions[index].question);
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, questions[index].options[i]);
    }
    printf("Your answer: ");
}

void provideFeedback(int isCorrect) {
    if (isCorrect) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }
}

void displayFinalScore() {
    printf("Quiz Over!\n");
    printf("Your final score is: %d out of %d\n", score, totalQuestions);
}

int main() {
    loadQuestions("questions.csv");

    for (int i = 0; i < totalQuestions; i++) {
        displayQuestion(i);

        int answer;
        scanf("%d", &answer);

        if (answer == questions[i].correctAnswer) {
            provideFeedback(1);
        } else {
            provideFeedback(0);
        }

        printf("\n");
    }

    displayFinalScore();

    return 0;
}