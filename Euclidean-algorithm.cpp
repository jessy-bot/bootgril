/*
շת���
���b = 0 �����������a�������Լ��
�������a��b������������a = b����b�����Ǹ����� 
�ص���һ��
*/ 
#include <stdio.h>
int main()
{
	int a,b,rem;
	scanf("%d%d",&a,&b); 
	while (b != 0){
		rem = a%b;
		a = b;
		b = rem;
	}
	printf("%d",a);
	
	return 0;
 } 
