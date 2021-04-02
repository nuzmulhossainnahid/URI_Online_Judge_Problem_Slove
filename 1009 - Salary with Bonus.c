#include <stdio.h>
int main()
{
    char name[30];
    double fs,SOLD,TOTAL;
    scanf("%s%lf %lf",&name ,&fs, &SOLD);
    TOTAL = fs + (SOLD*0.15);
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}
