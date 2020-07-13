//reading a string and then converting the string to uppercase and lower case
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    int i=0;
    char str[20];
    printf("enter string:\n");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        i++;
    }
    printf("\nuppercase :\n");
    puts(str);

    i =0 ;
    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]= tolower(str[i]);
        }
        i++;
    }
    printf("\nlowercase:\n");
    puts(str);
    getch();
    return 0 ;
}
