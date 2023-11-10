//Demonstrating the use of isalpha or isdigit
#include<stdio.h>
#include<ctype.h>
int main ()
{

    char input;
    printf("Enter the input :\n");
    scanf("%c", &input);
    if(isalpha(input))
    {
        printf("Entered input is character type");
    }

    else if (isdigit(input))
     printf("Entered input is digit type");

    else
    {
       printf("Entered input is special character type");
    }
    return 0;
}
