/*
辗转相除
如果b = 0 ，计算结束，a就是最大公约数
否则计算a除b的余数，并让a = b，且b就是那个余数 
回到第一步
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
