#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n<=0)
    {
        printf("Invalid Input");
        return 1;
    }
    int max, num;
    printf("Enter the number 1 : ");
    scanf("%d", &max);
    for (int i=2;i<=n;i++)
    {
        printf("Enter the number %d: ", i);
        scanf("%d", & num);
        if (num>max)
        {
            max=num;
        }
    }
    printf("The maximum number is %d\n", max);
    return 0;
    
}