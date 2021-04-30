#include<stdio.h>
int main()
{
	int i;
	int j;
	int sum=0;
	int matrix[3][3];
	int *A=&matrix;
	printf("ENTER THE ELEMENTS:   \n");
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Element-[%d],[%d] :  \n",i,j);
		}
	}
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		   scanf("%d",&*((A+i*3)+j));	
		}	
	}
	printf("THE MATRIX IS:  \n");
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		   printf("%d\t",*((A+i*3)+j));
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		if(i==j)
		{
		sum=sum+matrix[i][j];
     	}
     	}
	}
	printf("THE SUM OF DIAGONALS IS:%d",sum);
	return 0;
}
