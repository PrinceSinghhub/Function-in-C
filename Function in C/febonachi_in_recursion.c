#include<stdio.h>
int febo(int a);
int main(){
    int num,r;
    printf("Enter the value of num = ");
    scanf("%d",&num);
    
    for(int i=0;i<=num;i++){
        r=febo(i);
        printf("%d\n",r);
    }
return 0;
}
int febo(int a){
    if(a==0){
        return 0;
    }
    if(a==1){
        return 1;
    }
    else{
    return febo(a-1)+febo(a-2);
    }
}