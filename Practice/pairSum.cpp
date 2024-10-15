// Time complexity is O(n^2);
// without using shorted array method
#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> arr, int target){
    vector<int> ans;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> myArr = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = pairSum(myArr, target);
    cout<< result[0] << ", " << result[1] << endl;
    return 0;
}