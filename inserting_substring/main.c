#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void insert_substring(char sub[],char mainstr[],char finalstr[],int pos);
int main()
{
    char ms[20],ss[20],fs[50];
    int findex ;
    printf("enter main string:");
    gets(ms);
    printf("\nenter substring to be inserted : ");
    gets(ss);
    printf("\nenter position at which substring has to be inserted : ");
    scanf("%d",&findex);
    insert_substring(ss,ms,fs,findex);
    printf("\n");
    puts(fs);
    getch();
    return 0;
}
void insert_substring(char sub[],char mainstr[],char finalstr[],int pos)
{
    int i=0,j=0,k=0;
    int lenmain,lensub,lenfinal;
    lenmain = strlen(mainstr);
    lensub = strlen(sub);
    lenfinal = lensub+lenmain;
    printf("%d",lenfinal);
    while(i<=lenfinal)
    {
        if(i==pos)
        {
            printf("in if");
            while(j<lensub)
            {
                printf("in while");
                finalstr[i]=sub[j];
                j++;
                i++;
            }
        }
        else
        {
            printf("in else");
            finalstr[i]=mainstr[k];
            k++;
            i++;
        }

    }
    finalstr[i]='\0';

}
