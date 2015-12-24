/*Counting Sort*/

#include<stdio.h>
/*#include<conio.h>*/

int main()
{
	int arr[10];
	
	printf("Enter the array\n");
	
	for(int i=0;i<10;i++)
	{
		printf("Enter the element no. %d\n>",i+1);
		scanf("%d",&arr[i]);	
	}
	
	int farr[10];
	
	printf("\ncalculating frequency array\n");
	
	for(int l=0;l<10;l++)
	{
		farr[l]=0;
	}
	
	
	for(int j=0;j<10;j++)
	{
		++farr[arr[j]];
	}
	
	/*for(int k=0;k<10;k++)
	{
		printf("%d",farr[k]);
	}*/
	
	int aary[10];
	
	for(int m=0;m<10;m++)
	{
	      if(farr[m]==0)
	        continue;
	      
	      else 
	           while(farr[m]>0)
	           {
	                printf("%d\t",m);
	                --farr[m];
	           }    
	}
}
