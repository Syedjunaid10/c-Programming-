#include <stdio.h>
void main()
{
int amount, notes;
printf("Input amount: ");
scanf("%d", &amount);

notes = amount / 500;
amount = amount % 500;
printf("500: %d\n", notes);

notes = amount / 100;
amount = amount % 100;
printf("100: %d\n", notes);

notes = amount / 50;
amount = amount % 50;
printf("50: %d\n", notes);

notes = amount / 20;
amount = amount % 20;
printf("20: %d\n", notes);

notes = amount / 10;
amount = amount % 10;
printf("10: %d\n", notes);

notes = amount / 5;
amount = amount % 5;
printf("5: %d\n", notes);

notes = amount / 2;
amount = amount % 2;
printf("2: %d\n", notes);

notes = amount / 1;
amount = amount % 1;
printf("1: %d\n", notes);   
}