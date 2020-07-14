#include <stdio.h>
#include <conio.h>
#include <string.h>
void insert_substring(char sub[],char mainstr[],int pos);
int main()
{
    char ms[50],ss[20];
    int findex ;
    printf("enter main string [less than 30 chars]:");
    gets(ms);
    printf("\nenter substring to be inserted : ");
    gets(ss);
    printf("\nenter position at which substring has to be inserted : ");
    scanf("%d",&findex);
    insert_substring(ss,ms,findex);
    puts(ms);
    getch();
    return 0;
}
void insert_substring(char sub[],char mainstr[],int pos)
{
    int i,j=0,n;
    n=strlen(mainstr);
    i=n;
    printf("inside func %d%d",i,pos);
    while(i>=pos)
    {
        printf("inside while1");
        mainstr[i+1]=mainstr[i];
        i--;
    }

    i = pos;
    while(sub[j] != '\0' )
    {
        printf("in while2 ");
        mainstr[i]=sub[j];
        i++;
        j++;
    }

}
