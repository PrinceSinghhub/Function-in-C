#include <stdio.h>
int fact(int a);
int main(){
    int num,r;
    printf("Enter the value of num = ");
    scanf("%d",&num);
    r=fact(num);
    printf("the factoria of %d is = %d",num,r);
    return 0;
}
int fact(int a){
    if(a==1 || a==0){
        return 1;
    }
    else{
        return (a*fact(a-1));
    }
}


