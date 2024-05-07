//0이 입력되면 반복문을 멈추고 그 전까지 입력받은 수열에 대하여 홀수의 개수와 짝수의 개수를 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main()
{   
    int a,even,odd;

    while(a!=0)
    {
        
        if(a==0)
            break;
        if(a%2==0)
            even++;
        else
            odd++;
        scanf("%d",&a);
    }
    printf("odd : %d\n",odd);
    printf("even : %d",even);
    return 0;
}