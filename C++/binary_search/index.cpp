#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> arr,int x,int low,int high) {
    if(low > high)
        return -1;
    else {
        int mid = (low + high) / 2;
        if(x == arr[mid])
            return mid;
        else if(x > arr[mid])
            return binary_search(arr, x, mid + 1, high);
        else
            return binary_search(arr, x, low, mid - 1);
    }
}

int main(int argc, char *argv[]) {
    vector<int> arr;
    int target, result;
    int N;

    target = stoi(argv[1]);

    while(cin >> N) arr.push_back(N);

    result = binary_search(arr, target, 0, arr.size() - 1);

    if(result > -1) cout << "Number is on the " << result << " position" << endl;
    else cout << "Number is not in the array" << endl;

    return 0;
}
