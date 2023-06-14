#include<stdio.h>
void fun(int a);
int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    fun(marks);
}
void fun(int a){
    if(a>100){
        printf("Maximum marks is 100 only\n");
    }
    else if(a>=90 && a<=100){
        printf("Grade A\n");
    }
    else if(a>=75 && a<=89){
        printf("Grade B\n");
    }
    else if(a>=60 && a<=74){
        printf("Grade C\n");
    }
    else if(a>=50 && a<=59){
        printf("Grade D\n");
    }
    else{
        printf("Grade F\n");
    }

}

    