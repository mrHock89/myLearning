#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int> &nums){
    int ans = 0;
    for(int i: nums){
        ans = ans ^ i;
    }
    return ans;
}

int main(){
    vector<int> nums = {4, 2, 1, 2, 1};
    cout << "Single Number is : " << singleNumber(nums) << endl;
    return 0;
}