#include<stdio.h>
struct student
{
 	char name[30];
 	int rno,ch;
 	float english;
 	float maths;
 	float socialsciences;
 	float science;
 	float computer;
 	float marks;
};

int main()
{
 	struct student s[20], temp;
 	int i,j,n,ch;
	printf("Enter The Number of student record to be entered :");
 	scanf("%d",&n);
 	for(i=0;i< n;i++)
	{
  		printf("Enter Roll Number of student : ");
  		scanf("%d",&s[i].rno);
  		printf("Enter Name of student : ");
  		scanf("%s",&s[i].name);
  		printf("Enter Mark in English : ");
  		scanf("%f",&s[i].english);
  		printf("Enter Mark in Maths : ");
  		scanf("%f",&s[i].maths);
  		printf("Enter Mark in Social Sciences : ");
  		scanf("%f",&s[i].socialsciences);
  		printf("Enter Mark in Science : ");
  		scanf("%f",&s[i].science);
		printf("Enter Mark in Computer : ");
  		scanf("%f",&s[i].computer);
  		printf("Enter Total Marks : ");
  		scanf("%f",&s[i].marks);
  		printf("\n");
 	}
 	printf("\t\tMenu\n");
 	printf("\n");
 	printf("------------------");
 	printf("\n");
 	printf("1.Sort by marks in English.");
 	printf("\n");
 	printf("2.Sort by marks in Maths.");
 	printf("\n");
 	printf("3.Sort by marks in Social Sciences.");
 	printf("\n");
	printf("4.Sort by marks in Science.");
	printf("\n");
	printf("5.Sort by marks in Computer.");
	printf("\n");
	printf("6.Sort by Total Marks.");
	printf("\n");
	printf("Please enter your choice :");
	scanf("%d",&ch);
 	
 	switch(ch)
 	{
 		case 1 : for(i=0;i< n-1;i++)
 				{
  					for(j=i+1;j< n;j++)
  					{
   						if(s[i].english<s[j].english)
   						{
    						temp = s[i];
    						s[i] = s[j];
    						s[j] = temp;
   						}
  					}
 				}
 				printf("The record of name and marks of the student is :\n");
 			printf("Sl.No");
 			printf("\t");
 			printf("Name");
 			printf("\t");
 			printf("Roll No.");
 			printf("\t");
 			printf("English");
 			printf("\t");
 			printf("Maths");
 			printf("\t");
 			printf("Social Science");
 			printf("\t");
 			printf("Science");
 			printf("\t");
 			printf("Computer");
 			printf("\t");
 			printf("Total");
 			printf("\t");
 			printf("\n");
 			for(i=0;i< n;i++)
 			{
 				printf("%d.",i+1);
 				printf("\t");
  				printf("%s", s[i].name);
  				printf("\t");
  				printf("%d", s[i].rno);
  				printf("\t");
  				printf("\t");
  				printf("%0.2f\t\t", s[i].english);
  				printf("%0.2f\t\t", s[i].maths);
  				printf("%0.2f\t\t", s[i].socialsciences);
  				printf("%0.2f\t\t", s[i].science);
  				printf("%0.2f\t\t", s[i].computer);
  				printf("%0.2f\n", s[i].marks);
			}
			break;
			
 		case 2 : for(i=0;i< n-1;i++)
 				{
  					for(j=i+1;j< n;j++)
  					{
   						if(s[i].maths<s[j].maths)
   						{
    						temp = s[i];
    						s[i] = s[j];
    						s[j] = temp;
   						}
  					}
 				}
 				printf("The record of name and marks of the student is :\n");
 				printf("Sl.No");
 				printf("\t");
 				printf("Name");
 				printf("\t");
 				printf("Roll No.");
 				printf("\t");
 				printf("Maths");
 				printf("\t");
 				printf("English");
 				printf("\t");
 				printf("Social Science");
 				printf("\t");
 				printf("Science");
 				printf("\t");
 				printf("Computer");
 				printf("\t");
 				printf("Total");
 				printf("\n");
 				for(i=0;i< n;i++)
 				{
 					printf("%d.",i+1);
 					printf("\t");
  					printf("%s", s[i].name);
  					printf("\t");
  					printf("%d", s[i].rno);
  					printf("\t");
  					printf("\t");
  					printf("%0.2f\t\t", s[i].maths);
  					printf("%0.2f\t\t", s[i].english);
  					printf("%0.2f\t\t", s[i].socialsciences);
  					printf("%0.2f\t\t", s[i].science);
  					printf("%0.2f\t\t", s[i].computer);
  					printf("%0.2f\n", s[i].marks);
 				}
 				break;
 				
 		case 3 : for(i=0;i< n-1;i++)
 				{
  					for(j=i+1;j< n;j++)
  					{
   						if(s[i].socialsciences<s[j].socialsciences)
   						{
    						temp = s[i];
    						s[i] = s[j];
    						s[j] = temp;
   						}
  					}
 				}
 				printf("The record of name and marks of the student is :\n");
 				printf("Sl.No");
 				printf("\t");
 				printf("Name");
 				printf("\t");
 				printf("Roll No.");
 				printf("\t");
 				printf("Social Science");
 				printf("\t");
 				printf("Maths");
 				printf("\t");
 				printf("English");
 				printf("\t");
 				printf("Science");
 				printf("\t");
 				printf("Computer");
 				printf("\t");
 				printf("Total");
 				printf("\n");
 				for(i=0;i< n;i++)
 				{
 					printf("%d.",i+1);
 					printf("\t");
  					printf("%s", s[i].name);
  					printf("\t");
  					printf("%d", s[i].rno);
  					printf("\t");
  					printf("\t");
  					printf("%0.2f\t\t", s[i].socialsciences);
  					printf("%0.2f\t\t", s[i].maths);
  					printf("%0.2f\t\t", s[i].english);
  					printf("%0.2f\t\t", s[i].science);
  					printf("%0.2f\t\t", s[i].computer);
  					printf("%0.2f\n", s[i].marks);
 				}
 				break;
 				
 		case 4 : for(i=0;i< n-1;i++)
 				{
  					for(j=i+1;j< n;j++)
  					{
   						if(s[i].science<s[j].science)
   						{
    						temp = s[i];
    						s[i] = s[j];
    						s[j] = temp;
   						}
  					}
 				}
 				printf("The record of name and marks of the student is :\n");
 				printf("Sl.No");
 				printf("\t");
 				printf("Name");
 				printf("\t");
 				printf("Roll No.");
 				printf("\t");
 				printf("Science");
 				printf("\t");
 				printf("Social Science");
 				printf("\t");
 				printf("Maths");
 				printf("\t");
 				printf("English");
 				printf("\t");
 				printf("Computer");
 				printf("\t");
 				printf("Total");
 				printf("\n");
 				for(i=0;i< n;i++)
 				{
 					printf("%d.",i+1);
 					printf("\t");
  					printf("%s", s[i].name);
  					printf("\t");
  					printf("%d", s[i].rno);
  					printf("\t");
  					printf("\t");
  					printf("%0.2f\t\t", s[i].science);
  					printf("%0.2f\t\t", s[i].maths);
  					printf("%0.2f\t\t", s[i].english);
  					printf("%0.2f\t\t", s[i].socialsciences);
  					printf("%0.2f\t\t", s[i].computer);
  					printf("%0.2f\n", s[i].marks);
 				}
 				break;
 				
 		case 5 : for(i=0;i< n-1;i++)
 				{
  					for(j=i+1;j< n;j++)
  					{
   						if(s[i].computer<s[j].computer)
   						{
    						temp = s[i];
    						s[i] = s[j];
    						s[j] = temp;
   						}
  					}
 				}
 				printf("The record of name and marks of the student is :\n");
 				printf("Sl.No");
 				printf("\t");
 				printf("Name");
 				printf("\t");
 				printf("Roll No.");
 				printf("\t");
 				printf("Computer");
 				printf("\t");
 				printf("Science");
 				printf("\t");
 				printf("Social Science");
 				printf("\t");
 				printf("Maths");
 				printf("\t");
 				printf("English");
 				printf("\t");
 				printf("Total");
 				printf("\n");
 				for(i=0;i< n;i++)
 				{
 					printf("%d.",i+1);
 					printf("\t");
  					printf("%s", s[i].name);
  					printf("\t");
  					printf("%d", s[i].rno);
  					printf("\t");
  					printf("\t");
  					printf("%0.2f\t\t", s[i].computer);
  					printf("%0.2f\t\t", s[i].maths);
  					printf("%0.2f\t\t", s[i].english);
  					printf("%0.2f\t\t", s[i].socialsciences);
  					printf("%0.2f\t\t", s[i].science);
  					printf("%0.2f\n", s[i].marks);
 				}
 				break;
 				
 		case 6 : for(i=0;i< n-1;i++)
 				{
  					for(j=i+1;j< n;j++)
  					{
   						if(s[i].marks<s[j].marks)
   						{
    						temp = s[i];
    						s[i] = s[j];
    						s[j] = temp;
   						}
  					}
 				}
 				printf("The record of name and marks of the student is :\n");
 				printf("Sl.No");
 				printf("\t");
 				printf("Name");
 				printf("\t");
 				printf("Roll No.");
 				printf("\t");
 				printf("Total");
 				printf("\t");
 				printf("Computer");
 				printf("\t");
 				printf("Science");
 				printf("\t");
 				printf("Social Science");
 				printf("\t");
 				printf("Maths");
 				printf("\t");
 				printf("English");
 				printf("\n");
 				for(i=0;i< n;i++)
 				{
 					printf("%d.",i+1);
 					printf("\t");
  					printf("%s", s[i].name);
  					printf("\t");
  					printf("%d", s[i].rno);
  					printf("\t");
  					printf("\t");
  					printf("%0.2f\t\t", s[i].marks);
  					printf("%0.2f\t\t", s[i].computer);
  					printf("%0.2f\t\t", s[i].maths);
  					printf("%0.2f\t\t", s[i].english);
  					printf("%0.2f\t\t", s[i].socialsciences);
  					printf("%0.2f\n", s[i].science);
 				}
 				break;
 				
 		default : printf("Oops..Wrong Choice !");
 				  printf("Please Check the options carefully..");
 	}
 	return 0;
}
