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

int main()
{
    int marks;

    // Prompt user to enter marks
    printf("Enter the marks of the student: ");
    scanf("%d", &marks);

    // Check the grade based on the marks
    if (marks >= 90 && marks <= 100)
    {
        printf("Grade: A\n");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Grade: C\n");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Grade: D\n");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("Grade: E\n");
    }
    else if (marks < 50)
    {
        printf("Grade: F\n");
    }
    else
    {
        printf("Invalid marks entered\n");
    }

    return 0;
}

// Question 1 - answer is "I am 11."
// Question 2
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("what are marks in subject 1 ?\n");
    scanf("%f", &a);
    printf("what are marks in subject 2 ?\n");
    scanf("%f", &b);
    printf("what are marks in subject 3 ?\n");
    scanf("%f", &c);
    float i = (a + b + c) / 3;
    if (i >= 40 && a >= 33 && b >= 33 && c >= 33)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }

    return 0;
}
// Question 3
#include <stdio.h>
int main()
{
    int i, tax;
    printf("What is your income?\n");
    scanf("%d", &i);
    if (i <= 250000)
    {
        tax = 0;
    }
    else if (i > 250000 && i <= 500000)
    {
        tax = 0.05 * i;
    }
    else if (i >= 500000 && i <= 1000000)
    {
        tax = (0.05 * 250000) + 0.2 * (i - 250000);
    }
    else
    {
        tax = (0.05 * 250000) + (0.2 * 500000) + 0.3 * (i - 750000);
    }
    printf("The tax you need to pay is %d", tax);
    return 0;
}
// Question 4
#include <stdio.h>
// condition for leap year is divisible by 4  and not by 100 or divisible by 400.
int main()
{
    int y;
    printf("Number of days in the Year?\n");
    scanf("%d", &y);
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        printf("The year is a leap year.");
    }
    else
    {
        printf("The year is not a leap year.");
    }
    return 0;
}
// Question 5
#include <stdio.h>
int main()
{
    // ch >=97 && <= 122
    char c;
    printf("Enter the character.\n", c);
    scanf("%c", &c);
    if (c >= 97 && c <= 122)
    {
        printf("The input is lowercase.");
    }
    else
    {
        printf("The input is not lowercase.");
    }
    return 0;
}
// Question 6
#include <stdio.h>
int main()
{
    float a, b, c, d;
    printf("Enter input 1.\n", a);
    scanf("%f", &a);
    printf("Enter input 2.\n", b);
    scanf("%f", &b);
    printf("Enter input 3.\n", c);
    scanf("%f", &c);
    printf("Enter input 4.\n", d);
    scanf("%f", &d);
    if (a > b && a > c && a > d)
    {
        printf("The greatest number is %f.",a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest number is %f.",b);
    }
    else if (c > b && c > a && c > d)
    {
        printf("The greatest number is %f.",c);
    }
    else if (d > b && d > c && d > a)
    {
        printf("The greatest number is %f."),d;
    }
        return 0;
}