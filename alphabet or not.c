#include <stdio.h>
void main() 
{
char ch;
printf("Input character: ");
scanf("%c", &ch);
if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
{
printf("'%c' is alphabet", ch);
}
else {
printf("'%c' is not alphabet", ch);
}    
}