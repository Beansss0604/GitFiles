#include <iostream>
using namespace std;

void revert(int num);
int GCD(int num1, int num2, int temp);
void rightT(int n);

int main() {
    system ("cls");

    int choice;

    cout << "Practical Examination Problems:\n";
    cout << "1. Reverting Number\n";
    cout << "2. GCD\n";
    cout << "3. Right Triangle\n";
    cout << "Enter your Choice: ";
    cin >> choice;
    
    switch(choice) {

        case 1:
        int num;
        cout << "Enter a number:";
        cin >> num;
        revert (num);
        break;

        case 2:

        int num1, num2, temp;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        
        cout << GCD(num1, num2, temp);
        
        break;

        case 3: 
        
        int n;

        cout << "Enter a Number: ";
        cin >> n;

        rightT(n);
        
        break;


    }
    
    return 0;
}
void revert(int num) {
    
    int temp;
    
    temp = 0;

    for (int x = 0; num != 0; x++) {
        temp = num% 10;
        num /= 10;
        cout << temp;
    }
}

void rightT(int n) {

    for (int i = 1; i <= n; i++) {
            cout << endl;
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
        }
            cout << endl << endl;
}

int GCD(int num1, int num2, int temp) {

    temp = 0;

        while (num1 % num2 != 0) {
            temp = num1;
            num1 = num2;
            num2 = temp%num2;
        }

        return num2;
}
