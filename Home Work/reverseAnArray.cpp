#include<iostream>
using namespace std;
void reverseArray(int arr[], int size){
    int start = 0, end = size - 1;
    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int myarr[] = {1, 2, 3, 8, 9};
    int size = sizeof(myarr) / sizeof(int);
    reverseArray(myarr, size);
    for(int i = 0; i < size; i++){
        cout << myarr[i] << " ";
    }
    cout << endl;
    return 0;
}