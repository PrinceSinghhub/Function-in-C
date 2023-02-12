#include <stdio.h>
int pr(int a,int b){
    if(b==1){
        return a;
    }
    else{
        return a+pr(a,b-1);
    }
    }
int main() {
    int a,b,c;
    printf("Enter your num 1 = ");
    scanf("%d",&a);
    printf("Enter your num 2 = ");
    scanf("%d",&b);
    c=pr(a,b);
    printf("the product of num is = %d",c);
    return 0;
}