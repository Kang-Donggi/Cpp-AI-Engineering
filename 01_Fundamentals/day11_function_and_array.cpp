#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int[], int);

int main() {
    int arr[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    // arr = &arr[0] 첫번째 원소의 주소를 전달받는다
    int sum = sumArr(arr, SIZE);

    cout << "sum value is " << sum;
}

int sumArr(int arr[], int n) {
    int total = 0;

    for (int i = 0; i < n; i++)
        total+=arr[i];
    return total;
}