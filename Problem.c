#include <stdio.h>
int main()
{
	int wid,len;
	int i,j;
	int ture;
	scanf("%d %d",&wid,&len);
	int map[100][100];
	for (i = 0;i < len ; i++)
	{
		for (j = 0 ; j < wid ;j ++)
			{
				scanf("%d",&map[i][j]);
			}
 	}
 	//读入二维数组,已检查无下标越界。 
	 for (i = 0;i < len ;i ++)
	 {
	 	int min = map[i][0];
	 	for (j = 0;j< wid;j ++)
	 	{
	 		if (map[i][j] < min)
	 		{
	 			min = map[i][j];
	 			ture = j;
			 }
			 if (j == wid - 1)
			 {
			 	int height;
			 	for (height = 0;height < len ; height ++)
			 	{
			 		int yes = 1;
			 		if (min < map[height][ture])
			 		{
			 			yes = 0;
					}
					if (yes == 1 && height == len -1)
					{
						printf("(%d,%d)",i+1,ture+1);
						goto out;
					}
					 
				 } 
			 }
		 }
	  } 
	  out :
	return 0;
}
//Segmentation fault:段错误，检查是否有数组越界，指针异常，访问到不应该访问的内存区域.
