#include <stdio.h>
void main() 
{
char ch;
printf("Input character: ");
scanf("%c", &ch);
if(ch >= 'a' && ch <= 'z') 
{
printf("'%c' is lowercase alphabet", ch);
}
else if(ch >= 'A' && ch <= 'Z') 
{
printf("'%c' is uppercase alphabet", ch);
}
else {
printf("'%c' is not an alphabet", ch);
}
}