//reading a string and then converting the string to uppercase
#include <stdio.h>
#include <conio.h>
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
    puts(str);
    getch();
    return 0 ;
}
