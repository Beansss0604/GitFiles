#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//find the largest number in array 

int find_largest(int num[], int n) {
    return *max_element(num, num + n);
}

int main() {

    system("cls");

    int num[] = {1, 2, 5, 7, 3};

    int n = sizeof(num) / sizeof(num[0]);
    cout << "Original Arrays: " << endl;
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }

    cout << "\nThe largest number is: " << endl << find_largest(num, n);

    return 0;
}
