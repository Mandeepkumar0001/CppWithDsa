#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Alternate elements of the array are: ";
    for(int i = 0; i < n; i += 2) {
        cout << arr[i] << " ";
    }
    return 0;
}