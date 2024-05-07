#include <stdio.h>

int sum_sum(num);

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",sum_sum(num));
    sum_sum(num);
}
int sum_sum
{
    if(n==1)
    {
        return 1;
    }
    return n+sum_sum(n-1);
}