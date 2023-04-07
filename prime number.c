#include <stdio.h>
int isPrime(int num);
int main()
{
int num1, num2, i, flag;
printf("Enter two positive integers: ");
scanf("%d %d", &num1, &num2);
printf("Prime numbers between %d and %d are: ", num1, num2);
for(i=num1+1; i<num2; i++) 
{
flag = isPrime(i);
if(flag == 1)
{
printf("%d ", i);
}
}
return 0;
}
int isPrime(int num)
{
int i;
if(num < 2)
{
return 0;
}
for(i=2; i<=num/2; i++) 
{
if(num%i == 0)
{
return 0;
}
}
    return 1;
}