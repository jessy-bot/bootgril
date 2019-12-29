/* #include <stdio.h>
#define SIZE 100

int main()
{
	int length, i, tra, j;
	int num[SIZE];
	
	printf("Please enter the length of arry:  ");
	scanf("%d", &length);	
	
	printf("Please enter the set:\n");
	for(i = 0; i < length; i++)
		scanf("%d", &num[i]);
		
	printf("Please enter the feet you need to go:");
	scanf("%d", &tra);
	
	int temp;
	
	for(i = 1; i <= tra; i ++)
	{
		temp = num[length - 1];
		
		for(j = length - 1; j >= 1; j --)
			num[j] = num[j - 1];
			
		num[0] = temp; 
	}
	
	printf("The result is: \n");
	
	for(i = 0; i < length; i ++)
		printf("%d ", num[i]);
	
	printf("\n \n");
	
	printf("Bye\n");
	return 0;	
} */

//go_back

#include <stdio.h>
#include <string.h>
#define SIZE 100

void fun(char * a, int length, int mood);
int main()
{
	char word[SIZE];
	int length, i, j;
	char option[7];
	int mood;
	
	printf("Please enter the sentence: \n");
	gets(word);

	length = strlen(word);
	
	printf("which option you want?\n");
	gets(option);
	
	mood = strlen(option);
	
	fun(word, length, mood);
	
	printf("The result is: \n");
	
	puts(word);
}

void fun(char * a, int length, int mood)
{
	int step;
	int i, j, k;
	char temp;
	
	if(mood == 4)
	{
		printf("Enter the step: ");
		scanf("%d", &step);
		
		for(i = 0; i < step; i ++)
		{
			temp = a[0];
			
			for(j = 1; j <= length - 1; j ++)
				a[j - 1] = a[j];
				
			a[length - 1] = temp;
		}
	}
	else
	{
		printf("Enter the step: ");
		scanf("%d", &step);
		
		for(i = 0; i < step; i ++)
		{
			temp = a[length - 1];
			
			for(j = length - 1; j >= 1; j --)
				a[j] = a[j - 1];
			
			a[0] = temp;
		}
	}
}
