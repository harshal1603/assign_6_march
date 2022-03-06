#include<iostream>
using namespace std;

class Matrix{

public:
int rows,columns;
int array[3][3];

//constructor to initialise rows and columns 
Matrix(int r,int c){
rows=r;
columns=c;

}


//function to get rows
int getrows(){
return rows;
}

//function to get columns
int getcolumn(){
return columns;
}

//set the elements of matrix at poistion i,j
void setelement(int i,int j,int element){
array[i][j]=element;
}

//Add two matrices
friend Matrix add(Matrix a,Matrix b);

//multiply two matrix
friend Matrix mul(Matrix a,Matrix b);

};

//function definition for adding two matrices
Matrix add(Matrix a,Matrix b){
Matrix r(a.getrows(),a.getcolumn());

for(int i=0;i<a.getrows();i++){
	for(int j=0;j<a.getcolumn();j++){
		r.array[i][j]=a.array[i][j]+b.array[i][j];
					}
			}

return r;

}

//function definition for multiplying two matrices
Matrix mul(Matrix a,Matrix b){
Matrix r(a.getrows(),a.getcolumn());
for(int i=0;i<a.getrows();i++){
	for(int j=0;j<a.getcolumn();j++){
		for(int k=0;k<b.getcolumn();k++)
		r.array[i][j]+=a.array[i][k]*b.array[j][k];
					}
			
			}

return r;

}


int main(){

Matrix a(3,3),b(3,3);
int r1,r2,c1,c2;
r1=a.getrows();
c1=a.getcolumn();
r2=b.getrows();
c2=b.getcolumn();
int e;
cout<<"enter elements of first array"<<endl;
for(int i=0;i<r1;i++){
	for(int j=0;j<c1;j++){
		cin>>e;
		a.setelement(i,j,e);
				}

			}


cout<<"enter elements of second array"<<endl;
for(int i=0;i<r1;i++){
	for(int j=0;j<c1;j++){
		cin>>e;
		b.setelement(i,j,e);
				}

			}

Matrix result(3,3);
result=add(a,b);

for(int i=0;i<a.getrows();i++){
	for(int j=0;j<a.getcolumn();j++){
		cout<<result.array[i][j]<<endl;		

					}

				}
return 0;
}







