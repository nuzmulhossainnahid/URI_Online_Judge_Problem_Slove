#include<stdio.h>
void main()
{
    int A , B, C , D, DIFERENCA;
    scanf("%d%d%d%d",&A ,&B ,&C ,&D);
    DIFERENCA=(A * B - C * D);
    printf("DIFERENCA = %d\n",DIFERENCA);
}
#include<stdio.h>
void main()
{
   int NUMBER , hours;
   float amoun ,SALARY;
   scanf("%d",&NUMBER);
   scanf("%d%f",&hours,&amoun);
   SALARY =hours*amoun;
   printf("NUMBER = %d\n",NUMBER);
   printf("SALARY = U$ %.2f\n", SALARY);

}
