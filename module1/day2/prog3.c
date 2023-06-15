#include <stdio.h>
int main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);

    int arr[50],i,s=0;
    for(i=0;i<number;i++){
        printf("enter array value: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<number;i+=2){
        
            s+=arr[i];
    }
    printf("The sum of alternative numbers:%d",s);
   
}

