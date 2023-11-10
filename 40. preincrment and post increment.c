#include<stdio.h>
int main ()
{
    int x=5,y,z;
    printf("%d\n",x);
    y=++x;
    printf("%d\n",y);
    z=x++;
    printf("%d\n", z);
    return 0;
}