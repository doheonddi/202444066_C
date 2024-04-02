#include <stdio.h>

int main()
{
    int sum,i =0;
    printf("1부터 10까지의 합\n");
    while (i<11)
    {
        sum+=i;
        i++;
    }
    
    printf("%d", sum);
    return 0;
}