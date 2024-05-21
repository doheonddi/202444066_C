#include <stdio.h>

void print_equls(int cnt)
{
    for(int i=0;i<cnt;i++)
    {
        printf("============================\n");
    }
}
int main()
{
    int cnt;
    scanf("%d",&cnt);
    print_equls(cnt);
}