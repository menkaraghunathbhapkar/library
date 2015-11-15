/*****************************************************************************
 * Copyright (C) Menka Raghunath Bhapkar bhapkarmr15.comp@coep.ac.in
 *
 * This program(Library management)is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
 *****************************************************************************/


#define RETURNTIME 5
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<fcntl.h>
#include<errno.h>


// creating the file pointers
FILE *fptr=0,*fptr2=0,*fptr4=0;


int n;

//function prototyping
char findbook;
void printmenu();
void acceptdis();
void addaccount();
int deletebooks();
void searchbooks();
void searchbooks();
void issuebooks();
void viewbooks();
void editbooks();
int countbooks();
int checkid(int);


typedef struct meroDate {
		int mm,dd,yy;
	}meroDate;	
			
typedef struct books {
	int misno;
	char stname[100];
	char branch[100];
	char bookname[50];
	char authorname[50];
	int price;
	int quantity;
	int rackno;
	int bookID;
	meroDate issued;
	meroDate duedate;	
}books;
books a;
books b[10];

int main() {
	printmenu();
	
return 0;
}

void printmenu() {
	printf("\n\n\n");
	printf("\t\t\t@@@@@@LIBRARY MANAGEMENT@@@@@@\n\n\n\n");
	while(1) {
	//int i;
	int ch,argc;
	char *argv[100]; 
	printf("\t\t\t1.Accept and display information related to account \n");
	printf("\t\t\t2.add the account\n");
	printf("\t\t\t3.delete books\n");
	printf("\t\t\t4.search books\n");
	printf("\t\t\t5.issue books\n");
	printf("\t\t\t6.view books list\n");
	printf("\t\t\t7.exit from the application\n");
	printf("enter your choice\n");
	scanf("%d",&ch);
	
	switch(ch) {
		case 1:
			acceptdis();
			break;
		case 2:
			addaccount();
			//printf("%d\n",x);
			break;
			
		case 3:
			deletebooks();
			break;
		case 4:
			searchbooks();
			break;
		case 5:
			issuebooks();
			break;
		case 6:
			viewbooks();
			break;
	
		case 7:
			//printf("wrong choice\nRe-enter the correct option\n");
			exit(0);
			break;
		default:
			printf("wrong choice\n");
			break;
	
	}
   }					
}

//////accepting input from user and displaying it on the screen
void acceptdis() {
	/*accepting input from user and displaying  it on the screen*/
	int c=1;//n,x,i,n1;	
	int flag=0;
	printf("enter the value of flag");
	scanf("%d",&flag);
	if(flag==1) {
		
		printf("enter the value of student name\n");
		c=getchar();
		while(c!='\0') {
			putchar(c);
			c=getchar();
			if(c==10)
			{
				break;
			}
			//printmenu();
		}
		printmenu();
	}
	
	else if(flag==2) {
	
		printf("enter the value of students'branch name\n");
		c=getchar();
		while(c!='\0') {
			putchar(c);
			c=getchar();
			if(c==10)
			{
				break;
			}
			//printmenu();
		}
		printmenu();

	}
	else if(flag==3) {
	
		printf("enter the value of book name\n");
		c=getchar();
		while(c!='\0') {
			putchar(c);
			c=getchar();
			if(c==10)
			{
				break;
			}
			//printmenu();
		}
		printmenu();
	}
	else if(flag==4) {
	
		printf("enter the value of books'author name\n");
		c=getchar();
		while(c!='\0') {
			putchar(c);
			c=getchar();
			if(c==10)
			{
				break;
			}
			//printmenu();
		}
		printmenu();
	}
	else if(flag==5) {

		printf("enter the price of the book\n");
		c=getchar();
		while(c!='\0') {
			putchar(c);
			c=getchar();
			if(c==10)
			{
				break;
			}
			//printmenu();
		}
		printmenu();
	}	
	else if(flag==6) {

		printf("enter the quantity of the book\n");
		c=getchar();
		while(c!='\0') {
			putchar(c);
			c=getchar();
			if(c==10)
			{
				break;
			}
			//printmenu();
		}
		printmenu();
	}
	else if(flag==7) {

		printf("enter the rack no of the book\n");
		c=getchar();
		while(c!='\0') {
			putchar(c);
			c=getchar();
			if(c==10)
			{
				break;
			}
			//printmenu();
		}
		printmenu();
	}
	else if(flag==7) {

		printf("enter the rack no of the book\n");
		c=getchar();
		while(c!='\0') {
			putchar(c);
			c=getchar();
			if(c==10)
			{
				break;
			}
			//printmenu();
		}
		printmenu();
	}
	else if(flag==8) {

		printf("enter the bookID\n");
		c=getchar();
		while(c!='\0') {
			putchar(c);
			c=getchar();
			if(c==10)
			{
				break;
			}
			//printmenu();
		}
		printmenu();
	}
	else
	{
		printf("invalid flag no:");
	}

}
void addaccount() {

	printf("\n\t\t\tselect category:\n\n");
	printf("\t\t\tComputer enginnering:\n");
	printf("\t\t\tInformation technology:\n");
	printf("\t\t\tMechanical engineering:\n");
	printf("\t\t\tElectrical Enginnering:\n");
	printf("\t\t\tCivil Enginnering:\n");
	printf("\t\t\tMeta Engineering:\n");

	//FILE *fptr;
	int i,n;
	/*taking value form user and storing the into a file*/
	
	printf("enter the number of records\n");
	scanf("%d",&n);
	books a[n],b[n];
	fptr=fopen("file5.ods","w");
	if(fptr==NULL) {
		perror("error failed");
		//return errno;
	}
	if(n==0){
			
		printf("no record is created\n");
	}
	else{

		for(i = 0; i < n; i++) {
				printf("\nEnter the information respectively of the student %d\n", i + 1);
				printf("enter misno:\n");
				scanf("%d",&a[i].misno);
				fflush(stdin);
				printf("enter the student name:\n");
				scanf("%s",a[i].stname);
				printf("enter branch of the student:\n");
				scanf("%s",a[i].branch);
				printf("enter the book name:\n");
				scanf("%s",a[i].bookname);
				printf("enter books author name:\n");
				scanf("%s",a[i].authorname);
				printf("enter the price of the book:\n");
				scanf("%d",&a[i].price);
				printf("enter the quantity of the book:\n");
				scanf("%d",&a[i].quantity);
				printf("enter the rack no:\n");
				scanf("%d",&a[i].rackno);
				printf("enter the bookID:\n");
				scanf("%d",&a[i].bookID);	
	
			}
		//printf("good\n");
		fwrite(&a,sizeof(a[0]),n,fptr);
		write(fptr,&a,sizeof(a));
		fclose(fptr);
		printf("record is created successfully.......\n");
	}
	printf("\n\n");
	//printf("record is created successfully.......\n");
	fptr=fopen("file5.ods","r");
		if(n==0)
		{
			printf("no record to read\n");
		}
		else {
			fread(&b,sizeof(b[0]),n,fptr);
			//read(fptr,&b,sizeof(b));


			printf("#########   information realted to the book #################\n");
			for(i=0;i<n;i++) {
				printf("information for student:   %d\n",i);
				/*printf("\nMis no:\t\t\t%d\nStudent Name:\t\t%s\nbranch of student:\t%s\nbook name:\t\t%s\nbooks author name:\t%s\nbook price:\t\t%d\nbook quantity:\t\t%d\nrack no of the book is:\t%d\nbook Id:\t\t%d\n\n\n",b[i].misno,b[i].stname,b[i].branch,b[i].bookname,b[i].authorname,b[i].price,b[i].quantity,b[i].rackno,b[i].bookID);*/
				printf("\nMIS NO:\t\t\t%d",b[i].misno);
				printf("\nStudent Nmae:\t\t%s",b[i].stname);
				printf("\nBranch of student:\t%s",b[i].branch);
				printf("\nBook Name:\t\t%s",b[i].bookname);
				printf("\nBooks author Name:\t%s",b[i].authorname);
				printf("\nBook Price:\t\t%d",b[i].price);
				printf("\nBook Quantity\t\t%d",b[i].quantity);
				printf("\nRack of the Book:\t%d",b[i].rackno);
				printf("\nBook ID:\t\t%d\n\n",b[i].bookID);
			}
	
	close(fptr);
}

} 


int deletebooks() {
	int id;
	int d=0;
	printf("enter the ID of the book to delete:\n");
	scanf("%d",&id);
	fptr=fopen("file5.ods","r");
	while(fptr==NULL)
	{
		printf("file is not exist\n");
		return (1);
	}
	rewind(fptr);
 	while( fread(&a,sizeof(a),1,fptr)==1){
		if(a.bookID==id) {
			printf("book record is available\n");
		
		printf("book anme is:  %s\n",a.bookname);
		printf("book rack no is:  %d\n",a.rackno);
		findbook='t';
		d++;
		}
		
	}
	
	if(d==0) {
		printf("record is not exist\n");
	}

	if(findbook=='t') {
		int c;
		printf("Do you want to delete it press 1 for deleting the book or 0 if we dont want to delete the book\n");
		scanf("%d",&c);
		if(c==1) {
	
		fptr2=fopen("menu1.ods","w");
		rewind(fptr);
		
		while(fread(&a,sizeof(a),1,fptr)==1)
		{
			if(a.bookID!=id) {
				
		fseek(fptr2,0,SEEK_CUR);
		fwrite(&a,sizeof(a),1,fptr2);
			}
		}
		close(fptr);
		close(fptr2);
		remove("file5.ods");
		rename("menu1.ods","file5.ods");
		
		fptr=fopen("file5.ods","rb+");
		if(findbook=='t')
		{
			printf("record is successfully deleted\n");
		}
		}

				
	}
			
		
	
	
}
int checkid(int id) {
	if(a.bookID==id) {
		return 0;
}
}

// for issuing the books from library
void issuebooks() {

	
			int id,ch;
		printf("*******************Issue section*****************\n");
		printf("1.Issue a book\n");
		printf("2.view Issued book\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch) {
			case 1:
				{
				int c=0;
				int d=0;
				char another='y';
				while(d==0) {
					printf("#######Issue Book Section######\n");
					printf("Enter the book Id:\n");
					scanf("%d",&id);
					fptr=fopen("file5.ods","rb");
					fptr4=fopen("issue.ods","ab+");
					if(checkid(id)==0) {
						printf("book record is available\n");
						printf("There are %d unissued books in library\n",a.quantity);
						printf("The name of book is:  %s\n",a.bookname);
						printf("enter the studen name:\n");
						scanf("%s",a.stname);

				printf("The book of %d id is issued\n",a.bookID);
d++;

			fseek(fptr4,sizeof(a),SEEK_END);
			fwrite(&a,sizeof(a),1,fptr4);
			fclose(fptr4);
			c=1;
		}
		if(c==0) {
			printf("No record found\n");
		}		
				}
				}
				break;
				
			case 2:
				{
					printf("####show issued book list#######\n");
				int i;
					
				fptr4=fopen("issue.ods","rb+");
				n=fread(&a,sizeof(a),1,fptr4);
					for(i=0;i<n;i++){
					printf("student name:  %s\n",a.stname);
					printf("book name\n:   %s\n",a.bookname);
					printf("book id \n:  %d\n",a.bookID);
				}
				}
					
				break;
			
			default :
				printf("wrong option\n");
				break;
		}




		
}

//for displaying the book records present in the library
void viewbooks() {
	int n;
	printf("enter the numbers of book record which are present in file that u  want to view i.e it will display n number of record\n\n");
	scanf("%d",&n);
	books b[n];
	int i;
	fptr=fopen("file5.ods","rb+");
	fread(b,sizeof(b),1,fptr);


	printf("#########   information realted to the book #################\n");
	for(i=0;i<n;++i) {
		printf("information for student:   %d\n",i);
	/*printf("Mis no:  %d\nStudent Name:  %s\nbranch of student:   %s\nbook name:   %s\nbooks author name:   %s\nbook price:    %d\n book quantity:   %d\nrack no of the book is:   %d\nbook Id:    %d\n",b[i].misno,b[i].stname,b[i].branch,b[i].bookname,b[i].authorname,b[i].price,b[i].quantity,b[i].rackno,b[i].bookID);*/
		printf("\nMIS NO:\t\t\t%d",b[i].misno);
		printf("\nStudent Nmae:\t\t%s",b[i].stname);
		printf("\nBranch of student:\t%s",b[i].branch);
		printf("\nBook Name:\t\t%s",b[i].bookname);
		printf("\nBooks author Name:\t%s",b[i].authorname);
		printf("\nBook Price:\t\t%d",b[i].price);
		printf("\nBook Quantity\t\t%d",b[i].quantity);
		printf("\nRack of the Book:\t%d",b[i].rackno);
		printf("\nBook ID:\t\t%d\n\n",b[i].bookID);
	}
	
	close(fptr);
}

// for searching a book...............................
void searchbooks() {
	int id;
	int ch;
	int d=0;
	char findbook='t';
	printf("************************search Books******************8\n");
	printf("1.search book by ID:\n");
	printf("2.search book by Name:\n ");
	fptr=fopen("file5.ods","r");
	rewind(fptr);
	printf("enter your choice:\n");
	scanf("%d",&ch);
	switch(ch) {
		case 1:
			{
				printf("***Search the book by ID***\n");
				printf("enter the  bookID\n");
				scanf("%d",&id);
				printf("searching.............\n");
				while(fread(&a,sizeof(a),1,fptr)==1) {
					if(a.bookID==id&&findbook=='t') {
						printf("Book is available\n");
						printf("Information related to book\n");
						printf("BOOk ID:  %d\n",a.bookID);
						printf("BOOK NAME:  %s\n",a.bookname);
						printf("Book Author:  %s\n",a.authorname);
						printf("book price:  %d\n",a.price);
						printf("book quantity:  %d\n",a.quantity);
						printf("rack no:  %d\n",a.rackno);
						d++;
					
					}
					}
					/*else {
						printf("record is not present.\n");
					
				}*/
					if(d==0) {
						printf("record is not present\n\n");

}
					//close(fptr); 														
			
				
				close(fptr);
			}
			
			break;
		case 2:
			{
				char s[30];
				int d=0;
				printf("********search Book by name********\n");
				printf("enter the book name\n");
				scanf("%s",s);
				while(fread(&a,sizeof(a),1,fptr)==1) {
					if(strcmp(a.bookname,(s))==0) {
					
						printf("Book is available\n");
						printf("Information related to book\n");
						printf("BOOk ID:  %d\n",a.bookID);
						printf("BOOK NAME:  %s\n",a.bookname);
						printf("Book Author:  %s\n",a.authorname);
						printf("book price:  %d\n",a.price);
						printf("book quantity:  %d\n",a.quantity);
						printf("rack no:  %d\n",a.rackno);
			
						d++;
					}
				}
				
				if(d==0) {
					printf("record is not exist\n");
				}

 			
				close(fptr);
			}
			break;
		default:
			printf("Invalid option\n");
			break;
	}

	
}

