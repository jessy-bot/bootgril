#include <stdio.h>
int main()
{
	int wid,len;
	scanf("%d %d",&wid,&len);
	int y = 1;
	for(y;y <= len ;y ++)
	{
		int x = 1;
		for (x;x <= wid;x ++)
		{
			if (y == 1 || y == len || x == 1 || x == wid)
			printf("*");
			else
			printf(" ");
		 } 
		    printf("\n");
	}
	return 0;
 } 
