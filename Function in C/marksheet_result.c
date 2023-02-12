#include<stdio.h>
int result();
int main(){
    // int a,b,c,d,e;
    // printf("Enter your math Marks = ");
    // scanf("%d",&a);
    // printf("Enter your math physics = ");
    // scanf("%d",&b);
    // printf("Enter your math chemistry = ");
    // scanf("%d",&c);
    // printf("Enter your math hindi = ");
    // scanf("%d",&d);
    // printf("Enter your math english = ");
    // scanf("%d",&e);
    result();

return 0;
}
int result(){
    int a,b,c,d,e,t;
    printf("Enter your math Marks = ");
    scanf("%d",&a);
    printf("Enter your math physics = ");
    scanf("%d",&b);
    printf("Enter your math chemistry = ");
    scanf("%d",&c);
    printf("Enter your math hindi = ");
    scanf("%d",&d);
    printf("Enter your math english = ");
    scanf("%d",&e);
    if(a<30 || b<30 || c<30 || d<30 || e<30){
        printf("You are fail now");
        
    }
    else{
        t=a+b+c+d+e;
        float p;
        p=t/5;
        printf("the total marks is = %d\n",t);
        printf("the percent is = %0.2f\n",p);
        if(t>350){
        printf("pass by 1st division");
        }
        if(t<=350 &&t>200){
        printf("pass by 2nd division");
        }
        if(t<=200 && t>150){
        printf("pass by 3rd division");
        }
    }
}