// Smallest element in the array

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int num[] = {150, 250, 30, 521, 10};
    int smallestElement = INT_MAX;
    for(int i = 0; i < sizeof(num) / sizeof(int); i++){
        if(num[i] < smallestElement){
            // smallestElement = num[i];
            smallestElement = num[i];
        }
    }
    cout << "Smallest Value in the array is : " <<smallestElement << endl;
    return 0;
}