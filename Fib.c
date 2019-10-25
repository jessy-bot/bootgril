#include <stdio.h>
int f(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
	return 0;
}

int f(int n)
{
	int f1,f2,c,m;
		f1 = 1;
		f2 = 1;
		
		if (n == 1)
			return f1;
		if (n == 2)
			return f2;
		else
		{
			for (m = 3;m <= n ;m ++)
			{
				c = f1 + f2;
				f1 = f2;
				f2 = c;
			}
			return c;
		}
}
