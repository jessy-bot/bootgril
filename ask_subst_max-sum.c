#include <stdio.h>
#define length 10

int main()
{
	int i,j,k;
	int number[length];
	int max,sum;
	
	for(i = 0; i < length; i ++)
		scanf("%d",&number[i]);
	
	max = number[0];
	
	for(i = 0; i < length; i ++)//起点 
	{
		for(j = i; j < length; j ++)//终点 
		{
			sum = 0;//终点知道后给本次的和初始化 
			
			for(k = i; k <= j; k ++)//起点和终点及内部的元素求和 
				sum += number[k];
		}
		
		if(sum > max)
			max = sum;
		
	}
	
	printf("%d\n",max);
	
	return 0;
 } 
 
 //可以用来求较小数列的和，问题在于复杂度太高； 
