#include <iostream>
using namespace std;
int main() {
    int arr[100], n, choice, pos, value, i;
    cout << "Enter size of array:";
    cin >> n;
    cout << "Enter array elements:";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    do {
        cout << "\nArray-operations ";
        cout << "\n1. display array";
        cout << "\n2.insert Element";
        cout << "\n3. delete Element";
        cout << "\n4. search Element";
        cout << "\n5. update Element";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Array Elements are: ";
                for(i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                break;
            case 2:
                cout << "Enter position to insert: ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> value;
                for(i = n; i >= pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos - 1] = value;
                n++;
                cout << "Element Inserted";
                break;
            case 3:
                cout << "Enter position to delete: ";
                cin >> pos;
                for(i = pos - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                cout << "Element Deleted";
                break;
            case 4:
                cout << "Enter element to search: ";
                cin >> value;
                for(i = 0; i < n; i++) {
                    if(arr[i] == value) {
                        cout << "Element Found at position " << i + 1;
                        break;
                    }
                }
                if(i == n) {
                    cout << "Element Not Found";
                }
                break;
            case 5:
                cout << "Enter position to update: ";
                cin >> pos;
                cout << "Enter new value: ";
                cin >> value;
                arr[pos - 1] = value;
                cout << "Element Updated";
                break;
            case 6:
                cout << "Program Ended";
                break;
            default:
                cout << "Invalid Choice";
        }
    } while(choice != 6);
    return 0;
}