#include<stdio.h>
int main()
{
	int i,sum=0;
	char str[100];
	printf("Enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			sum+=str[i]-'0';
		}
	}
	printf("Sum of Numbers present inside in string is %d",sum);
	return 0;
}
