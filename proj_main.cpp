#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>
#include "includes/proj_functions.cpp"
using namespace std;

/*Members:
    Besa, Vince Adrian A.
    Bualat, Bench Brian B.
    Maestre, Michael Rua S.
    Serquina, Zcintilla R.
*/

int main() {

    system("cls");
    system("color B");

    design();

    int choice;
    
    gotoxy(45, 9); cout << "      ------ Game-Code-On: Educational Coding Games ------";
    gotoxy(68, 13); cout << "1 - Login\n";
    gotoxy(68, 14); cout << "2 - Register\n";
    gotoxy(68, 15); cout << "3 - Forgot Password?\n";
    gotoxy(68, 16); cout << "0 - Exit\n";
    gotoxy(68, 20); cout << "Enter Choice: ";
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

void Login() {
    int ct;
    string username, password, userId, passId;

    desLogin();

    gotoxy(71, 9); cout << "Login Account";
    gotoxy(44, 13); cout << "Enter Username: ";
    cin >> username;
    cin.ignore();
    gotoxy(44, 14); cout << "Enter Password: ";
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
        gotoxy(70, 18); cout << "Welcome, " << username << "!";
        Sleep(3000);
        MainMenu();
    } else {
        gotoxy(52, 18); cout << "Login Unsuccessful. Check your username/password.";
        Sleep(1000);
        main(); 
    }
}

void Register() {
    string reg_username, reg_password;

    desRegistration();

    gotoxy (66, 9); cout << "Account Registration";
    gotoxy (44, 13); cout << "Enter Username: ";
    cin >> reg_username;
    cin.ignore();
    
    gotoxy (44, 14); cout << "Enter Password: ";
    cin >> reg_password ;

    ofstream reg("Accounts.txt", ios::app);//this txt. file will store the username and 
    //password inputted
    reg << reg_username << " " << reg_password << endl;
    reg.close(); 
    
    gotoxy(65, 18); cout << "Registration Successful!"; //After registration, the user will be directed again in Login section
    //to login the registered account
    Sleep(3000);
    main();
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
            gotoxy(47, 7); cout << "Enter the last username inputted: ";
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
                gotoxy(47, 11); cout << "Account has been found!";
                gotoxy(47, 12);cout << "Your password is: " << f_pass;
                gotoxy(47, 16);cout << "Go back to Login Section?";
                gotoxy(47, 17);cout << "Type 'Y' or 'y' for YES";
                gotoxy(47, 18);cout << "Type 'N' or 'n' for NO";
                gotoxy(47, 22);cout << "Enter Choice: ";
                cin >> YN;

                if (YN == 'Y' || YN == 'y') {
                main();
                } 
                else if (YN == 'N' || YN == 'n') {
                gotoxy(70, 26);
                cout << "Thank you for visiting!";
                }

            } else {
                gotoxy(72, 17); cout << "Account not found.";
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

int MainMenu() {
    
    system("cls");

    int menu_choice;

    design();
    
    gotoxy(45, 9); cout << "       ------ Game-Code-On: Educational Coding Games ------";
    gotoxy(73, 12); cout << "Difficulty\n";
    gotoxy(67, 14); cout << "1 - Hangman(Easy)\n";
    gotoxy(67, 15); cout << "2 - Medium\n";
    gotoxy(67, 16); cout << "3 - Hard\n";
    gotoxy(67, 17); cout << "0 - Return to Login Section\n";
    gotoxy(68, 21); cout << "Enter Choice: ";
    cin >> menu_choice;

    switch(menu_choice) {

        case 1:
        system("cls");

        hangmanMainMenu();

        break; 

        case 0:
        system("cls");

        main();

        break;
    }

    return 0;
}