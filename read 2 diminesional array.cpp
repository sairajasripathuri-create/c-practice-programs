#include<stdio.h>
int main()
{
	int a[3][4],i,j;
	for(i=0;i<3;i++)
	printf("enter array element:");
	{
		for (j=0;j<3;j++)
		 scanf ("%d",&a[i][j]);
	 }
printf ("array elements are:\n");
 for (j=0;j<4;j++)
 printf ("%d\t",a[i][j]);
       printf("\n");

     return 0;
}
 
