//Write a program that takes two or more sets as input and produces their Cartesian product as output.
#include<stdio.h>

int main()
{
	int x[100],y[100],i,j,n1,n2;
	
	printf("enter number of elements to be stored in set A:");
	scanf("%d",&n1);
	printf("enter %d elements for set A:",n1);
	for(i=0;i<n1;i++){
		scanf("%d",&x[i]);
	}
		printf("enter number of elements to be stored in set B:");
		scanf("%d",&n2);
		printf("enter %d elements for set B:",n2);
		for(i=0;i<n2;i++){
		scanf("%d",&y[i]);
	}
		printf("Cartesian Product =");
		printf("{");
		
		for(i=0;i<n1;i++){
			for(j=0;j<n2;j++)
			{
				printf("(%d , %d)",x[i],y[j]);
				printf(",");
			}
		}
	printf("}");
	return 0;
}