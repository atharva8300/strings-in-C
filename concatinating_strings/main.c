//the following code demonstrates appending one string at the end of another string using 2 methods
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void append(char target[],char source[]);
int main()
{
    char str1[20],str2[10];
    char str3[20] ="hello";
    char str4[10]="world";
    int len1,len2 ;
    do
    {
        printf("enter string 1: ");
        gets(str1);
        len1 = strlen(str1); // if you don't want to use string.h library use a for loop to calculate the length
        printf("\nenter string 2: ");
        gets(str2);
        len2 = strlen(str2);
    }while(len1>10 && len2>10);
    append(str1,str2);
    printf("\nconcatenation of first 2 strings is :\n");
    puts(str1);
    printf("concatenation of 3rd and 4th string is :\n");
    strcat(str3,str4);
    puts(str3);
    getch();
    return 0;
}
void append(char target[],char source[])
{
    int i=0,j=0;
    while(target[i]!='\0')
    {
        i++;
    }
    while(source[j]!='\0')
    {
        target[i]=source[j];
        i++;
        j++;
    }
    target[i]='\0';

}
