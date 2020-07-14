#include <stdio.h>
#include <conio.h>
#include <string.h>

void substring(char mainstring[],char substring[],int,int);
int main()
{
    char ms[20],ss[20];//ms = main string , ss = substring
    int m,n;
    printf("enter main string : ");
    gets(ms);
    printf("\nenter index from which you've to grab the substring : ");
    scanf("%d",&m);
    printf("\nenter length of substring : ");
    scanf("%d",&n);
    substring(ms,ss,m,n);
    printf("\nthe substring is : ");
    puts(ss);
    getch();
    return 0;

}
void substring(char mainstring[],char substring[],int findex,int len)
{
    int i,j;
    i=findex;
    j=0 ;
    while(mainstring[i]!= '\0' && len>0)
    {
        substring[j]=mainstring[i];
        i++;
        j++;
        len--;
    }
    substring[j]='\0';
}
