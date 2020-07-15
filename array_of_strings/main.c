//sorting student names using an array of strings
#include <stdio.h>
#include <conio.h>
#include <string.h>
void getnames(char names[5][20],int n)
{
    int i ;
    printf("enter the names of the students:\n");
    for(i=0;i<n;i++)
    {
        printf("name of student number %d:",i+1);
        gets(names[i]);
    }
}
void displaynames(char names[5][20],int n)
{
    int i ;
    printf("the names of the students:\n");
    for(i=0;i<n;i++)
    {
        puts(names[i]);
        printf("\n");
    }
}
void sort_names(char names[5][20],int n)
{
    int i,j;
    char temp[20];
    printf("inside sort");
    //using bubble sort [maybe]
    for(i=0;i<n;i++)
    {
        printf("in for1");
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(names[j],names[j+1])>0)//if the ASCII value of the first unmatched character is greater than the second.
            {
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
}

int main()
{
    int n;
    char names[5][20];
    do
    {
        printf("enter number of students[less than or equal to 5] : ");
        scanf("%d",&n);
    }while(n>5);
    fflush(stdin);
    getnames(names,n);
    displaynames(names,n);
    printf("After sorting:\n");
    sort_names(names,n);
    displaynames(names,n);
    getch();
    return 0;
}
