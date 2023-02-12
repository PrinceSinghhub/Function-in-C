#include<stdio.h>
float pr(int a){
    float b,c;
    int c1;
    printf("Enter your command = ");
    scanf("%d",&c1);
    if(c1==1){
       b=1.609;
       c=a/b;
       return c;
    }
    else if(c1==2){
        b=12;
        c=a/b;
        return c;
    }
    else if(c1==3){
        b=2.205;
        c=a/b;
        return c;
    }
    else if(c1==4){
        b=39.37;
        c=a/b;
        return c;
    }
    
}
int main(){
    float a;
    printf("Enter your value = ");
    scanf("%f",&a);
    printf("the ans is = %0.3f",pr(a));
return 0;
}