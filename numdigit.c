/*计算整数位数*/
#include<stdio.h>
int main(void)
{
    int digits = 0 ,n;
    printf("enter a nonnegative integer:");
    scanf("%d",&n);

    do{
        n/=10;
        digits++;
        }while (n>0);

        printf("the number has %d digit(s).\n",digits);

        return 0;
}

