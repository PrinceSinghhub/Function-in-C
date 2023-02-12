#include<stdio.h>
int at(int b,int h);
int main(){
    int a,b;
    printf("Enter you base = ");
    scanf("%d",&a);
    printf("Enter you height = ");
    scanf("%d",&b);
    int r;
    r=at(a,b);
    printf("the area of trangle is = %d",r);

return 0;
}
int at(int b,int h){
    int result;
    result=b*h/2;
    return result;
}