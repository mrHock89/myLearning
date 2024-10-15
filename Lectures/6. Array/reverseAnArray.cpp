// Usinf  two pointer approach
#include<iostream>
using namespace std;
void reverseArray(int arr[], int size){
    int start = 0, end = size -1;
    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int myarr[] = {1, 2, 9, 4, 5};
    int size = 5;
    reverseArray(myarr, size);
    for(int i = 0; i < size; i++){
        cout << myarr[i] << " ";
    }
    cout << endl;
    return 0;
}