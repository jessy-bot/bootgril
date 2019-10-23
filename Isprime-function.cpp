#include <stdio.h>
int isprime(int num);
int main()
{
	int num;
	scanf("%d",&num);
	if ( isprime(num) )
		printf("%d是素数",num); 
	else 
		printf("%d不是素数",num);
	return 0;
}

int isprime(int num)
{
	int ret = 1;
	
	if (num == 1) {
		ret = 0;
		return ret;
	}
	
	int i;
	for (i = 2;i <= num -1;i ++ )
	{
		if (num % i == 0)
			ret = 0;
			break;
	}
	
	return ret;
}
