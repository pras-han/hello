#include <iostream>
#include <algorithm>

using namespace std;

void reverse(int a[], int start, int end) {
    while (start < end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

void rotate(int a[], int n, int k) {
    // Compute the effective rotation distance k
    k = k % n;
    
    // Reverse the first n-k elements of the array
    reverse(a, 0, n-k-1);
    
    // Reverse the last k elements of the array
    reverse(a, n-k, n-1);
    
    // Reverse the entire array
    reverse(a, 0, n-1);
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3;

    rotate(a, n, k);

    cout << "Rotated array is: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
