#include<stdio.h>

int main()
{
    int i,a;
    printf("the initial angle of the motor is:0\n");
    printf("enter the incremet angle:");
    scanf("%d",&a);

    for (i=a ; i<=180 ; i+=a)
    {
    printf("angle increased to = %d \n",i);
    }

    printf("the rotation is complete.");
    return 0;
}