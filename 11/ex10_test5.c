#include <stdio.h>
#define CNT 10
int array_1(int a[]) // 매개변수 cnt 필요없음. 위에 전역변수로 지정해줬기 때문에 불필요함. 기호상수는 매개변수에 못쓴다.
{
    for(int i=0; i<cnt; i++)
    {
        a[i]+=1;
    }
}

int main()
{
    int arr[CNT]={1,2,3,4,5,6,7,8,9};
    printf("before\n");
    for(int i=0; i<CNT; i++)
    {
        printf("%d\n",arr[i]);
    }
    array_1(arr, CNT);
    printf("After\n");
    for(int i=0;i<CNT;i++)
    {
        printf("%d\n", arr[i]);
    }

}