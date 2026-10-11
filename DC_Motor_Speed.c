#include<stdio.h>

int main()
{
    int a,i;
    printf("enter the initial RPM of motor:");
    scanf("%d",&a);

    for (i=a ; i<=100 ; i+=20)
    {
    printf("speed increased to = %d \n",i);
    }

    printf("this is the maximum speed");
    return 0;
}