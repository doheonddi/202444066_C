#include <stdio.h>
int get_integer()
{
    int a,
    scanf("%d",&a);
    return a;
}
int main()
{
    int a=get_integer();
    int b=get_integer();
    printf("%d + %d = %d", a,b,a+b);
}