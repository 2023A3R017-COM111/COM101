#include <stdio.h>
#include<math.h>

int main ()
{
int n, m, r, sum = 0, a = 0 ;  
printf ( " Please enter an integer: " );
scanf ("%d", &n );
m = n;
while (m != 0)
{
m = m / 10;
++a;
}
m = n; 
while (m > 0 )
{
r = m%10;
sum = sum +  pow( r, a );
m = m / 10;
}
if ( sum == n )
{
printf ( " %d is an Armstrong number \n ", n );
}
else
{
printf ( " %d is not an Armstrong number \n ", n );
}
return 0;
}