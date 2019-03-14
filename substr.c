/*  
 * C program to accept a string and a substring and
 * check if the substring is present in the given string
 */
#include<stdio.h>
 
void main()
{
    char str[80], search[10];
    int count1 = 0, count2 = 0, i, j, flag;
    printf("Enter a string:");
    gets(str);
    printf("Enter search substring:");
    gets(search);
    while (str[count1] !=NULL)
        count1++;
    while (search[count2] !=NULL)
        count2++;
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (str[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("Succesful");
    else
        printf("SEARCH UNSUCCESSFUL!");
}
