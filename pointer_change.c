// 指针翻转达到移位的效果

#include <stdio.h>
#define SIZE 10000
#include <string.h>

void left(int * a, int length, int step);
void right(int * a, int length, int step);
void change(int * a, int start, int end);
int main(void)
{
	int num[SIZE];
	int length, i;
	char option[6];
	int mood, step;
	
	scanf("%d", &length);//数组的长度
	for(i = 0; i < length; i ++)
		scanf("%d", &num[i]);
		
	scanf("%s %d", option, &step);//操作的类型, 操作的步数 
	
	mood = strlen(option);
	 
	if(mood == 4)
		 left(num, length, step);
	if(mood == 5)
		right(num, length, step);
		
	for(i = 0; i < length; i ++)
		printf("%d ", num[i]);
	
		printf("\n \n");
		
	printf("That's all!");
	
	return 0;
 } 
 
 void change(int * a, int start, int end){
 	
 	int temp;
 	int * p_begin;
 	int * p_end;
 	
 	p_begin = &a[start];
 	p_end = &a[end];
 	
 	while(p_begin < p_end)
 	{
 		temp = *p_begin;
 		*p_begin = *p_end;
 		*p_end = temp;
		
		p_begin ++;
		p_end --;		
	}
	
 }//checked
 
void left(int * a, int length, int step){
	int start, end;
	
	start = step;
	end = length - 1;
	change(a, start, end);
	
	start = 0;
	end = step - 1;
	change(a, start, end);
	
	start = 0;
	end = length - 1;
	change(a, start, end);
	
}

void right(int * a, int length, int step){
	
	int start, end;
	
	start = 0;
	end = length - step - 1;
	change(a, start, end);
	
	start = length - step;
	end = length - 1;
	change(a, start, end);
	
	start = 0;
	end = length - 1;
	change(a, start, end);
	
} 


//代码说明
//in pointer_to_move; 
