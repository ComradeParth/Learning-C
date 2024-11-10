//Question 1 (a)
#include <stdio.h>
int main(){
    int length = 3;
    int breadth = 4;
    printf("Area is %d", length*breadth);
return 1;
}
//Question 1 (b)
#include <stdio.h>
int main(){
    int length, breadth;
    printf("Length? ");
    scanf("%d", &length);
    printf("breadth? ");
    scanf("%d", &breadth);
    printf("Area is %d\n", length*breadth);
return 0;
}
//Question 2
#include <stdio.h>
int main(){
    float radius;
    printf("Radius? ");
    scanf("%f", &radius);
    printf("Area of the CIRCLE of radius %f is %f\n", radius, radius*3.14*radius);
return 0;
}  
//Question 2 Cylinder
#include <stdio.h>
int main(){
    float r, h;
    printf("Radius? ");
    scanf("%f", &r);
    printf("Height? ");
    scanf("%f", &h);
    printf("The Volume of your Cylinder is %.2f\n", 3.14*r*r*h);
return 0;
}
//Question 3
#include <stdio.h>
int main(){
    float c, R;
    printf("Celcius? ");
    scanf("%f", &c);
    R = (c*9/5) + 32;
    printf("Result is  Fahreheit %f\n", R);
return 0;
}
//Question 4
#include <stdio.h>
int main(){
    float P, R, T, SI;
    printf("Principal ? ");
    scanf("%f", &P);
    printf("Rate of interest? ");
    scanf("%f", &R);
    printf("Term? ");
    scanf("%f", &T);
    SI = P * R * (T/100);
    printf("The Simple Interest is %.2f\n", SI);
return 0;
}