//Q1
#include <stdio.h>
#include<math.h>

float a, b, c;


float avg(){
    (a+b+c)/3.0;
    return (a+b+c)/3.0;
}

int main(){
    scanf("%f %f %f", &a, &b, &c);
    printf("The average is %f\n", avg());
return 0;
}

//Q2
#include <stdio.h>

float C, F;

float conv(){
    F = (C*1.8) + 32;
    return F;
}

int main(){
    scanf("%f", &C);
    printf("The value of F is %f \n", conv());
return 0;
}

//Q3
#include <stdio.h>

float F, m, g = 9.8;

float conv(){
    F = m*g;
    return F;
}

int main(){
    scanf("%f", &m);
    printf("The value of F in Kg is %fN \n", conv());
return 0;
}

//Q4
#include <stdio.h>

int fib(int n){
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(){
    int n;
    printf("n? \n");
    scanf("%d", &n);
    printf("The value of n is %d.", fib(n));

return 0;
}

//Q5
4 , 5, 5

//Q6
#include <stdio.h>

int sumotwo(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    return n = n + sumotwo(n-1);
}

int main(){
    int n;
    printf("n?");
    scanf("%d", &n);
    printf("sum of first %d natural numbers is %d", n, sumotwo(n));

return 0;
}

//Q7
#include <stdio.h>
int i, j;

void printpattern(int n){
    for (int i = 1; i <=n; i++)
    {
        for ( int j = 1; j <= 2*i - 1; j++)
        {
            printf("* ");
    }
    printf("\n");
    }
    
}

int main(){
    int n;
    printf("Number of lines?");
    scanf("%d", &n);

    printpattern(n);

return 0;
}
