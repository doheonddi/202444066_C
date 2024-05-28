#include <stdio.h>

int main()
{
    int a[10]={10,20,30,40,50,60,70,80,90};
    int *pi;
    pi=&a;
    printf("pi의 주소 = %d\n", pi);
    printf("*pi++=%d\n",*pi++);
    printf("*pi++ after p의 주소 =%d\n",pi);        //주소값 4바이트만큼 증가
    printf("(*pi)++=%d\n",(*pi)++);
    printf("*pi=%d\n",*pi);

    printf("*++pi=%d\n",*++pi);
    printf("++*pi=%d\n",++*pi);

    return 0;
}