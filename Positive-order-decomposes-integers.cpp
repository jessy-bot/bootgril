#include <stdio.h>
#include <math.h>
int main()
{
	int T,num,dig;
	int d,i;
	int put;
	scanf("%d",&T);
	while (T > 0){
		d = 0;
		T --;
		scanf("%d",&num);
		i = num;
		while (i > 9) {
			d ++;
			i /= 10;
		}
		dig = pow(10,d);
		//printf("%d",dig); 
		while (dig > 0) { //ʹ��dig > 0ʹ��Ϊ���ʹ��num > 0��ʹ��ԭ��ĩβ��0��ʡ�� 
			put = num / dig;
			printf("%d ",put);
			num %= dig;
			dig /= 10;
		}
	}
	return 0;
 } 
 // �����ֽ�������ֽ�
 //���������λ��
 //����ȥ��pow��10����λ�飩
 //�����Ϳ��Էֽ��ÿһλ 
