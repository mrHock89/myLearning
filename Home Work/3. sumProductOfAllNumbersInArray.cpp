// WAF to calculate sum and product of all numbers in an array.
#include <iostream>
using namespace std;

// Function for calculating Sum of all numbers in array
int Sum(int arr[], int sizeOfArray)
{
    int sum = 0;
    for (int i = 0; i < sizeOfArray; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// Function for calculating product of all numbers in array
int Product(int arr[], int sizeOfArray)
{
    int product = 1;
    for (int i = 0; i < sizeOfArray; i++)
    {
        product *= arr[i];
    }
    return product;
}

// main function
int main()
{
    int myArray[] = {3, 2, 9, 14, 23};
    int sizeOfArray = sizeof(myArray) / sizeof(int);
    cout << "Size of myArray is : " << sizeOfArray << endl;
    cout << "Sum of all numbers in array is : " << Sum(myArray, sizeOfArray) << endl;
    cout << "Product of all numbers in array is : " << Product(myArray, sizeOfArray) << endl;
    cout << "Program is ended" << endl;
    return 0;
}
