#include <stdio.h>

int Add();
int G_a;
int G_b;

int main()
{
    int sum=0;
    G_a=10;
    G_b=20;

    printf("G_a=10, G_b=20일 때 덧셈 연산 결과\n");
    printf("\n[main() 함수 영역]\n");
    printf("덧셈 연산 위해 Add()함수 호출");
    sum=Add();

    printf("\n[main() 함수 영역]\n");
    printf("ADD() 함수로부터 덧셈 연산 결과 반환\n");
    printf("전역 변수 사용 : %d + %d = %d\n", G_a, G_b, sum);
    return 0;
}

int Add()
{
    int hap=0;
    hap=G_a+G_b;

    printf("\n[ADD() 함수 영역]\n");
    printf("정수 2개의 덧셈 연산 수행");

    return hap;
}