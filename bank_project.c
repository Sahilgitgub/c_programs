#include<stdio.h>
#include<conio.h>
void getpassword(char password[20])
{
	char ch;
	int i=0;
	ch=getch();
	while(ch!=13)
	{
		printf("*");
		password[i]=ch;
		i++;
		ch=getch();
	}
	password[i]=0;
}
struct bank
{
	int acno;
	char name[20];
	char password[20];
	int bal;	
};
void main()
{
	struct bank b1;
	FILE *p;
	int amt,size,ac;
	char pass[20];
	int choice;
	size=sizeof(b1);
	p=fopen("mydata.dat","rb+");
	if(p==NULL)
	p=fopen("mydata.dat","wb+");
	while(choice!=9)
	{
		getch();
		clrscr();
		printf("\n\n\n\t\t\tMAIN MENU");
		printf("\n\n\n\t\t\t1.ADD RECORD");
		printf("\n\n\n\t\t\t2.SEARCH RECORD");
		printf("\n\n\n\t\t\t3.ALL REC");
		printf("\n\n\n\t\t\t4.WITHDRAWL");
		printf("\n\n\n\t\t\t5.DEPOSIT");
		printf("\n\n\n\t\t\t6.MODIFY RECORDS");
		printf("\n\n\n\t\t\t7.DELTE RECORD");
		printf("\n\n\n\t\t\t8.BALANCE TRANSFER");
		printf("\n\n\n\t\t\t9.EXIT");
		printf("\n\n\n\t\t\tENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		clrscr();
		 switch(choice)
		 {
		 	case 1:fseek(p,0,2);
		 			printf("\n\n\tEnter acno.: ");
		 			scanf("%d",&b1.acno);
		 			printf("\n\n\tEnter name: ");
		 			scanf("%d",&b1.name);
		 			printf("\n\n\tEnter pin: ");
		 			scanf("%d",&b1.password);
		 			getpassword(b1.password);
		 			printf("\n\n\tENter bal: ");
		 			scanf("%d",&b1.bal);
		 			fwrite(&b1,size,1,p);
		 			break;
		 			
		 }
	}
	getch();
}
