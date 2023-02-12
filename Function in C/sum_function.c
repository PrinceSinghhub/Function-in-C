#include<stdio.h>
int sum(int a,int b);//function prototype deceleration 
int main(){
    int c;
    c=sum(5,5);
    printf("the sum is = %d",c);
    
return 0;
}
int sum(int a,int b){
    int r;
    r=a+b;
    return r;
}