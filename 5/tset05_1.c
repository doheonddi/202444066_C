#include <stdio.h>

int main()
{
    int num,i;
    printf("입력 : ");
    scanf("%d",&num);

    for(i=1;i<=9;i++) // 반복문 안에선 특이한 경우가 아니면 선언문은 쓰지 않는다.
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
}