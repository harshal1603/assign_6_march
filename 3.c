#include<stdio.h>

void main(){

int arr[10]={1,5,4,8,9,2,0,6,11,7};
int element;
scanf("%d",&element);
int flag=0;

for(int i=0;i<10;i++){
if(arr[i]==element) {
flag=1;
break;
}

}

if(flag==1){
printf("YES\n");
}
else{
printf("NO\n");
}

for(int i=0;i<10;i++){
printf("%d",arr[i]);
}
printf("\n");

}
