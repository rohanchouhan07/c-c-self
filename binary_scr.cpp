#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) { 
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, t;
    
    cout << "Enter range: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Enter num to search: ";
    cin >> t;

    int l = 0, r = n - 1;
    bool found = false;

    while(l <= r) {
        int mid = l + (r - l) / 2; // Safer way to calculate mid

        if(arr[mid] == t) {
            cout << "Number found at position " << mid + 1 << endl;
            found = true;
            break;
        }
        else if(arr[mid] > t) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    if(!found) {
        cout << "Number not found." << endl;
    }

    return 0;
}