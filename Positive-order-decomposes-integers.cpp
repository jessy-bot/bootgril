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
		while (dig > 0) { //使用dig > 0使用为如果使用num > 0会使数原本末尾的0被省略 
			put = num / dig;
			printf("%d ",put);
			num %= dig;
			dig /= 10;
		}
	}
	return 0;
 } 
 // 对数字进行正序分解
 //先求出数的位数
 //用数去除pow（10，数位书）
 //这样就可以分解出每一位 
