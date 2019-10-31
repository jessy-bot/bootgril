#include <stdio.h>
int main()
{
	int wid,len;
	int i,j;
	scanf("%d %d",&wid,&len);
	int map[wid][len];
	for (i = 0;i < len ; i++)
	{
		for (j = 0 ; j < wid ;j ++)
			{
				scanf("%d",&map[i][j]);
			}
	}
				int min = map[0][0];
				int max;
				int found = 0;
				int wlo,hlo;
		for (i = 0;i < len ; i++)
		{
			for (j = 0 ; j < wid ;j ++)
			{
				if (map[i][j] < min)
				{
				 min=map[i][j];
				 wlo = i;
				 hlo = j;
				}
			}
					{
					for (i = 0;i < len;i++)
					{
						int yes = 1;
						max = map[wlo][hlo];
						if ( map[i][hlo]  > max )
						{
							yes = 0;
							break;
						}
						if(yes == 1 && i == len -1)
						{
							goto out; 
						}	
					}			
					}
		}
		out :
		printf("(%d,%d)",hlo,wlo);
 } 
