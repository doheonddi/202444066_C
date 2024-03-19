#include <stdio.h>

int main()
{
    int cnt;

    printf("알파벳 대문자가 출력됩니다.\n");

    for (cnt=65; cnt <= 90; cnt++){

        printf("%c", cnt);
    }
    return 0;
}