#include <stdio.h>
void main() 
{
int num, reverse = 0;
printf("Input number: ");
scanf("%d", &num);
for (int i = num; i > 0; i = i / 10)
{
reverse = reverse * 10 + (i % 10);
}
printf("Reverse of %d = %d\n", num, reverse);
}