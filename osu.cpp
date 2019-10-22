#include <stdio.h>
int main()
{
	int t,a,b,c,max,min,i;
	scanf("%d",&t);
	while (t > 0){
		max = 0;
		min = 0;
		t--; 
		scanf("%d%d%d",&a,&b,&c);
		for (i = 1;i<= a+b+c;i++) {
			if (i <= c) 
			{
				max += 50*(2*(i-1)+1);
			} 
			if (i >c && i <=b+c)
		    {
				max += 100*(2*(i-1)+1);
			} 
			if (i > b+c && i<= b+c+a) 
			{
				max += 300*(2*(i-1)+1);
			}
			if (i <=a)
			{
				min += 300*(2*(i-1)+1);
			}
			if (i>a && i<= a+b) 
			{
				min += 100*(2*(i-1)+1);
			} 
			if (i > a+b && i<=a+ b+ c)
			{
				min += 50*(2*(i-1)+1);
			}
		}
		printf("%d %d\n",min,max);	
	}
	return 0;
}

/*Description

节奏大师是一个能与开心消消乐相媲美的娱乐游戏，july兄非常擅长节奏大师。
有一个叫osu的游戏跟节奏大师应该差不多，它计分是这样的：有一个像july一样的大神，不会漏掉任何音符，每个音符有可能有三种待处理分数Point，300，100，50。实际分数是P = Point * (Combo * 2 + 1)。Combo表示当前的连续音符数，对于像july一样的大神，由于不会漏音符，所以他敲击的第i个音符Combo就等于i – 1。 

Input

第一行输入T 
接下来T行，每行三个数字，分别代表300,100,50三种分数的个数（每个数字都小于1000）。

Output

每行两个数字，用一个空格分开，两个数字分别是AllCombo（没有漏掉任何音符）情况下最小分数和最大分数。*/
