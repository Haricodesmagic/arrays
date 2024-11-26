#include <stdio.h>
#include <math.h>

int main () {
int i,j,n, a[]={6,7,7,8,8};
n= sizeof(a)/sizeof(a[0]);
for (i=0; i<n; i++)
{
	for (j=0;j<n-1; j++)
	{
		if(a[j]>a[j+1])
		{
			int temp = a[j];
			a[j]=a[j+1];
			a[j+1]= temp;
		}
	}
}
for (i=0; i<n; i++)
printf("%d ", a[i]);

int total = 0;
float average = 0;
for (i=0; i<n; i++)
{
    total = total + a[i];
}
average = total/n;
printf("The value of average is %f", average);
return 0;
}


