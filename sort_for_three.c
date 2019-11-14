
int main(){
    int a,b,c,temp;
    //读入三个数
    scanf("%d %d %d",&a,&b,&c);
    //三个if 后续有列表解析过程
    if(a>b) temp=a,a=b,b=temp;
    if(b>c) temp=b,b=c,c=temp;
    if(a>b) temp=a,a=b,b=temp;
    //打印排序后的三个数
    printf("%d %d %d",a,b,c);
    return 0;
}

