#include <stdio.h>
void main() 
{
int decimal, binary = 0, base = 1;
printf("Input decimal number: ");
scanf("%d", &decimal);
while (decimal > 0)
{
binary += (decimal % 2) * base;
decimal = decimal / 2;
base = base * 10;
}
printf("Binary number: %d\n", binary);
}
