/*C program to merge two strings*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char string1[100],string2[100];
	printf("Enter the string 1:");
	gets(string1);
	printf("Enter the string 2:");
	gets(string2);
	for(i=0;string1[i]!='\0';i++)
	{
	}
	for(j=0;string2[j]!='\0';j++)
	{
		string1[i]=string2[j];
		i++;
	}
	string1[i]='\0';
	puts(string1);
	return 0;
}
