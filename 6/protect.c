#include <stdio.h>

int main()
{
    int jumsu;
    char grade;
    scanf("%d",&jumsu);

    switch (jumsu/10)
    {
        case 10:
        case 9:
            grade ='A';
            break;
        case 8:
            grade ='B';
            break;
        case 7:
            grade ='C';
            break;
        default:
            grade ='D';
            break;
    }
    printf("%c",grade);

    return 0;
}