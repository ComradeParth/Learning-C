//Quick question : print int from 10 to 20 using int i = 0
#include <stdio.h>
int main(){
    int i = 0;
    while (i<=20)
    {
        (i>=10 && i<=20) ? printf("%d\n", i) : 0;
        i++;
    }
    
return 0;
}
//Quick quiz - First n natural numbers using do while
#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);
    return 0;
}
//Quick quiz - firs n natural numbers using for loop

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        
        printf("%d\n", i);
    }

    return 0;
}
// Reverse order
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = n; i >0  ; i--)
    {
        printf("%d\n", i);
    }
    
return 0;
}
//Question 1
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    
return 0;
}
//Question 2
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 10; i ; i--)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    
return 0;
}
//Question 3
atleast once
//Question 4
True
//Question 5
#include <stdio.h>
int main()
{
    int s = 0, i = 1;
    while (i <= 10)
    {
        s += i; // or s+=i
        i++;
    }

    printf("Sum is %d\n", s);

    return 0;
}
//Question 6
#include <stdio.h>
int main(){
    int s = 0, i = 1;
    do
    {
        s+=i;
        i++;
    } while (i<=10);
    printf("Sum is %d", s);
return 0;
} //and
#include <stdio.h>
int main(){
    int s = 0;
    for (int i = 0;  i <=10; i++)
    {
        s+=i;
    }
    printf("sum is %d", s);
return 0;
}
//Question 7
#include <stdio.h>
int main(){
    int s=0;
    for (int i = 0; i <= 10; i++)
    {
        s += i *8;
    }
    printf("sum is %d", s);
return 0;
}
//Question 8
#include <stdio.h>
int main(){
    int s=1, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        s *=  i;
    }
    printf("%d", s);
return 0;
}
//Question 9
#include <stdio.h>
int main(){
    int n,  i = 1, s=1;
    scanf("%d", &n);
    while (i<=n)
    {
        s*=i;
        i++;
    }
    printf("Sum is %d", s);
return 0;
}
//Question 10
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n<=1)
    {
        printf("Not Prime\n");
        return 0;
    }
    int aip = 1;
    for (int i = 2; i*i <= n; i++) /*We only need to check for divisors up to the square root of n because if n is divisible by any number greater than √n, the corresponding divisor would be less than √n.
For example, if n = 36, its divisors are 1, 2, 3, 4, 6, 9, 12, 18, 36. Notice that 4 (which is √36) is the point where we can stop checking, as beyond this, any factors are just complementary (e.g., 6 * 6 = 36, 3 * 12 = 36).*/
    {
        (n%i==0) ? (aip = 0):0;
    }
    aip ? printf("True\n"):printf("False\n");
return 0;
}
//Question 11
//using while loop
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n<=1)
    {
        printf("Not Prime");
        return 0;
    }
    int i = 2, aip = 1;
    while (i*i<=n)
    {
       if (n%i==0)
       {
        aip=0;
        break;
       }
    i++;
    }
    aip?printf("Prime\n"):printf("Not Prime\n");
return 0;
}
//using do while loop
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Not Prime");
        return 0;
    }
    int i = 2, aip = 1;
    do
    {
        if (n % i == 0)
        {
            aip = 0;
            break;
        }
        i++;
    } while (i * i <= n);
    aip ? printf("Prime\n") : printf("Not Prime");
 return 0;
}