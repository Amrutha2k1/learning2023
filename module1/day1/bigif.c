#include<stdio.h>

void fun(int m,int n);

int main(){
    int m,n;
    printf("Enter 2 numbers:");
    scanf("%d %d",&m,&n);
    fun(m,n);
    return 0;
}
void fun(int m,int n){
     if(m>n){
        printf("%d is bigger than %d",m,n);
    }
    else if(n>m){
        printf("%d is bigger than %d",n,m);
    }
    else{
        printf("Both are equal");
    }

}