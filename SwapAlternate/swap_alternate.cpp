#include <iostream>
using namespace std;

void swap_alternate(int *arr, int n) {
    for(int i = 0;i<n-1;i += 2) {
        swap(arr[i],arr[i+1]);
    }
}

int main() {
    int n;
    cin >> n;

    int *arr = new int(n);
    for(int i = 0;i<n;i++) {
        cin >> arr[i];
    }

    cout << "Before Swapping: ";
    for(int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    swap_alternate(arr,n);
    
    cout << "After Swapping: ";
    for(int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}