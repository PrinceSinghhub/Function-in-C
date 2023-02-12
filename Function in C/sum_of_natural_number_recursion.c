#include<stdio.h>
int add(int a){
    if(a==0){
        return 0;
    }
    else{
        return (a+add(a-1));
    }
    }
int main(){
    int num,r;
    printf("Enter the value of num = ");
    scanf("%d",&num);
    r=add(num);
    printf("the addition of %d is = %d",num,r);
return 0;
}