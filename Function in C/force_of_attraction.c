#include<stdio.h>
float pr(int a);
int main(){
    int a;
    float p;
    printf("Enter your mass = ");
    scanf("%d",&a);
    p=pr(a);
    printf("the force is %0.2f",p);
return 0;
}
float pr(int a){
    float r,v;
    v=9.8;
    r=a*v;
    return r;
}