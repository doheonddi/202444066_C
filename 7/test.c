#include <stdio.h>
//정수를 입력받아 1부터 입력받은 정수까지를 차례대로 출력하는 프로그램을 작성하시오,
int main()
{
    int a,i;
    printf("정수를 입력하시오 : ");
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        printf("%d",i);
    }
    return 0;
}
