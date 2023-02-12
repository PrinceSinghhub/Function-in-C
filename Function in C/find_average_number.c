#include<stdio.h>
float pr(int a,int b,int c);
int main(){
    int a,b,c;
    float p;
    printf("Enter your no 1 = ");
    scanf("%d",&a);
    printf("Enter your no 2 = ");
    scanf("%d",&b);
    printf("Enter your no 3 = ");
    scanf("%d",&c);
    p=pr(a,b,c);
    printf("the average no is %0.2f",p);

return 0;
}//float a,float b,float c
float pr(int a,int b,int c){
    float r,r1;
    r=a+b+c;
    r1=r/3;
    return r1;
}
