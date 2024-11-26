/* C program to find the occurance of a number in a given array of elements */

#include <stdio.h>
#include <math.h>

int main () {
int i,j,n,k, a[]={1,2,3,1,3,2,4,6,4,5,6,5,2};

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

//occurence of a number //

printf("Enter the value of k :- ");
scanf("%d", &k);
j=0;
for (i=0; i<n; i++)
if(a[i]==k)
{
	j++;
}
printf("The number of times the element %d was there is %d", k, j);
return 0;}


