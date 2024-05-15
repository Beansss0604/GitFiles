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
void design();
void Login();
void desLogin();
void desRegistration();
void Register();
void desForgot();
void forgotPassword();
string getPassword();
int MainMenu();

int main() {

    system("cls");
    system("color A");

    int choice;

    design();
    gotoxy(45, 9); cout << "------ Iskode: Streamlined Daily Coding Management System ------";
    gotoxy(66, 13); cout << "1 - Login\n";
    gotoxy(66, 14); cout << "2 - Register\n";
    gotoxy(66, 15); cout << "3 - Forgot Password?\n";
    gotoxy(66, 16); cout << "0 - Exit\n";
    gotoxy(66, 20); cout << "Enter Choice: ";
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
            
            gotoxy(64, 23);
            cout << "Thank you for visiting!\n";
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

void design() {
    gotoxy(40, 8);
    cout << "[";
    gotoxy(40, 9);
    cout << "[";
    gotoxy(40, 10);
    cout << "[";
    gotoxy(40, 11);
    cout << "[";
    gotoxy(40, 12);
    cout << "[";
    gotoxy(40, 13);
    cout << "[";
    gotoxy(40, 14);
    cout << "[";
    gotoxy(40, 15);
    cout << "[";
    gotoxy(40, 16);
    cout << "[";
    gotoxy(40, 17);
    cout << "[";
    gotoxy(40, 18);
    cout << "[";
    gotoxy(40, 19);
    cout << "[";
    gotoxy(40, 20);
    cout << "[";
    gotoxy(40, 21);
    cout << "[";
    gotoxy(40, 22);
    cout << "[";
    gotoxy(40, 23);
    cout << "[";
    gotoxy(41, 7);
    cout << "-------------------------------------------------------------------------";
    gotoxy(41, 11);
    cout << "  ---------------------------------------------------------------------";
    gotoxy(41, 18);
    cout << "  ----------------------------------------------------------------------";
    gotoxy(41, 22);
    cout << "  ----------------------------------------------------------------------";
    gotoxy(41, 24);
    cout << "--------------------------------------------------------------------------";
    gotoxy(114, 8);
    cout << "]";
    gotoxy(114, 9);
    cout << "]";
    gotoxy(114, 10);
    cout << "]";
    gotoxy(114, 11);
    cout << "]";
    gotoxy(114, 12);
    cout << "]";
    gotoxy(114, 13);
    cout << "]";
    gotoxy(114, 14);
    cout << "]";
    gotoxy(114, 15);
    cout << "]";
    gotoxy(114, 16);
    cout << "]";
    gotoxy(114, 17);
    cout << "]";
    gotoxy(114, 18);
    cout << "]";
    gotoxy(114, 19);
    cout << "]";
    gotoxy(114, 20);
    cout << "]";
    gotoxy(114, 21);
    cout << "]";
    gotoxy(114, 22);
    cout << "]";
    gotoxy(114, 23);
    cout << "]";
}

void Login() {
    int ct;
    string username, password, userId, passId;

    desLogin();

    gotoxy(70, 9); cout << "Login Account";
    gotoxy(64, 13); cout << "Enter Username: ";
    cin >> username;
    cin.ignore();
    gotoxy(64, 14); cout << "Enter Password: ";
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
        gotoxy(68, 18); cout << "Login Successful!";
        Sleep(3000);
        MainMenu();
    } else {
        gotoxy(52, 18); cout << "Login Unsuccessful. Check your username/password.";
        Sleep(3000);
        main(); 
    }
}

void desLogin() {
    gotoxy(41, 8);
    cout << "[";
    gotoxy(41, 9);
    cout << "[";
    gotoxy(41, 10);
    cout << "[";
    gotoxy(41, 11);
    cout << "[";
    gotoxy(41, 12); 
    cout << "[";
    gotoxy(41, 13);
    cout << "[";
    gotoxy(41, 14);
    cout << "[";
    gotoxy(41, 15);
    cout << "[";
    gotoxy(41, 16);
    cout << "[";
    gotoxy(41, 17);
    cout << "[";
    gotoxy(41, 18);
    cout << "[";
    gotoxy(41, 19);
    cout << "[";
    gotoxy(40, 7);
    cout << "   ----------------------------------------------------------------------";
    gotoxy(44, 11);
    cout << "-------------------------------------------------------------------";
    gotoxy(44, 16);
    cout << "-------------------------------------------------------------------";
    gotoxy(113, 8);
    cout << "]";
    gotoxy(113, 9);
    cout << "]";
    gotoxy(113, 10);
    cout << "]";
    gotoxy(113, 11);
    cout << "]";
    gotoxy(113, 12);
    cout << "]";
    gotoxy(113, 13);
    cout << "]";
    gotoxy(113, 14);
    cout << "]";
    gotoxy(113, 15);
    cout << "]";
    gotoxy(113, 16);
    cout << "]";
    gotoxy(113, 17);
    cout << "]";
    gotoxy(113, 18);
    cout << "]";
    gotoxy(113, 19);
    cout << "]";
    gotoxy(40, 20);
    cout << "  -----------------------------------------------------------------------";
}

void Register() {
    string reg_username, reg_password;

    desRegistration();

    gotoxy (66, 9); cout << "Account Registration";
    gotoxy (63, 13); cout << "Enter Username: ";
    cin >> reg_username;
    cin.ignore();
    
    gotoxy (63, 14); cout << "Enter Password: ";
    reg_password = getPassword();

    ofstream reg("Accounts.txt", ios::app);//this txt. file will store the username and 
    //password inputted
    reg << reg_username << " " << reg_password << endl;
    reg.close(); 
    
    gotoxy(65, 18); cout << "Registration Successful!"; //After registration, the user will be directed again in Login section
    //to login the registered account
    Sleep(3000);
    main();
}

void desRegistration() {
    gotoxy(41, 8);
    cout << "[";
    gotoxy(41, 9);
    cout << "[";
    gotoxy(41, 10);
    cout << "[";
    gotoxy(41, 11);
    cout << "[";
    gotoxy(41, 12); 
    cout << "[";
    gotoxy(41, 13);
    cout << "[";
    gotoxy(41, 14);
    cout << "[";
    gotoxy(41, 15);
    cout << "[";
    gotoxy(41, 16);
    cout << "[";
    gotoxy(41, 17);
    cout << "[";
    gotoxy(41, 18);
    cout << "[";
    gotoxy(41, 19);
    cout << "[";
    gotoxy(40, 7);
    cout << "   ----------------------------------------------------------------------";
    gotoxy(44, 11);
    cout << "-------------------------------------------------------------------";
    gotoxy(44, 16);
    cout << "-------------------------------------------------------------------";
    gotoxy(113, 8);
    cout << "]";
    gotoxy(113, 9);
    cout << "]";
    gotoxy(113, 10);
    cout << "]";
    gotoxy(113, 11);
    cout << "]";
    gotoxy(113, 12);
    cout << "]";
    gotoxy(113, 13);
    cout << "]";
    gotoxy(113, 14);
    cout << "]";
    gotoxy(113, 15);
    cout << "]";
    gotoxy(113, 16);
    cout << "]";
    gotoxy(113, 17);
    cout << "]";
    gotoxy(113, 18);
    cout << "]";
    gotoxy(113, 19);
    cout << "]";
    gotoxy(40, 20);
    cout << "  -----------------------------------------------------------------------";
}

void desForgot() {
    gotoxy(41, 8);
    cout << "[";
    gotoxy(41, 9);
    cout << "[";
    gotoxy(41, 10);
    cout << "[";
    gotoxy(41, 11);
    cout << "[";
    gotoxy(41, 12); 
    cout << "[";
    gotoxy(41, 13);
    cout << "[";
    gotoxy(41, 14);
    cout << "[";
    gotoxy(41, 15);
    cout << "[";
    gotoxy(41, 16);
    cout << "[";
    gotoxy(41, 17);
    cout << "[";
    gotoxy(41, 18);
    cout << "[";
    gotoxy(41, 19);
    cout << "[";
    gotoxy(40, 7);
    cout << "   ----------------------------------------------------------------------";
    gotoxy(44, 11);
    cout << "-------------------------------------------------------------------";
    gotoxy(44, 16);
    cout << "-------------------------------------------------------------------";
    gotoxy(113, 8);
    cout << "]";
    gotoxy(113, 9);
    cout << "]";
    gotoxy(113, 10);
    cout << "]";
    gotoxy(113, 11);
    cout << "]";
    gotoxy(113, 12);
    cout << "]";
    gotoxy(113, 13);
    cout << "]";
    gotoxy(113, 14);
    cout << "]";
    gotoxy(113, 15);
    cout << "]";
    gotoxy(113, 16);
    cout << "]";
    gotoxy(113, 17);
    cout << "]";
    gotoxy(113, 18);
    cout << "]";
    gotoxy(113, 19);
    cout << "]";
    gotoxy(40, 20);
    cout << "  -----------------------------------------------------------------------";

}

void forgotPassword() {
    int forgot;

    desForgot();
    gotoxy(68, 9); cout << "Password Retrieval";
    gotoxy(66, 13); cout << "1 - Search Id by Username\n";
    gotoxy(66, 14); cout << "2 - Return to Main Menu\n";
    gotoxy(66, 18); cout << "Enter Choice: ";
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

                char YN;
                cout << "\nAccount has been found!\n";
                cout << "\nYour password is: " << f_pass;

                cout << "\nGo back to Login Section?\n";
                cout << "\n'Y'/'y' = Yes ||'N'/'n' = No: ";
                cin >> YN;

                if (YN == 'Y' || YN == 'y') {
                main();
                } 
                else if (YN == 'N' || YN == 'n') {
                    gotoxy(80, 24);
                    cout << "Thank you for visiting!";
                }

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

    int menu_choice;

    design();
    
    gotoxy(45, 9); cout << "------ Iskode: Streamlined Daily Coding Management System ------";
    gotoxy(66, 13); cout << "1 - Libraries\n";
    gotoxy(66, 14); cout << "2 - Task Manager\n";
    gotoxy(66, 15); cout << "3 - Deadline Tracker\n";
    gotoxy(66, 16); cout << "0 - Exit\n";
    gotoxy(66, 20); cout << "Enter Choice: ";
    cin >> menu_choice;


    return 0;
}
