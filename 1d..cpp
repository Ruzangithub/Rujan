//Write a program that takes name and age of a 5 persons as an input and gives the degree of membership of the person as its output.
#include<stdio.h>

struct People
{
	char name[50];
	int age;
};

int main()
{
	int i;
	struct People o[5];
	float b;
	
	for(i=0;i<5;i++){
		printf("Enter the name and age of %d person: \n",i+1);
		scanf("%s",&o[i].name);
	
		scanf("%d",&o[i].age);
		
		
	}
	for(i=0;i<5;i++)
	{
		if(o[i].age<=20)
		{
			printf("The degree of membership of %s is 1.\n",o[i].name);
		}
		else if(o[i].age>20 && o[i].age<=30)
		{
			b = (30-o[i].age)*0.1;
			printf("The degree of membership of %s is %0.2f.\n",o[i].name,b);
		}
		else
		{
			printf("The degree of membership of %s is 0.\n",o[i].name);
		}
	}
	
	return 69;
}
