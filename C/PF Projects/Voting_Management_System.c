#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VOTERS 100
#define MAX_CANDIDATES 50
#define VOTERS_FILE "voters.txt"
#define CANDIDATES_FILE "candidates.txt"

// Enumeration for voter status
typedef enum {
    NOT_VOTED,
    HAS_VOTED
} VoterStatus;

// Voter structure
typedef struct {
    int voterID;
    char name[50];
    int age;
    VoterStatus status;
} Voter;

// Candidate structure
typedef struct {
    int candidateID;
    char name[50];
    int votes;
} Candidate;

// Function prototypes
void saveVoters(Voter voters[], int voterCount);
int loadVoters(Voter voters[]);
void saveCandidates(Candidate candidates[], int candidateCount);
int loadCandidates(Candidate candidates[]);
void registerVoter(Voter voters[], int *voterCount);
void addCandidate(Candidate candidates[], int *candidateCount);
void displayVoters(Voter voters[], int voterCount);
void displayCandidates(Candidate candidates[], int candidateCount);
void castVote(Voter voters[], int voterCount, Candidate candidates[], int candidateCount);
void displayResults(Candidate candidates[], int candidateCount);



// Main function
int main() {
    Voter voters[MAX_VOTERS];
    Candidate candidates[MAX_CANDIDATES];
    int voterCount = 0;
    int candidateCount = 0;
    int choice;

    // Load existing voter and candidate records from files
    voterCount = loadVoters(voters);
    candidateCount = loadCandidates(candidates);

    while (1) {
        printf("\nVoting Management System\n");
        printf("1. Register Voter\n");
        printf("2. Add Candidate\n");
        printf("3. Display Voters\n");
        printf("4. Display Candidates\n");
        printf("5. Cast Vote\n");
        printf("6. Display Results\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerVoter(voters, &voterCount);
                break;
            case 2:
                addCandidate(candidates, &candidateCount);
                break;
            case 3:
                displayVoters(voters, voterCount);
                break;
            case 4:
                displayCandidates(candidates, candidateCount);
                break;
            case 5:
                castVote(voters, voterCount, candidates, candidateCount);
                break;
            case 6:
                displayResults(candidates, candidateCount);
                break;
            case 7:
                printf("Exiting program.\n");
                // Save voter and candidate records to files before exiting
                saveVoters(voters, voterCount);
                saveCandidates(candidates, candidateCount);
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 7.\n");
        }
    }

    return 0;
}


// Function to save voter records to file
void saveVoters(Voter voters[], int voterCount) {
    FILE *fp = fopen(VOTERS_FILE, "w");
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }
    for (int i = 0; i < voterCount; i++) {
        fprintf(fp, "%d,%s,%d,%d\n", voters[i].voterID, voters[i].name, voters[i].age, voters[i].status);
    }
    fclose(fp);
}

// Function to load voter records from file
int loadVoters(Voter voters[]) {
    FILE *fp = fopen(VOTERS_FILE, "r");
    if (fp == NULL) {
        // If file does not exist, return 0 voter count
        return 0;
    }
    int count = 0;
    while (fscanf(fp, "%d,%[^,],%d,%d\n", &voters[count].voterID, voters[count].name, &voters[count].age, &voters[count].status) == 4) {
        count++;
    }
    fclose(fp);
    return count;
}

// Function to save candidate records to file
void saveCandidates(Candidate candidates[], int candidateCount) {
    FILE *fp = fopen(CANDIDATES_FILE, "w");
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }
    for (int i = 0; i < candidateCount; i++) {
        fprintf(fp, "%d,%s,%d\n", candidates[i].candidateID, candidates[i].name, candidates[i].votes);
    }
    fclose(fp);
}

// Function to load candidate records from file
int loadCandidates(Candidate candidates[]) {
    FILE *fp = fopen(CANDIDATES_FILE, "r");
    if (fp == NULL) {
        // If file does not exist, return 0 candidate count
        return 0;
    }
    int count = 0;
    while (fscanf(fp, "%d,%[^,],%d\n", &candidates[count].candidateID, candidates[count].name, &candidates[count].votes) == 3) {
        count++;
    }
    fclose(fp);
    return count;
}

// Function to register a new voter
void registerVoter(Voter voters[], int *voterCount) {
    if (*voterCount >= MAX_VOTERS) {
        printf("Cannot register more voters. Maximum limit reached.\n");
        return;
    }

    Voter newVoter;
    printf("Enter voter details:\n");
    printf("Voter ID: ");
    scanf("%d", &newVoter.voterID);
    printf("Name: ");
    scanf(" %[^\n]", newVoter.name);  // Read name with spaces
    printf("Age: ");
    scanf("%d", &newVoter.age);
    newVoter.status = NOT_VOTED;

    voters[*voterCount] = newVoter;
    (*voterCount)++;
    saveVoters(voters, *voterCount);
    printf("Voter registered successfully.\n");
}

// Function to add a new candidate
void addCandidate(Candidate candidates[], int *candidateCount) {
    if (*candidateCount >= MAX_CANDIDATES) {
        printf("Cannot add more candidates. Maximum limit reached.\n");
        return;
    }

    Candidate newCandidate;
    printf("Enter candidate details:\n");
    printf("Candidate ID: ");
    scanf("%d", &newCandidate.candidateID);
    printf("Name: ");
    scanf(" %[^\n]", newCandidate.name);  // Read name with spaces
    newCandidate.votes = 0;

    candidates[*candidateCount] = newCandidate;
    (*candidateCount)++;
    saveCandidates(candidates, *candidateCount);
    printf("Candidate added successfully.\n");
}

// Function to display all registered voters
void displayVoters(Voter voters[], int voterCount) {
    if (voterCount == 0) {
        printf("No voters to display.\n");
        return;
    }

    printf("\nList of Registered Voters:\n");
    printf("ID\tName\tAge\tStatus\n");
    printf("---------------------------------------------\n");
    for (int i = 0; i < voterCount; i++) {
        printf("%d\t%s\t%d\t", voters[i].voterID, voters[i].name, voters[i].age);
        switch (voters[i].status) {
            case NOT_VOTED:
                printf("Not Voted\n");
                break;
            case HAS_VOTED:
                printf("Has Voted\n");
                break;
            default:
                printf("Unknown\n");
        }
    }
}

// Function to display all candidates
void displayCandidates(Candidate candidates[], int candidateCount) {
    if (candidateCount == 0) {
        printf("No candidates to display.\n");
        return;
    }

    printf("\nList of Candidates:\n");
    printf("ID\tName\tVotes\n");
    printf("---------------------------------------------\n");
    for (int i = 0; i < candidateCount; i++) {
        printf("%d\t%s\t%d\n", candidates[i].candidateID, candidates[i].name, candidates[i].votes);
    }
}
// Function to cast a vote
void castVote(Voter voters[], int voterCount, Candidate candidates[], int candidateCount) {
    int voterID, candidateID;
    bool foundVoter = false, foundCandidate = false;

    printf("Enter your Voter ID: ");
    scanf("%d", &voterID);

    // Check if voter ID exists
    for (int i = 0; i < voterCount; i++) {
        if (voters[i].voterID == voterID) {
            foundVoter = true;
            if (voters[i].status == HAS_VOTED) {
                printf("You have already cast your vote.\n");
                return;
            }
            printf("Enter the Candidate ID you want to vote for: ");
            scanf("%d", &candidateID);

            // Check if candidate ID exists
            for (int j = 0; j < candidateCount; j++) {
                if (candidates[j].candidateID == candidateID) {
                    foundCandidate = true;
                    candidates[j].votes++;
                    voters[i].status = HAS_VOTED;
                    saveVoters(voters, voterCount);
                    saveCandidates(candidates, candidateCount);
                    printf("Vote cast successfully.\n");
                    return;
                }
            }
            if (!foundCandidate) {
                printf("Invalid Candidate ID. Please enter a valid Candidate ID.\n");
                return;
            }
        }
    }

    if (!foundVoter) {
        printf("Invalid Voter ID. Please enter a valid Voter ID.\n");
    }
}

// Function to display voting results
void displayResults(Candidate candidates[], int candidateCount) {
    if (candidateCount == 0) {
        printf("No candidates available to display results.\n");
        return;
    }

    printf("\nVoting Results:\n");
    printf("Candidate ID\tName\tVotes\n");
    printf("---------------------------------------------\n");
    for (int i = 0; i < candidateCount; i++) {
        printf("%d\t\t%s\t%d\n", candidates[i].candidateID, candidates[i].name, candidates[i].votes);
    }
}
