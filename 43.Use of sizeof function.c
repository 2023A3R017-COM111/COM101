#include<stdio.h>
int main ()
{
    //Demonstrating the use of size of operator
    int integervar;
    float floatvar;
    char charvar;
    printf("Size of the int: %lu bytes\n",  sizeof(int));
    printf("Size of the float: %lu bytes\n",  sizeof(float));
    printf("Size of the char: %lu bytes\n",  sizeof(char));
    printf("Size of the integervar: %lu bytes\n",  sizeof(integervar));
    printf("Size of the floatvar: %lu bytes\n",  sizeof(floatvar));
    printf("Size of the charvar: %lu bytes\n", sizeof(charvar));
    return 0;

}
