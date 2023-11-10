#include<stdio.h>
#include<math.h>
int main ()
{
    double x=2.7;
    double y=3.4;
    //Square root
    printf("Square root of %.2f: %.2f\n",x,sqrt(x));
    //Exponential function
    printf("Exponential function, e^%.2f: %.2f\n",x,exp(x));
    //Natural logarithm 
    printf("Natural logarithm of %.2f: %.2f\n",x,log(x));
    // Common logarithm 
    printf("Common logarithm of %.2f: %.2f\n",x,log10(x));
    //Natural logarithm
    printf("Natural logarithm of %.2f: %.2f\n",x,log(x));
    //Ceil
    printf("Ceil of %.2f: %.2f\n",x,ceil(x));
    //Floor
    printf("Floor of %.2f: %.2f\n",x,floor(x));
    //Round
    printf("Round of %.2f: %.2f\n",x,round(x));
    //Sine
    printf("Sine of %.2f radians : %.2f\n",x,sin(x));
    //Cosine
    printf("Cosine of %.2f radians : %.2f\n",x,cos(x));
    //Tangent
    printf("Tangent of %.2f radians : %.2f\n",x,tan(x));
    //Arcsine
    printf("Arcsine of %.2f:%.2f radians\n",x,asin(x));
    //Arccosine
    printf("Arcosine of %.2f : %.2f radians\n",x,acos(x));
    //Arctangent
    printf("Arctangent of  %.2f radians : %.2f\n",x,atan2(y,x));
    //Raised to a number
    printf("%.2f rasied to the power of %.2f: %.2f\n",x,y,pow(x,y));
    //Absoulte number
    printf("Absolute value of %.2f:%.2f\n", -x,fabs (-x));
    //Hyberbolic Sine
    printf("Hyberbolic sine of %.2f:%.2f\n", x , sinh(x));
    //Hyberbolic Consine
    printf("Hyberbolic cosineof %.2f:%.2f\n", x,cosh(x));
    //Hyberbolic Tangent
    printf("Hyberbolic tangent of %.2f:%.2f\n", tanh (x));

    return 0;
   
}