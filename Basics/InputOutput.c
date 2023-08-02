#include <stdio.h>
int main()
{  
  int x;
  //using scanf()
  scanf("%d", &x); //scanf() is used to take input until a whitespace(blank) is encountered  
  //using printf()
  printf("Value of x is: %d", x); //usually uesd for printing 
  
  //using getchar()
  c = int getchar(void);  //reads input for single(1) character and converts it into integer
  //using putchar()
  int putchar(int c);  //displays the character passed to it 
  //using gets()
  char* gets(char* str); //reads the text until line of input terminates(press "Enter")
  //using puts()
  int puts(char* str);  //displays the same line of input
  
return 0;
}
