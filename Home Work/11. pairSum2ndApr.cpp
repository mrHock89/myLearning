#include<iostream>
#include<vector>
using namespace std;
vector<int> findPairSum(vector<int> arr, int target){
    vector<int> ans;
    for(int i = 0, j = arr.size() - 1; i < j; ){
        int pairSum = arr[i] + arr[j];
        if(pairSum > target){
            j--;
        } else if(pairSum < target){
            i++;
        } else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> myArr = {2, 7, 11, 15};
    int target = 26;
    vector<int> ans = findPairSum(myArr, target);
    cout<< ans[0] << ", " << ans[1] << endl;
    return 0;
}