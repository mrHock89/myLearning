// Write a function to print the unique values in an array

#include<iostream>
using namespace std;

// Function to check unique value in an array
void printUniqueElements(int arr[], int sizeOfArr){
    for(int i = 0; i < sizeOfArr; i++){
        bool isUnique = true; // Assume the element is unique.

        // Check if arr[i] value is unique or not
        for(int j = 0; j < sizeOfArr ; j++){
            if(i != j && arr[i] == arr[j]){ // (i != j) is used for not checking arr[i] value itself
                isUnique = false; // found a duplicate value
                break; // no nedd to check further
            }
        }

        // If no duplicate value is found arr[i] will be printed
        if(isUnique){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// main function
int main(){
    int myArr[] = {10, 20, 40, 10, 30, 100};
    int sizeOfArr = sizeof(myArr) / sizeof(int);

    cout << "Unique elements in an array are : ";
    printUniqueElements(myArr, sizeOfArr);
    return 0;
}