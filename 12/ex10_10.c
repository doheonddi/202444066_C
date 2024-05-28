#include <stdio.h>
#define AL 5 // 배열의 크기

int main()
{
    int s_list[AL] = {5,4,1,2,3};
    int a, b, temp, sort;

    printf("초기> 배열 요소 : 5 4 1 3 2\n");
    printf("\n[for 문으로 선택 정렬 수행]\n");

    for(a=0;a<AL-1;a++) //자신과 비교한 인덱스 제외
    {
        sort = a;  //배열 요소 4개 반복 대입
        for(b=a+1;b<AL;b++)  //자신과 비교한 인덱스 제외
        {
            if(s_list[b]<s_list[sort]) // 배열 요소 3개에 대해 작은 값 비교
            {
                sort=b;
            }
        }
        temp=s_list[a];
        s_list[a]=s_list[sort];
        s_list[sort]=temp;
    }
    printf("결봐> 배열 요소");

    for(a=0;a<AL;a++)
    {
        printf("%d",s_list[a]);
    }
    return 0;
}