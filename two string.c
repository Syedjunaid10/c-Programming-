#include <stdio.h>
#include <string.h>
int main()
{
char str1[100], str2[100];
int freq1[26] = {0}, freq2[26] = {0};
int i, len1, len2, flag = 1;
printf("Enter first string: ");
scanf("%s", str1);
printf("Enter second string: ");
scanf("%s", str2);
len1 = strlen(str1);
len2 = strlen(str2);
if (len1 != len2)
{
printf("Strings are not anagrams.\n");
return 0;
}
for (i = 0; i < len1; i++)
{
freq1[str1[i] - 'a']++;
}
for (i = 0; i < len2; i++)
{
freq2[str2[i] - 'a']++;
}
for (i = 0; i < 26; i++)
{
if (freq1[i] != freq2[i])
{
flag = 0;
break;
}
}
if (flag)
{
printf("Strings are anagrams.\n");
}
else
{
printf("Strings are not anagrams.\n");
}
return 0;
}