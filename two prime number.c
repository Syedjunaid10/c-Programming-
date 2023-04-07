#include <stdio.h>
int isPrime(int num)
{
int i;
for (i = 2; i <= num / 2; i++)
{
if (num % i == 0) 
{
return 0;
}
}
return 1;
}
int main() 
{
int num, i, flag = 0;
printf("Enter a positive integer: ");
scanf("%d", &num);
for (i = 2; i <= num / 2; i++) 
{
if (isPrime(i))
{
if (isPrime(num - i)) 
{
printf("%d = %d + %d\n", num, i, num - i);
flag = 1;
}
}
}
if (!flag) 
{
printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
}
return 0;
}