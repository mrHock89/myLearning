// WAF to swap th max and min number of an array.
#include<iostream>
#include<climits> // ‘INT_MIN’ is defined in header <climits>
using namespace std;

// Function for max number find
int maxElementIndex(int arr[], int sizeOfArr){
    int maxElement = INT_MIN;
    int maxIndex = 0;
    for(int i = 0; i < sizeOfArr; i++){
        if(arr[i] > maxElement){
            maxElement = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

// Function for min number find
int minElementIndex(int arr[], int sizeOfArr){
    int minElement = __INT_MAX__;
    int minIndex = 0;
    for(int i = 0; i < sizeOfArr; i++){
        if(arr[i] < minElement){
            minElement = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}

// main function 
int main(){
    int myArr[] = {30, 21, 44, 52, 90};
    int sizeOfArr = sizeof(myArr) / sizeof(int);
    cout << "Size of myArr is : " << sizeOfArr << endl;
    // Index finding
    int maxIndex = maxElementIndex(myArr, sizeOfArr);
    int minIndex = minElementIndex(myArr, sizeOfArr);

    cout << "Smallest element in the array is : " << myArr[maxIndex] << endl; 
    cout << "Largest element in the array is : " << myArr[minIndex] << endl; 
    // Swaping smallest and axrgest element.
    swap(myArr[maxIndex], myArr[minIndex]);

    // Print the array after swaping
    cout << "After array swapping : ";
    for(int i = 0; i < sizeOfArr; i++){
        cout << myArr[i] << " ";
    }
    cout << endl;
    return 0;
}   