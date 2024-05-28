#include <stdio.h>

int main()
{
    int a[]={100,200,300};
    int *pa;

    pa = a;

    printf("int a[]={100,200,300}일 때 포인터 증감 연산\n");

    printf("\n1. 포인터 *++pa의 증감 연산을 수행한 주소값과 데이터값\n");
    printf("포인터 현재의 주소값 : %d\n",pa);
    printf("현재 포인터 주소의 데이터값 : %d\n", *a);
    printf("포인터 *++pa 수행 후 데이터값 : %d\n",*++pa);
    printf("포인터 *++pa 수행 후 주소값 : %d\n",pa);

    printf("\n2. 포인터 *--pa의 증감 연산을 수행한 주소값과 데이터값\n");
    printf("포인터 현재의 주소값 : %d\n",pa);
    printf("포인터 *--pa 수행 후 데이터값 : %d\n",*--pa);
    printf("포인터 *--pa 수행 후 주소값 : %d\n",pa);
    
    printf("\n3. 포인터 ++*pa의 증감 연산을 수행한 주소값과 데이터값\n");
    printf("포인터 현재의 주소값 : %d\n",pa);
    printf("포인터 ++*pa 수행 후 데이터값 : %d\n",++*pa);
    printf("포인터 ++*pa 수행 후 주소값 : %d\n",pa);

    return 0;
}