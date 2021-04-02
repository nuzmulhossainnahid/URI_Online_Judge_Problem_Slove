#include<stdio.h>
void main()
{
    int i ,y ,m ,d;
    scanf("%d",&i);

    y = i / 365;
    m = i % 365 / 30;
    d = i % 365 % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y ,m ,d);
}
