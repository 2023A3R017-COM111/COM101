//Demonstrating explicit cast
#include<stdio.h>
#include<math.h>
int main ()
{
    int i,n;
    float sum;
    sum=0;
    for(i=1;i<=10;++i)
    {
        sum = sum+1/(float)i;
        printf("%d %.4f \n" , i, sum);

    }
    return 0;

}
