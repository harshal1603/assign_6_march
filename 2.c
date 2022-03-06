#include<stdio.h>

void result(int ,int, int,int *,float *);

float percentage;
int total;

//main function
void main(){

result(70,80,90,&total,&percentage);

printf("Total marks are: %d\n",total);

printf("Percentage is : %f\n",percentage);


}

//function definition
void result(int a,int b,int c,int *t,float *p){

*t=a+b+c;

*p=((a+b+c)/300.0)*100.0;

}
