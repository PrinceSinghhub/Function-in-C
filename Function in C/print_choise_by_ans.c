#include<stdio.h>
int fact();
int phebo();
int prm();
int add();
int main(){
    int a;
    printf("our facility is \n 1 = fact \n 2 = phebo \n 3 = prm \n 4 = add\n");
    printf("enter your command = ");
    scanf("%d",&a);
    if(a==1){
        fact();
    }
    if(a==2){
        phebo();
    }
    if(a==3){
        prm();
    }
    if(a==4){
        add();
    }
    if(a>4){
        printf("plese enter a valid command");
    }

return 0;
}
int fact(){
    int a,b,c;
    printf("Enter Your Numer = ");
    scanf("%d",&a);
    b=1;
    c=1;
    while(b<=a){
        c=c*b;
        b++;
    }
    printf("the fact is = %d \n",c);
    return c;
}
int phebo(){
    int a,f,s,t,b;
    printf("Enter Your Numer = ");
    scanf("%d",&a);
    f=0;
    s=1;
    t=0;
    for(b=0;t<a;b++){
        printf("%d\n",t);
        f=s;
        s=t;
        t=f+s;
    }
    return 0;
}
int prm(){
    int a,b=2,c=0;
    printf("Enter Your Numer = ");
    scanf("%d",&a);
    if(a>=2){
        for(b=2;b<a;b++){
           if(a%b==0){
           c=1;
           break;
           }
        }
    }
    if(a<2){
        printf("Enter a valid no");
        
    }
    else if(c==1){
        printf("the no is not a prime no");
        
    }
    else if(c==0){
        printf("this is a prime no");
    }
    return 0;
}
int add(){
    int a,b,c;
    printf("Enter Your Numer a = ");
    scanf("%d",&a);
    printf("Enter Your Numer b = ");
    scanf("%d",&b);
    c=a+b;
    printf("the addition is %d ",c);
    return c;
}
