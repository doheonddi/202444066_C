#include <stdio.h>

int main()
{
    int a, b, result;
    result=0;
    scanf_s("%d %d",&a,&b);
    result=a+b;
    printf("%d + %d = %d\n",a,b,result);
    result=a-b;
    printf("%d - %d = %d\n",a,b,result);
    result=a*b;
    printf("%d * %d = %d\n",a,b,result);
    result=a/b;
    printf("%d / %d = %d\n",a,b,result);
}
