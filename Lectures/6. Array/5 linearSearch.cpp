//  Linear Search Algo
#include<iostream>
using namespace std;
int targetFounf(int arr[], int target){
    for(int i = 0; i < 7; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}
int main(){
    int target = 1;
    int myArr[] = {4, 2, 7, 8, 1, 2, 5};
    cout << targetFounf(myArr, target);
    return 0;
}