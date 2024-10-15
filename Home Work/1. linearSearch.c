// #include<iostream>
#include<stdio.h>

// using namespace std;

int linrearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int myarr[] = {2, 4, 5, 2, 8, 0, 1, -4};
    int size = sizeof(myarr) / sizeof(int);
    // cout << size << endl;
    // cout << (sizeof(myarr) / sizeof(myarr[0])) << endl;
    int result =  linrearSearch(myarr, size, 0);
    (result == -1) 
        ? printf("Element is not present in array.")
        : printf("Element is present at index : %d", result);
    return 0;
}