#include <stdio.h>

int main()
{
	int num[1000];
	int length, i;
	int * p_begin, * p_end;
	int temp;
	
	printf("Please enter the length of arry: ");
	scanf("%d", &length);
	
	p_begin = num;
	p_end = &num[length - 1];
	
	printf("Please enter the set :\n");
	
	for(i = 0; i < length; i ++)
		scanf("%d", &num[i]);
		
	while(p_begin - p_end < 0)
	{
		temp = *p_end;
		*p_end = *p_begin;
		*p_begin = temp;
		
		p_begin += 1;
		p_end -= 1;
	}

	printf("The result: \n");
	
	for(i = 0; i < length; i ++)
		printf("%d ", *(num + i) );
		
	return 0;
 } 
