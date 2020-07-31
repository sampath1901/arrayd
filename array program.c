#include<stdio.h>
struct employee{
    char empname[20];
    long int empn0;
	int age;
	long  int salary ;
}s[1];
void main()
{
	int i,j;
	printf("enter information of 20 employees\n");
	for(i=0;i<1;i++)
	{
		printf("enter name of employee\n");
		scanf("%s",&s[i].empname);
		printf("enter phone number\n"); 
		scanf("%li",&s[i].empn0);
		printf("enter age\n");
		scanf("%d",&s[i].age);
		printf("enter salary\n");
		scanf("%li",&s[i].salary);
	}
   printf("NAME\tAGE\tPHONENUMBER\tSALARY\n");
   for(j=0;j<1;j++)
   {
   	printf("%s\t%d\t%lu\t%lu",s[j].empname,s[j].age,s[j].empn0,s[j].salary);
   }	
}
