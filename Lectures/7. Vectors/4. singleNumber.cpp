#include<iostream>
#include<vector>

int singleNumber(std::vector<int> &nums){
    int ans = 0;
    for(int val: nums){
        ans ^= val;
    }
    return ans;
}

int main(){
    std::vector<int> nums ={4, 1, 2, 1, 2};
    std::cout << "Single Number is : " << singleNumber(nums) << std::endl;
    return 0;
}