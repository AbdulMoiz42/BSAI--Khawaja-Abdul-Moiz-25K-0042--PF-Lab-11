#include<stdio.h>
struct DOB{
	int day;
	char month[20];
	int year;
};
struct student{
	int id;
	char name[20];
	float percent;
	struct DOB dob;
};
int main()
{
	struct student s3;
	printf("Enter your ID:");
	scanf("%d",&s3.id);
	printf("\n Enter your name:");
	scanf("%s",s3.name);
	printf("\nEnter your percentage:");
	scanf("%f",&s3.percent);
	printf("\nEnter your DATE of Birth:");
	printf("\nEnter your Day of Birth:");
	scanf("%d",&s3.dob.day);
	printf("\nEnter your month of Birth:");
	scanf("%s",&s3.dob.month);
	printf("\nEnter your Year of Birth:");
	scanf("%d",&s3.dob.year);
	
	printf("\n");
	printf("ID of Student1:%d\n",s3.id);
	printf("Name of Student1:%s\n",s3.name);
	printf("Percentage of Student1:%.2f%%",s3.percent);
	printf("\nDate of birth of student3:%d-%s-%d",s3.dob.day,s3.dob.month,s3.dob.year);
	
	
	
	
	return 0;
}
