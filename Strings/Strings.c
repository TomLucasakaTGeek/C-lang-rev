#include <stdio.h>
#include <string.h>

int main()
{
  char str[20];
printf("Enter a string");
scanf("%[^\n]", &str);      //taking input in string
printf("%s", str);

return 0;
}

void main()
{
  strcat("hello", "world");      //concatinate - joins two strings together
  strlen("studytonight");       //length of string
  strcmp("study ", "tonight"); //comparing two strings <returns "-1" if strings are unequal>
  strcpy(s1, "StudyTonight"); //copies second string to first variable
  strrev(s1);                //reverses given string
}
