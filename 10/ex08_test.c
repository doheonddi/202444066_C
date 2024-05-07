#include <stdio.h>

int print_reverse(num);

int main()
{
    int num;
    scanf("%d",&num);
    print_reverse(num);
}
int print_reverse(int n)
{
    if(n==0)
    {
        return 0;
    }

    printf("%d\n",n);
    return print_reverse(n-1);
}