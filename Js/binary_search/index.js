const {readFileSync} = require('fs');

const content = readFileSync("./input.txt", 'utf-8');

const arr = content.trim().split(",").map(num => parseInt(num.trim()));

const target = parseInt(process.argv[2]);

const binarySearch = (arr, x, low, high) => {
    if (low > high)
        return false;
    else {
        const mid = Math.round((low + high) / 2);
        if (x == arr[mid])
            return mid;
        else if (x > arr[mid])
            return binarySearch(arr, x, mid + 1, high);
        else
            return binarySearch(arr, x, low, mid - 1);
    }
}

let result = binarySearch(arr, target, 0, arr.length - 1);

if(result)
    console.log(`Number is on the ${result} position`)
else
    console.log("Number is not in the array")
