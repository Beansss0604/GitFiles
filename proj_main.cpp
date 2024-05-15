#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
using namespace std;

/*Members:
    Besa, Vince Adrian A.
    Bualat, Bench Brian B.
    Maestre, Michael Rua S.
    Serquina, Zcintilla R.
*/

void gotoxy(int x, int y);
void Login();
void Register();
void forgotPassword();
string getPassword();
int MainMenu();

int main() {

    system("cls");
    system("color B");

    int choice;

    gotoxy(45, 9); cout << "------ Iskode: Streamlined Daily Coding Management System ------";
    gotoxy(65, 11); cout << "1 - Login\n";
    gotoxy(65, 12); cout << "2 - Register\n";
    gotoxy(65, 13); cout << "3 - Forgot Password?\n";
    gotoxy(65, 14); cout << "0 - Exit\n";
    gotoxy(65, 16); cout << "Enter Choice: ";
    cin >> choice;
    cin.ignore();

    switch(choice) {

        case 1: 

            system("cls");
            Login();
            break;

        case 2:
            
            system("cls");
            Register();
            break;

        case 3: 
 
            system("cls");
            forgotPassword();
            break;

        case 0: 

            exit(0);
            break;

        default:

            cout << "\nInvalid Input! Please try again.\n";
            main();
            break;

    }

    return 0;
}

void gotoxy(int x, int y) {
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

void Login() {
    int ct;
    string username, password, userId, passId;

    cout << "\n\nEnter Username: ";
    cin >> username;
    cin.ignore();
    cout << "\nEnter Password: ";
    password = getPassword();

    ifstream input("Accounts.txt"); //this txt. file will store the username and 
    //password inputted

    while (input >> userId >> passId) {
        if (userId == username && passId == password) {
            ct = 1;
            break;
        } else {
            ct = 0;
        }
    }

    input.close();

    if (ct == 1) {
        cout << "\nLogin Successful!";
        Sleep(3000);
        MainMenu();
    } else {
        cout << "\nLogin Unsuccessful.";
        cout << "\nCheck your username/password.";
        Sleep(3000);
        Login(); 
    }
}

void Register() {
    string reg_username, reg_password;

    cout << "\n\nEnter Username: ";
    cin >> reg_username;
    cin.ignore();
    cout << "\nEnter Password: ";
    reg_password = getPassword();

    ofstream reg("Accounts.txt", ios::app);//this txt. file will store the username and 
    //password inputted
    reg << reg_username << " " << reg_password << endl;
    reg.close(); 
    
    cout << "\nRegistration Successful!\n";
    Sleep(3000);
    main();
}

void forgotPassword() {
    int forgot;

    cout << "\nPassword Retrieval\n";
    cout << "1 - Search Id by Username\n";
    cout << "2 - Return to Main Menu\n";
    cout << "Enter Choice: ";
    cin >> forgot;

    switch (forgot) {
        case 1: { 
            int ct = 0;
            string f_username, f_Id, f_pass;

            cout << "\nEnter the last username inputted: ";
            cin >> f_username;

            ifstream forgot("Accounts.txt");
            while (forgot >> f_Id >> f_pass) {
                if (f_Id == f_username) {
                    ct = 1;
                    break;
                }
            }
            
            forgot.close();

            if (ct == 1) {
                cout << "\nAccount has been found!\n";
                cout << "\nYour password is: " << f_pass;
                main();
            } else {
                cout << "\nAccount is not found.\n";
                forgotPassword();
            }

            break;
        }

        case 2: {

            main();
            break;

        }

        default: {
            cout << "\nInvalid Input! Please try again.\n";
            forgotPassword();
            break;
        }
    }
}

string getPassword() {
    string password;
    char ch;

    while ((ch = _getch()) != '\r') { 
        password += ch;
        cout << '*'; 
    }
    cout << endl; 

    return password;
}

int MainMenu() {
    
    system("cls");
    cout << "\nMain Menu to sa Task Management";

    return 0;
}
