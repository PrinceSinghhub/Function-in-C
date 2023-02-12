#include<stdio.h>
int sum(int a,int b);//function prototype or function deceleration
// int sum(int a,int b){ esa bhi likh skti hai 
//     return a+b;
// }
int main(){
     int a,b,c;
     a=50;
     b=60;
     c=sum(a,b);
     printf("the sum is %d",c);
return 0;
}
//function defination
int sum(int a,int b){
    return a+b;
}