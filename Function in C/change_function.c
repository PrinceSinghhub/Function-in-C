#include<stdio.h>
int change(int a);
int main(){
     int f;
     int x;
     printf("enter your value =");
     scanf("%d",&x);
     f=change(x);
     printf("%d",f);
return 0;
}
int change(int a){
    int b;
    b=a+100;
    return b;
}