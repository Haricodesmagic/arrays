#include <stdio.h>
#include <math.h>

int main () {
int i,j,n,k, a[]={1,2,3,4,5,6,7,10,8,9};

n= sizeof(a)/sizeof(a[0]);
printf("The number of elements in the array is %d \n", n);

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
printf("The elements in the array are a[%d] = ", n);

for (i=0; i<n; i++)
{
printf("%d ", a[i]);
}
printf("Enter the value of k :- ");
scanf("%d", &k);
printf("The value of the kth smallest element is %d \nThe value of the kth largest element is %d", a[k-1], a[n-k]);
return 0;
}


