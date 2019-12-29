// vision 1

/* #include <stdio.h>
#define length 10

int main()
{
	int i,j,k;
	int number[length];
	int max,sum;
	
	for(i = 0; i < length; i ++)
		scanf("%d",&number[i]);
	
	max = number[0];
	
	for(i = 0; i < length; i ++)//起点 
	{
		for(j = i; j < length; j ++)//终点 
		{
			sum = 0;//终点知道后给本次的和初始化 
			
			for(k = i; k <= j; k ++)//起点和终点及内部的元素求和 
				sum += number[k];
		}
		
		if(sum > max)
			max = sum;
		
	}
	
	printf("%d\n",max);
	
	return 0;
 } 
 
 //可以用来求较小数列的和，问题在于复杂度太高； */
 
 
 
 
 
 
 //vision 2
 
 #include <stdio.h>

//N是数组长度，num是待计算的数组，sum是数组前缀和，放在全局区是因为可以开很大的数组
int N, num[16384], sum[16384];
//N为数组长度
 
int main()
{
    //输入数据
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        scanf("%d", &num[i]);
    
    //计算数组前缀和
    for(int i = 0; i < N; i++) {
        if(i == 0)
        	sum[i] = num[i];
		else
			sum[i] = num[i - 1]; 	 
    }

    int ans = num[0]; //ans保存最大子序列和，初始化为num[0]能保证最终结果正确
    
    //i和j分别是枚举的子序列的起点和终点
    for(int i = 0; i < N; i++) {
        for(int j = i; j < N; j++) {
            int s = sum[j] - sum[i];
            if(s > ans) ans = s;
        }
    }
    
    printf("%d\n", ans);

    return 0;
} 
