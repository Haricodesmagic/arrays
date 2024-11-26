#include <stdio.h>
#include <math.h>

int main () {
int i,j,n, a[]={1,2,3,4,5,6,7,8,9,10};
n= sizeof(a)/sizeof(a[0]);

for (i=0; i<n; i=i+2)
{
int temp = a[i];
a[i] = a[i+1];
a[i+1]=temp;
}
for (i=0; i<n; i++)
{
printf("%d", a[i]);
}
return 0;
}


