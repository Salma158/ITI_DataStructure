#include <iostream>
using namespace std;

int sentinelLinearSearch(int arr[], int size, int target) {
    int lastElement = arr[size - 1];
    arr[size - 1] = target;

    int i = 0;
    while (arr[i] != target) {
        i++;
    }
    arr[size - 1] = lastElement;

    if (i < size - 1 || arr[size - 1] == target) {
        return i;
    } else {
        return -1;
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    int targetValue = 7;

    int result = sentinelLinearSearch(myArray, arraySize, targetValue);

    if (result != -1) {
        cout << "Target " << targetValue << " found at index " << result << "." << endl;
    } else {
        cout << "Target " << targetValue << " not found in the array." << endl;
    }

    return 0;
}
