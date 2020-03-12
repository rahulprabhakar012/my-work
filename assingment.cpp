#include <stdio.h>
int checkPrime(int, int); //Function to check prime or not 

int main()
{
    int num, check;
    scanf("%d", &num); //The number is taken from test case data
    check = checkPrime(num, num/2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
int checkPrime(int a,int b)
{
 if(a==2)
 return 1;
 if(a%5==0)
 return 0;
 if(a%b==0)
 return 0;
 else 
   checkPrime(a,b-1);
 return 1;
}
