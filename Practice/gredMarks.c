#include<stdio.h>
int main(){
    int num; 
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Entered number is : %d\n", num);
    if(num > 90){
        printf("A");
    }
    else if(num >= 70 && num < 90){
        printf("B");
    }
    else {
        printf("D");
    }
    return 0;
}