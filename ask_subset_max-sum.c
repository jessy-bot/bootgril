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
	
	for(i = 0; i < length; i ++)//��� 
	{
		for(j = i; j < length; j ++)//�յ� 
		{
			sum = 0;//�յ�֪��������εĺͳ�ʼ�� 
			
			for(k = i; k <= j; k ++)//�����յ㼰�ڲ���Ԫ����� 
				sum += number[k];
		}
		
		if(sum > max)
			max = sum;
		
	}
	
	printf("%d\n",max);
	
	return 0;
 } 
 
 //�����������С���еĺͣ��������ڸ��Ӷ�̫�ߣ� */
 
 
 
 
 
 
 //vision 2
 
 #include <stdio.h>

//N�����鳤�ȣ�num�Ǵ���������飬sum������ǰ׺�ͣ�����ȫ��������Ϊ���Կ��ܴ������
int N, num[16384], sum[16384];
//NΪ���鳤��
 
int main()
{
    //��������
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        scanf("%d", &num[i]);
    
    //��������ǰ׺��
    for(int i = 0; i < N; i++) {
        if(i == 0)
        	sum[i] = num[i];
		else
			sum[i] = num[i - 1]; 	 
    }

    int ans = num[0]; //ans������������кͣ���ʼ��Ϊnum[0]�ܱ�֤���ս����ȷ
    
    //i��j�ֱ���ö�ٵ������е������յ�
    for(int i = 0; i < N; i++) {
        for(int j = i; j < N; j++) {
            int s = sum[j] - sum[i];
            if(s > ans) ans = s;
        }
    }
    
    printf("%d\n", ans);

    return 0;
} 
