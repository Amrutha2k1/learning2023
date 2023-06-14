#include<stdio.h>

void terinary(int x,int y);
int main(){
    int x,y;
    printf("Enter two numbers");
    scanf("%d %d",&x,&y);
    terinary(x,y);
    return 0;

}
void terinary(int x,int y){
    x>y?printf("%d is bigger than %d",x,y):(y>x?printf("%d is bigger than %d",y,x):printf("both are equal"));
}