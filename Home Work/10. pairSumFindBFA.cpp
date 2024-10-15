#include<iostream>
#include<vector>
using namespace std;

vector<int> findPairSum(vector<int> arr, int target){
    vector<int> pairArr;
    for(int i = 0; i< arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            if(arr[i] + arr[j] == target){
                pairArr.push_back(i);
                pairArr.push_back(j);
                return pairArr;
            }
        }
    }
    return pairArr;
}

int main(){
    vector<int> myArr = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = findPairSum(myArr, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}