let myArr = [4, 2, 1, 2, 1];
let singNum = function singleNumber(nums){
    let ans = 0;
    for(let num of nums){
        ans = ans ^ num;
    }
    return ans;
}

console.log("Songle Number is : ", singNum(myArr));