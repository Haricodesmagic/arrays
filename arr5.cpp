#include <stdio.h>
#include <math.h>

int main () {
int i,j,n, a[]={1,2,3,4,5,6,7,8,9,10};
n= sizeof(a)/sizeof(a[0]);

printf("%d \n", n);

for (i=0; i<n/2; i++)
{
	a[i]= a[i]+a[n-i-1];
	a[n-i-1]= a[i]-a[n-i-1];
	a[i]= a[i]-a[n-i-1];
}
for (i=0; i<n; i++)
{
	printf("%d ", a[i]);
}
return 0;
}
