#include<iostream>
#include<vector>
using namespace std;

vector<int> findPair(vector<int> nums, int target){
    vector<int> ans;
    int size = nums.size();
    for(int i = 0, j = size - 1; i < j; ){
        int pairSum = nums[i] + nums[j];
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
    vector<int> ans = findPair(myArr, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}