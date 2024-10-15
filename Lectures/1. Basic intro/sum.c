#include<stdio.h>
int main(){
    int n = 5;
    int sum = 0;
    for(int i = 0; i <=n; i++){
        sum = sum + i;
    }
    printf("Sum of numbers from 1 to n is : %d\n",sum);
    return 0;
}