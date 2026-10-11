#include<stdio.h>

int main()
{
    int i;
    printf("the initial temp is 25c \n");

    for (i=30 ; i<=45 ; i+=5)
    {
    printf("temp increased to = %dc \n",i);
    }

    printf("this is the maximum temp");
    return 0;
}