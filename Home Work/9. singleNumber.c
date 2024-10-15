// Find single number in c
#include<stdio.h>
int singleNumber(int *myArr, int size); // function decleration

// main function
int main(){
    int myArr[] = {4, 2, 1, 2, 1};
    int size = sizeof(myArr) / sizeof(int);
    int singleNumber2 = singleNumber(myArr, size); // function call
    printf("Single Number is : %d\n", singleNumber2);
    return 0;
}

//  Function definiation
int singleNumber(int *myArr, int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ myArr[i];
    }
    return ans;
}