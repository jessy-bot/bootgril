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
	
	for(i = 0; i < length; i ++)//��� 
	{
		for(j = i; j < length; j ++)//�յ� 
		{
			sum = 0;//�յ�֪��������εĺͳ�ʼ�� 
			
			for(k = i; k <= j; k ++)//�����յ㼰�ڲ���Ԫ����� 
				sum += number[k];
		}
		
		if(sum > max)
			max = sum;
		
	}
	
	printf("%d\n",max);
	
	return 0;
 } 
 
 //�����������С���еĺͣ��������ڸ��Ӷ�̫�ߣ� 
