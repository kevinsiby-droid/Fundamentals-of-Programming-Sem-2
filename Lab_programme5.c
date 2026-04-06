//KEVIN SIBY
//Photonics
//25020096
//Sorting
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[30];
    int marks;
};

// Function for Alphabetical Sort (by Name)
void sortByName(struct Student s[], int n) {
    struct Student temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(strcmp(s[j].name, s[j+1].name) > 0) {
                temp = s[j]; s[j] = s[j+1]; s[j+1] = temp;
            }
        }
    }
}

// Function to Sort by Roll Number
void sortByRoll(struct Student s[], int n) {
    struct Student temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(s[j].roll > s[j+1].roll) {
                temp = s[j]; s[j] = s[j+1]; s[j+1] = temp;
            }
        }
    }
}

// Function to Sort by Marks (Rank-wise)
void sortByMarks(struct Student s[], int n) {
    struct Student temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(s[j].marks < s[j+1].marks) {
                temp = s[j]; s[j] = s[j+1]; s[j+1] = temp;
            }
        }
    }
}

// Function to display the list
void display(struct Student s[], int n) {
    printf("Roll\tName\tMarks\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t%s\t%d\n", s[i].roll, s[i].name, s[i].marks);
    }
}

int main() {
    int n;
    struct Student s[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter Roll, Name, Marks for student %d: ", i + 1);
        scanf("%d %s %d", &s[i].roll, s[i].name, &s[i].marks);
    }

    // (a) Alphabetical
    sortByName(s, n);
    printf("\n--- Alphabetical List ---\n");
    display(s, n);

    // (b) Roll Number
    sortByRoll(s, n);
    printf("\n--- Sorted by Roll No ---\n");
    display(s, n);

    // (c) Rank List
    sortByMarks(s, n);
    printf("\n--- Rank List (Marks) ---\n");
    display(s, n);

    return 0;
}
