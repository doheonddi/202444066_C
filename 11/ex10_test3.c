#include <stdio.h>

float area(int cnt)
{
    return cnt * cnt * 3.14;
}
int main()
{
    int cnt;
    float area_value;
    scanf("%d",&cnt);
    area_value = area(cnt);
    printf("%.2f",area_value);
    return 0;
}