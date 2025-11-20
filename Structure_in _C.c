#include<stdio.h>

struct student{
	int id;
	char name[20];
	float percent;
};

int main()
{
//	struct student s1={101, "Abdul", 87.9};
//	printf("ID of Student1:%d\n",s1.id);
//	printf("Name of Student1:%s\n",s1.name);
//	printf("Percentage of Student1:%.2f",s1.percent);
//	
	struct student s3;
	printf("Enter your ID:");
	scanf("%d",&s3.id);
	printf("\n Enter your name:");
	scanf("%s",s3.name);
	printf("\nEnter your percentage:");
	scanf("%f",&s3.percent);
	printf("\n");
	printf("ID of Student1:%d\n",s3.id);
	printf("Name of Student1:%s\n",s3.name);
	printf("Percentage of Student1:%.2f%%",s3.percent);
	
	
	
}
