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
void desReminder();
void design();
void Login();
void desLogin();
void desRegistration();
void Register();
void desForgot();
void forgotPassword();
void accFound();
string getPassword();
int MainMenu();

int main() {

    system("cls");
    system("color B");

    design();
    desReminder();

    int choice;
    
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

void desReminder() {
     gotoxy(0, 0);
     cout << "MAKE EVERYDAY A PROGRAMMING DAY!";
     gotoxy(33, 0);
     cout << "MAKE EVERYDAY A PROGRAMMING DAY!";
     gotoxy(66, 0);
     cout << "MAKE EVERYDAY A PROGRAMMING DAY!";
     gotoxy(99, 0);
     cout << "MAKE EVERYDAY A PROGRAMMING DAY!";
     gotoxy(132, 0);
     cout << "MAKE EVERYDAY A PROGRAMMIN";
     gotoxy(0, 32);
     cout << "MAKE EVERYDAY A PROGRAMMING DAY!";
     gotoxy(0, 65);
     cout << "MAKE EVERYDAY A PROGRAMMING DAY!";
     gotoxy(0, 103);
     cout << "MAKE EVERYDAY A PROGRAMMING DAY!";
     gotoxy(0, 133);
     cout << "MAKE EVERYDAY A PROGRAMMING DAY!";
     gotoxy(0, 166);
     cout << "MAKE EVERYDAY A PROGRAMMING DA";
     
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

void accFound() {
    gotoxy(45, 7);
    cout << "-------------------------------------------------------------------------";
    gotoxy(44, 8);
    cout << "[";
    gotoxy(44, 9);
    cout << "[";
    gotoxy(44, 10);
    cout << "[";
    gotoxy(44, 11);
    cout << "[";
    gotoxy(44, 12);
    cout << "[";
    gotoxy(44, 13);
    cout << "[";
    gotoxy(44, 14);
    cout << "[";
    gotoxy(44, 15);
    cout << "[";
    gotoxy(44, 16);
    cout << "[";
    gotoxy(44, 17);
    cout << "[";
    gotoxy(44, 18);
    cout << "[";
    gotoxy(44, 19);
    cout << "[";
    gotoxy(44, 20);
    cout << "[";
    gotoxy(44, 21);
    cout << "[";
    gotoxy(44, 22);
    cout << "[";
    gotoxy(44, 23);
    cout << "[";
    gotoxy(44, 24);
    cout << "[";
    gotoxy(44, 25);
    cout << "[";
    gotoxy(45, 11);
    cout << "  ---------------------------------------------------------------------";
    gotoxy(45, 16);
    cout << "  ---------------------------------------------------------------------";
    gotoxy(45, 22);
    cout << "  ---------------------------------------------------------------------";
    gotoxy(118, 8);
    cout << "]";
    gotoxy(118, 9);
    cout << "]";
    gotoxy(118, 10);
    cout << "]";
    gotoxy(118, 11);
    cout << "]";
    gotoxy(118, 12);
    cout << "]";
    gotoxy(118, 13);
    cout << "]";
    gotoxy(118, 14);
    cout << "]";
    gotoxy(118, 15);
    cout << "]";
    gotoxy(118, 16);
    cout << "]";
    gotoxy(118, 17);
    cout << "]";
    gotoxy(118, 18);
    cout << "]";
    gotoxy(118, 19);
    cout << "]";
    gotoxy(118, 20);
    cout << "]";
    gotoxy(118, 21);
    cout << "]";
    gotoxy(118, 22);
    cout << "]";
    gotoxy(118, 23);
    cout << "]";
    gotoxy(118, 24);
    cout << "]";
    gotoxy(118, 25);
    cout << "]";
    gotoxy(45, 26);
    cout << "-------------------------------------------------------------------------";
}

void forgotPassword() {
    int forgot;

    system("cls");
    desForgot();
    gotoxy(68, 9); cout << "Password Retrieval";
    gotoxy(66, 13); cout << "1 - Search Id by Username\n";
    gotoxy(66, 14); cout << "2 - Return to Main Menu\n";
    gotoxy(66, 18); cout << "Enter Choice: ";
    cin >> forgot;

    switch (forgot) {
        case 1:
        { 
            
            system("cls"); 
            int ct = 0;
            string f_username, f_Id, f_pass;

            accFound();
            gotoxy(49, 9); cout << "Enter the last username inputted: ";
            cin >> f_username;
            Sleep(3000);

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
                
                Sleep(3000);
                gotoxy(49, 13); cout << "Account has been found!";
                gotoxy(49, 14);cout << "Your password is: " << f_pass;
                gotoxy(49, 18);cout << "Go back to Login Section?";
                gotoxy(49, 19);cout << "Type 'Y' or 'y' for YES";
                gotoxy(49, 20);cout << "Type 'N' or 'n' for NO";
                gotoxy(49, 24);cout << "Enter Choice: ";
                cin >> YN;

                if (YN == 'Y' || YN == 'y') {
                main();
                } 
                else if (YN == 'N' || YN == 'n') {
                    gotoxy(70, 28);
                    cout << "Thank you for visiting!";
                }

            } else {
                gotoxy(70, 19); cout << "Account not found.";
                forgotPassword();
            }

            break;
        }

        case 2: {

            main();
            break;

        }

        default: {
            cout << "Invalid Input! Please try again.\n";
            forgotPassword();
            break;
        }
    }
}

string getPassword() {
    string password;
    char ch;
    
    //To censor the password input 
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
