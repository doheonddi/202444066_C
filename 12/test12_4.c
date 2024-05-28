#include <stdio.h>


int main()
{
    int suNo;
    scanf("%d", &suNo);
    int A[suNo];
    int S[suNo];
    for(int i=0;i<=suNo; i++)
    {
        scanf("%d,&a[i]");
    }
    for(int i=0;i<=suNo; i++)
    {
        S[i]=S[i-1]+A[i];
    }
    for(int i=0;i<=suNo; i++)
    {
        printf("%d", S[i]);
    }
    return 0;
}
