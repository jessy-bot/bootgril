#include<stdio.h>
 
int main ()
{
    int i��j;
    int temp;
    int array[10];
 
    printf("������10��������\n");
    for(i=0; i<10; i++)
    {
        printf("�� %d ��Ԫ��: ",i+1);
        scanf("%d",&array[i]);              
    }
    //�������� 
    for(i=0; i<10; i++)
    {
        for(j=0; j<10-i-1; j++)
           {
                if(array[j] > array[j+1])    //����Ԫ��֮��Ƚ�
                {                            //���Ԫ�������ƶ�
                    temp = array[j]          //ÿһ�ֱȽ�����Ԫ�������
                    array[j] = array[j+1]
                    array[j+1] = temp;
                }
            }
    }
 
 
printf("�����Ľ��: \n");
for(i=0; i<10; i++)
{
    printf("%d",array[i]);
}
printf("\n");
return 0;
}
