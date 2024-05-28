#include <stdio.h>
void fortune_cookie(char msg[])
{
    printf("Message reads: %s\n", msg);
    printf("msg occupies %li bytes\n",sizeof(msg)); // quote 의 주소값이 나옴
}
int main()
{
    char quote[]= "Coolies make yout fat";
    fortune_cookie(quote);
}