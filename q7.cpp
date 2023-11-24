#include <iostream>
using namespace std;

int main () {
    int arrsize=6;
    int array[arrsize];
    cout << "Enter 6 numbers to be sorted" << endl;
    for (int i=0;i<arrsize;i++) {
        cin >> array[i];
        }for (int i=0;i<arrsize-1;i++) {
            for (int j=0;j<arrsize-i-1;j++) {
                if (array[j] > array[j+1]) {
                    int temp=array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
        }
        cout << "Your sorted array is:" << endl;
        for (int i=0;i<arrsize;i++) {
            cout << array[i] << endl;
        }
    return 0;
}
