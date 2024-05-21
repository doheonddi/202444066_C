#include <stdio.h>

int main()
{
    int n=0;
    int i=0;
    int sum=0;
    printf("정수를 입력하세요.");
    scanf("%d",&n);

    while(i<=n)
    {
        if("i%2==0")
        {
            sum+=i;
        }
        i++;
    }
    printf("%d",sum);
    return 0;
}