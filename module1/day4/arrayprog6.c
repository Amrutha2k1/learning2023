#include<stdio.h>
#include<string.h>
void dectobin(int n);
void dectooct(int n);
void dectohex(int n);

int main(){
    int num;
    printf("enter decimal value:");
    scanf("%d",&num);
    dectobin(num);
    dectooct(num);
    dectohex(num);
    return 0;
}
void dectobin(int n){
    int arr[20],i;
    for(i=0;n!=0;i++){
        arr[i]=n%2;
        n=n/2;
    }
    n=i;
    printf("the binary value is:");
    for(i=0;i<n;i++){
        printf("%d",arr[n-i-1]);
    }
    printf("\n");
}
void dectooct(int n){
    int arr[20],i;
    for(i=0;n!=0;i++){
        arr[i]=n%8;
        n=n/8;
    }
    n=i;
    printf("the octal value is:");
    for(i=0;i<n;i++){
        printf("%d",arr[n-i-1]);
    }
    printf("\n");
}
void dectohex(int n){
    int i,rem;
    char arr[20];
    for(i=0;n!=0;i++){
        rem=n%16;
        if(rem<10){
            rem=rem+48;
        }
        else{
            rem=rem+55;
        }
        arr[i]=rem;
        n=n/16;
    }
    n=i;
    printf("the hexadecimal value is:");
    for(i=0;i<n;i++){
        printf("%c",arr[n-i-1]);
    }
    printf("\n");
}

