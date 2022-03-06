#include<stdio.h>
#include<string.h>

//book structure
struct book{

int acc_no;
char title[40];
char author[40];
int price;
int flag;
};

//main function
void main(){
struct book b[20];
int ch,n;
int count=0,i=0,mark=0;
char temp[40];
int no;

do {

printf("Press 1 to add book details\n");
printf("Press 2 to display book details\n");
printf("Press 3 to list all books of given author\n");
printf("Press 4 to list title of specified book\n");
printf("Press 5 to list count of books in library\n");
printf("Press 6 to list books in order of accession number\n");
printf("Press 7 to exit\n");
scanf("%d",&ch);

switch(ch){

case 1: printf("how many books you want to add");
	scanf("%d",&n);
	count=count+n;
	for(i=0;i<n;i++){
	printf("enter accession number\n");
	scanf("%d",&no);
	b[no].acc_no=no;
	printf("enter title\n");
	scanf("%s",b[no].title);
	printf("enter author name\n");
	scanf("\n\n%s",b[no].author);
	printf("enter price\n");
	scanf("%d",&b[no].price);
			}
	break;

case 2: printf("Book details\n");
	printf("Book accession no\ttitle\t author name \t price");
	for(i=1;i<=count;i++){
		printf("\n %d\t %s\t %s\t %d\n",b[i].acc_no,b[i].title,b[i].author,b[i].price);
		

			}
	break;


case 3: printf("enter author name\n");
	scanf("%s",temp);
	for(i=0;i<count;i++){
	if(strcmp(b[i].author,temp)==0){
		printf("\n%s\n",b[i].title);
				}

			}
	break;

case 4: printf("enter accession number");
	scanf("%d",&no);
	printf("\nTitle is %s\n",b[no].title);

case 5: printf("\nCount of books is %d\n",count);
	break;

case 6: for(i=0;i<count;i++){
	printf("\n%s\n",b[i].title);

		}
	break;




}

}
while(ch!=7);





}
