#include<stdio.h>
 
int main ()
{
    int i，j;
    int temp;
    int array[10];
 
    printf("请输入10个整数：\n");
    for(i=0; i<10; i++)
    {
        printf("第 %d 个元素: ",i+1);
        scanf("%d",&array[i]);              
    }
    //读入数据 
    for(i=0; i<10; i++)
    {
        for(j=0; j<10-i-1; j++)
           {
                if(array[j] > array[j+1])    //相邻元素之间比较
                {                            //大的元素向右移动
                    temp = array[j]          //每一轮比较最大的元素在最后
                    array[j] = array[j+1]
                    array[j+1] = temp;
                }
            }
    }
 
 
printf("排序后的结果: \n");
for(i=0; i<10; i++)
{
    printf("%d",array[i]);
}
printf("\n");
return 0;
}
