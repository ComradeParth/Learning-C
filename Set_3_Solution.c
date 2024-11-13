/*
        Quick Quiz: Write a program to find grade of a student given his marks based on below:
            90 – 100 => A
            80 – 90 => B
            70 – 80 => C
            60 – 70 => D
            50 – 60 => E
            <50 => F
    */
#include <stdio.h>

int main() {
    int marks;

    // Prompt user to enter marks
    printf("Enter the marks of the student: ");
    scanf("%d", &marks);

    // Check the grade based on the marks
    if (marks >= 90 && marks <= 100) {
        printf("Grade: A\n");
    } else if (marks >= 80 && marks < 90) {
        printf("Grade: B\n");
    } else if (marks >= 70 && marks < 80) {
        printf("Grade: C\n");
    } else if (marks >= 60 && marks < 70) {
        printf("Grade: D\n");
    } else if (marks >= 50 && marks < 60) {
        printf("Grade: E\n");
    } else if (marks < 50) {
        printf("Grade: F\n");
    } else {
        printf("Invalid marks entered\n");
    }

    return 0;
}

// Question 1 - answer is "I am 11."
// Question 2 
