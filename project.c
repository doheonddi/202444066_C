#include <stdio.h>
int main()
{
    int num;
    num=1;

    switch (num){
        case '1':
            printf("%d",num+2);
            break;
        case '2':
            printf("%d",num+3);
            break;
        case '3':
            printf("%d",num+1);
            break;
        default:
            printf("%d",num);
            break;
    }
    return 0;
}