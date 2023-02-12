#include<stdio.h>
int pr(int a,int b);
int main(){
    int a,b,c;
    printf("Enter your num 1 = ");
    scanf("%d",&a);
    printf("Enter your num 2 = ");
    scanf("%d",&b);
    c=pr(a,b);
    printf("the division of num is = %d",c);

return 0;
}
int pr(int a,int b){
    if(a<b){
        return 0;
    }
    else{
        return 1+pr(a-b,b);
    }
}