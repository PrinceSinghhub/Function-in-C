#include <stdio.h>
int table(int a,int b);
int main() {
    int a,b;
    b=1;
    
    printf("Enter your no");
    scanf("%d",&a);
    table(a,b);
    return 0;
}
int table(int a,int b){
    if (b==11){
        return 1;
    }
    else{
        printf("%d\n",a*b);
        return table(a,b+1);
    }
}