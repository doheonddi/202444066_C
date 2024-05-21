#include <stdio.h>
#define DT 3 // 배열의 크기를 3으로 정함
int main()
{
    int score[3];
    int cnt, sum=0;
    float avg;

    for(cnt = 0; cnt < DT ; cnt ++)
    {
        printf("과목%d 점수 : ___\b\b\b", cnt+1);// \b가 쓰면 지워지는 그런거    }
        scanf_s("%d",&score[cnt]);
    }    
    for(cnt=0; cnt < DT; cnt++)
    {
        sum+=score[cnt];  //3개 과목 총점 산출
    }
    avg=(float)sum/DT;  //평균 산출

    printf("총점 : %d\n", sum);
    printf("평균 : %.2f\n", avg);
    return 0;

}