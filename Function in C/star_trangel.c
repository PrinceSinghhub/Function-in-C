#include<stdio.h>
int pr(int a);
int main(){
    int a,b;
    printf("Enter your no 1 = ");
    scanf("%d",&a);
    b=pr(a);

return 0;
}
int pr(int a){
    for(int i=1;i<=a;i++){
        for(int j=i;j<=i;j++){
            printf("*\n");
        }
    }
    return 0;
}