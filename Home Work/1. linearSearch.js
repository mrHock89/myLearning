function linearSearch(arr, size, target) {
    for(let i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

let arr = [2, 4, 5, 6 , 3, 8];
let target = 7;
let size = arr.length;
let result = linearSearch(arr, size, target);
(result == -1) ? console.log(`Element ${target} is not present in array.`) : console.log(`Element is present at index ${result}.`);
