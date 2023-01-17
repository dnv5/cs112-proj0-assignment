#include <iostream>
#include <string>

using namespace std;

int main() {
    float arr[20] = {};

    cout << sizeof(arr[20]) << endl;

    float *ptr = &arr[7];
    *ptr = 17.771;  

    cout << arr[7] << endl;
    cout << *ptr << endl;

    return 0;
}
