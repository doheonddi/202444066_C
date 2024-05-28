#include <stdio.h>

int main()
{
    int N;
    int MAX=0, cnt=0;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=N-1;i>=0;i--)
    {
        if(MAX < A[i])
        {
            MAX=A[i];
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}