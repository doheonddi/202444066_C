#include <stdio.h>

int main()
{
    int score[5] = {87,92,89,98,78};

    for(int i=0; i<sizeof(score)/sizeof(score[0]);i++) //sizeof(score) = 20byte     sizeof(score[0]) = 4byte ---> score 가 int로 선언되었기 때문에
    {
        printf("score[%d] = %d\n",i,score[i]);
    }
    return 0;
}