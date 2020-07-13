#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int len1,len2,i,same = 0 ;
    char str1[20],str2[20];
    printf("enter string1 \n");
    gets(str1);
    printf("\nenter string 2 \n");
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1 != len2)
    {
        printf("not equal");
    }
    else
    {
        for(i=0;i<len1;i++)
        {
            if(str1[i]==str2[i])
            {
                continue;
            }
            else
            {
                break ;
            }
        }
        if(i == len1)
        {
            printf("equal strings");
        }
        else
        {
            printf("unequal strings");
        }
    }
    getch();
    return 0;
}
