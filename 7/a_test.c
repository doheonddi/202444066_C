#include <stdio.h>

int main()
{
    int sum=0, avg=0,x=0;
    int a;
    printf("정수 입력 : ");
    
    while(1){
        scanf("%d",&a);
        if(a%2==1)
        {
            sum=+a;
            x+=1;
            
        }
        avg=sum/x;
        
        else if(a==0)
            break;
    
    }
    printf("홀수의 합 : %d\n",sum);
    printf("홀수의 평균 : %d",avg);
}