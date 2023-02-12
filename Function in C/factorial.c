#include<stdio.h>
int pr(int a);
int main(){
    int a,r;
    printf("Enter your no = ");
    scanf("%d",&a);
    r=pr(a);
    printf("the factorial is = %d",r);

return 0;
}
int pr(int a){
    int c=1,r=1;
    for(c=1;c<=a;c++){
        r=c*r;
    }
    return r;
}

