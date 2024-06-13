#include <iostream>
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
#include "proj_functions.hpp"
using namespace std;

void hangmanMainMenu();
void hangmanFigure(int incGuess);
void playHangmanGame();

void gotoxy(int x, int y) {
COORD coordinate;
coordinate.X = x;
coordinate.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

void design() {
    gotoxy(40, 8);
    cout << "|";
    gotoxy(40, 9);
    cout << "|";
    gotoxy(40, 10);
    cout << "|";
    gotoxy(40, 11);
    cout << "|";
    gotoxy(40, 12);
    cout << "|";
    gotoxy(40, 13);
    cout << "|";
    gotoxy(40, 14);
    cout << "|";
    gotoxy(40, 15);
    cout << "|";
    gotoxy(40, 16);
    cout << "|";
    gotoxy(40, 17);
    cout << "|";
    gotoxy(40, 18);
    cout << "|";
    gotoxy(40, 19);
    cout << "|";
    gotoxy(40, 20);
    cout << "|";
    gotoxy(40, 21);
    cout << "|";
    gotoxy(40, 22);
    cout << "|";
    gotoxy(40, 23);
    cout << "|";
    gotoxy(39, 7);
    cout << "|";
    gotoxy(39, 8);
    cout << "|";
    gotoxy(39, 9);
    cout << "|";
    gotoxy(39, 10);
    cout << "|";
    gotoxy(39, 11);
    cout << "|";
    gotoxy(39, 12);
    cout << "|";
    gotoxy(39, 13);
    cout << "|";
    gotoxy(39, 14);
    cout << "|";
    gotoxy(39, 15);
    cout << "|";
    gotoxy(39, 16);
    cout << "|";
    gotoxy(39, 17);
    cout << "|";
    gotoxy(39, 18);
    cout << "|";
    gotoxy(39, 19);
    cout << "|";
    gotoxy(39, 20);
    cout << "|";
    gotoxy(39, 21);
    cout << "|";
    gotoxy(39, 22);
    cout << "|";
    gotoxy(39, 23);
    cout << "|";
    gotoxy(39, 24);
    cout << "|";
    gotoxy(40, 6);
    cout << "---------------------------------------------------------------------------";
    gotoxy(41, 7);
    cout << "-------------------------------------------------------------------------";
    gotoxy(41, 11);
    cout << "  ---------------------------------------------------------------------";
    gotoxy(41, 18);
    cout << "  ---------------------------------------------------------------------";
    gotoxy(41, 22);
    cout << "  ---------------------------------------------------------------------";
    gotoxy(41, 24);
    cout << "-------------------------------------------------------------------------";
    gotoxy(40, 25);
    cout << "---------------------------------------------------------------------------";
    gotoxy(114, 8);
    cout << "|";
    gotoxy(114, 9);
    cout << "|";
    gotoxy(114, 10);
    cout << "|";
    gotoxy(114, 11);
    cout << "|";
    gotoxy(114, 12);
    cout << "|";
    gotoxy(114, 13);
    cout << "|";
    gotoxy(114, 14);
    cout << "|";
    gotoxy(114, 15);
    cout << "|";
    gotoxy(114, 16);
    cout << "|";
    gotoxy(114, 17);
    cout << "|";
    gotoxy(114, 18);
    cout << "|";
    gotoxy(114, 19);
    cout << "|";
    gotoxy(114, 20);
    cout << "|";
    gotoxy(114, 21);
    cout << "|";
    gotoxy(114, 22);
    cout << "|";
    gotoxy(114, 23);
    cout << "|";
    gotoxy(115, 7);
    cout << "|";
    gotoxy(115, 8);
    cout << "|";
    gotoxy(115, 9);
    cout << "|";
    gotoxy(115, 10);
    cout << "|";
    gotoxy(115, 11);
    cout << "|";
    gotoxy(115, 12);
    cout << "|";
    gotoxy(115, 13);
    cout << "|";
    gotoxy(115, 14);
    cout << "|";
    gotoxy(115, 15);
    cout << "|";
    gotoxy(115, 16);
    cout << "|";
    gotoxy(115, 17);
    cout << "|";
    gotoxy(115, 18);
    cout << "|";
    gotoxy(115, 19);
    cout << "|";
    gotoxy(115, 20);
    cout << "|";
    gotoxy(115, 21);
    cout << "|";
    gotoxy(115, 22);
    cout << "|";
    gotoxy(115, 23);
    cout << "|";
    gotoxy(115, 24);
    cout << "|";

}

void desLogin() {
    gotoxy(40, 8);
    cout << "|";
    gotoxy(40, 9);
    cout << "|";
    gotoxy(40, 10);
    cout << "|";
    gotoxy(40, 11);
    cout << "|";
    gotoxy(40, 12); 
    cout << "|";
    gotoxy(40, 13);
    cout << "|";
    gotoxy(40, 14);
    cout << "|";
    gotoxy(40, 15);
    cout << "|";
    gotoxy(40, 16);
    cout << "|";
    gotoxy(40, 17);
    cout << "|";
    gotoxy(40, 18);
    cout << "|";
    gotoxy(40, 19);
    cout << "|";
    gotoxy(41, 8);
    cout << "|";
    gotoxy(41, 9);
    cout << "|";
    gotoxy(41, 10);
    cout << "|";
    gotoxy(41, 11);
    cout << "|";
    gotoxy(41, 12); 
    cout << "|";
    gotoxy(41, 13);
    cout << "|";
    gotoxy(41, 14);
    cout << "|";
    gotoxy(41, 15);
    cout << "|";
    gotoxy(41, 16);
    cout << "|";
    gotoxy(41, 17);
    cout << "|";
    gotoxy(41, 18);
    cout << "|";
    gotoxy(41, 19);
    cout << "|";
    gotoxy(40, 7);
    cout << "   ----------------------------------------------------------------------";
    gotoxy(43, 11);
    cout << "-------------------------------------------------------------------";
    gotoxy(43, 16);
    cout << "-------------------------------------------------------------------";
    gotoxy(113, 8);
    cout << "|";
    gotoxy(113, 9);
    cout << "|";
    gotoxy(113, 10);
    cout << "|";
    gotoxy(113, 11);
    cout << "|";
    gotoxy(113, 12);
    cout << "|";
    gotoxy(113, 13);
    cout << "|";
    gotoxy(113, 14);
    cout << "|";
    gotoxy(113, 15);
    cout << "|";
    gotoxy(113, 16);
    cout << "|";
    gotoxy(113, 17);
    cout << "|";
    gotoxy(113, 18);
    cout << "|";
    gotoxy(113, 19);
    cout << "|";
    gotoxy(114, 8);
    cout << "|";
    gotoxy(114, 9);
    cout << "|";
    gotoxy(114, 10);
    cout << "|";
    gotoxy(114, 11);
    cout << "|";
    gotoxy(114, 12);
    cout << "|";
    gotoxy(114, 13);
    cout << "|";
    gotoxy(114, 14);
    cout << "|";
    gotoxy(114, 15);
    cout << "|";
    gotoxy(114, 16);
    cout << "|";
    gotoxy(114, 17);
    cout << "|";
    gotoxy(114, 18);
    cout << "|";
    gotoxy(114, 19);
    cout << "|";
    gotoxy(40, 20);
    cout << "  -----------------------------------------------------------------------";
}

void desRegistration() {
    gotoxy(40, 8);
    cout << "|";
    gotoxy(40, 9);
    cout << "|";
    gotoxy(40, 10);
    cout << "|";
    gotoxy(40, 11);
    cout << "|";
    gotoxy(40, 12); 
    cout << "|";
    gotoxy(40, 13);
    cout << "|";
    gotoxy(40, 14);
    cout << "|";
    gotoxy(40, 15);
    cout << "|";
    gotoxy(40, 16);
    cout << "|";
    gotoxy(40, 17);
    cout << "|";
    gotoxy(40, 18);
    cout << "|";
    gotoxy(40, 19);
    cout << "|";
    gotoxy(41, 8);
    cout << "|";
    gotoxy(41, 9);
    cout << "|";
    gotoxy(41, 10);
    cout << "|";
    gotoxy(41, 11);
    cout << "|";
    gotoxy(41, 12); 
    cout << "|";
    gotoxy(41, 13);
    cout << "|";
    gotoxy(41, 14);
    cout << "|";
    gotoxy(41, 15);
    cout << "|";
    gotoxy(41, 16);
    cout << "|";
    gotoxy(41, 17);
    cout << "|";
    gotoxy(41, 18);
    cout << "|";
    gotoxy(41, 19);
    cout << "|";
    gotoxy(40, 7);
    cout << "   ----------------------------------------------------------------------";
    gotoxy(43, 11);
    cout << "-------------------------------------------------------------------";
    gotoxy(43, 16);
    cout << "-------------------------------------------------------------------";
    gotoxy(113, 8);
    cout << "|";
    gotoxy(113, 9);
    cout << "|";
    gotoxy(113, 10);
    cout << "|";
    gotoxy(113, 11);
    cout << "|";
    gotoxy(113, 12);
    cout << "|";
    gotoxy(113, 13);
    cout << "|";
    gotoxy(113, 14);
    cout << "|";
    gotoxy(113, 15);
    cout << "|";
    gotoxy(113, 16);
    cout << "|";
    gotoxy(113, 17);
    cout << "|";
    gotoxy(113, 18);
    cout << "|";
    gotoxy(113, 19);
    cout << "|";
    gotoxy(114, 8);
    cout << "|";
    gotoxy(114, 9);
    cout << "|";
    gotoxy(114, 10);
    cout << "|";
    gotoxy(114, 11);
    cout << "|";
    gotoxy(114, 12);
    cout << "|";
    gotoxy(114, 13);
    cout << "|";
    gotoxy(114, 14);
    cout << "|";
    gotoxy(114, 15);
    cout << "|";
    gotoxy(114, 16);
    cout << "|";
    gotoxy(114, 17);
    cout << "|";
    gotoxy(114, 18);
    cout << "|";
    gotoxy(114, 19);
    cout << "|";
    gotoxy(40, 20);
    cout << "  -----------------------------------------------------------------------";
}

void desForgot() {
    gotoxy(40, 8);
    cout << "|";
    gotoxy(40, 9);
    cout << "|";
    gotoxy(40, 10);
    cout << "|";
    gotoxy(40, 11);
    cout << "|";
    gotoxy(40, 12); 
    cout << "|";
    gotoxy(40, 13);
    cout << "|";
    gotoxy(40, 14);
    cout << "|";
    gotoxy(40, 15);
    cout << "|";
    gotoxy(40, 16);
    cout << "|";
    gotoxy(40, 17);
    cout << "|";
    gotoxy(40, 18);
    cout << "|";
    gotoxy(40, 19);
    cout << "|";
    gotoxy(41, 8);
    cout << "|";
    gotoxy(41, 9);
    cout << "|";
    gotoxy(41, 10);
    cout << "|";
    gotoxy(41, 11);
    cout << "|";
    gotoxy(41, 12); 
    cout << "|";
    gotoxy(41, 13);
    cout << "|";
    gotoxy(41, 14);
    cout << "|";
    gotoxy(41, 15);
    cout << "|";
    gotoxy(41, 16);
    cout << "|";
    gotoxy(41, 17);
    cout << "|";
    gotoxy(41, 18);
    cout << "|";
    gotoxy(41, 19);
    cout << "|";
    gotoxy(40, 7);
    cout << "   ----------------------------------------------------------------------";
    gotoxy(43, 11);
    cout << "-------------------------------------------------------------------";
    gotoxy(43, 16);
    cout << "-------------------------------------------------------------------";
    gotoxy(113, 8);
    cout << "|";
    gotoxy(113, 9);
    cout << "|";
    gotoxy(113, 10);
    cout << "|";
    gotoxy(113, 11);
    cout << "|";
    gotoxy(113, 12);
    cout << "|";
    gotoxy(113, 13);
    cout << "|";
    gotoxy(113, 14);
    cout << "|";
    gotoxy(113, 15);
    cout << "|";
    gotoxy(113, 16);
    cout << "|";
    gotoxy(113, 17);
    cout << "|";
    gotoxy(113, 18);
    cout << "|";
    gotoxy(113, 19);
    cout << "|";
    gotoxy(114, 8);
    cout << "|";
    gotoxy(114, 9);
    cout << "|";
    gotoxy(114, 10);
    cout << "|";
    gotoxy(114, 11);
    cout << "|";
    gotoxy(114, 12);
    cout << "|";
    gotoxy(114, 13);
    cout << "|";
    gotoxy(114, 14);
    cout << "|";
    gotoxy(114, 15);
    cout << "|";
    gotoxy(114, 16);
    cout << "|";
    gotoxy(114, 17);
    cout << "|";
    gotoxy(114, 18);
    cout << "|";
    gotoxy(114, 19);
    cout << "|";
    gotoxy(40, 20);
    cout << "  -----------------------------------------------------------------------";

}

void accFound() {
    gotoxy(44, 4);
    cout << "---------------------------------------------------------------------------";
    gotoxy(45, 5);
    cout << "-------------------------------------------------------------------------";
    gotoxy(43, 5);
    cout << "|";
    gotoxy(43, 6);
    cout << "|";
    gotoxy(43, 7);
    cout << "|";
    gotoxy(43, 8);
    cout << "|";
    gotoxy(43, 9);
    cout << "|";
    gotoxy(43, 10);
    cout << "|";
    gotoxy(43, 11);
    cout << "|";
    gotoxy(43, 12);
    cout << "|";
    gotoxy(43, 13);
    cout << "|";
    gotoxy(43, 14);
    cout << "|";
    gotoxy(43, 15);
    cout << "|";
    gotoxy(43, 16);
    cout << "|";
    gotoxy(43, 17);
    cout << "|";
    gotoxy(43, 18);
    cout << "|";
    gotoxy(43, 19);
    cout << "|";
    gotoxy(43, 20);
    cout << "|";
    gotoxy(43, 21);
    cout << "|";
    gotoxy(43, 22);
    cout << "|";
    gotoxy(43, 23);
    cout << "|";
    gotoxy(43, 24);
    cout << "|";
    gotoxy(43, 25);
    cout << "|";
    gotoxy(43, 26);
    cout << "|";
    gotoxy(43, 27);
    cout << "|";
    gotoxy(44, 6);
    cout << "|";
    gotoxy(44, 7);
    cout << "|";
    gotoxy(44, 8);
    cout << "|";
    gotoxy(44, 9);
    cout << "|";
    gotoxy(44, 10);
    cout << "|";
    gotoxy(44, 11);
    cout << "|";
    gotoxy(44, 12);
    cout << "|";
    gotoxy(44, 13);
    cout << "|";
    gotoxy(44, 14);
    cout << "|";
    gotoxy(44, 15);
    cout << "|";
    gotoxy(44, 16);
    cout << "|";
    gotoxy(44, 17);
    cout << "|";
    gotoxy(44, 18);
    cout << "|";
    gotoxy(44, 19);
    cout << "|";
    gotoxy(44, 20);
    cout << "|";
    gotoxy(44, 21);
    cout << "|";
    gotoxy(44, 22);
    cout << "|";
    gotoxy(44, 23);
    cout << "|";
    gotoxy(45, 9);
    cout << "  ---------------------------------------------------------------------";
    gotoxy(45, 14);
    cout << "  ---------------------------------------------------------------------";
    gotoxy(45, 20);
    cout << "  ---------------------------------------------------------------------";
    gotoxy(118, 6);
    cout << "|";
    gotoxy(118, 7);
    cout << "|";
    gotoxy(118, 8);
    cout << "|";
    gotoxy(118, 9);
    cout << "|";
    gotoxy(118, 10);
    cout << "|";
    gotoxy(118, 11);
    cout << "|";
    gotoxy(118, 12);
    cout << "|";
    gotoxy(118, 13);
    cout << "|";
    gotoxy(118, 14);
    cout << "|";
    gotoxy(118, 15);
    cout << "|";
    gotoxy(118, 16);
    cout << "|";
    gotoxy(118, 17);
    cout << "|";
    gotoxy(118, 18);
    cout << "|";
    gotoxy(118, 19);
    cout << "|";
    gotoxy(118, 20);
    cout << "|";
    gotoxy(118, 21);
    cout << "|";
    gotoxy(118, 22);
    cout << "|";
    gotoxy(118, 23);
    cout << "|";
    gotoxy(119, 5);
    cout << "|";
    gotoxy(119, 6);
    cout << "|";
    gotoxy(119, 7);
    cout << "|";
    gotoxy(119, 8);
    cout << "|";
    gotoxy(119, 9);
    cout << "|";
    gotoxy(119, 10);
    cout << "|";
    gotoxy(119, 11);
    cout << "|";
    gotoxy(119, 12);
    cout << "|";
    gotoxy(119, 13);
    cout << "|";
    gotoxy(119, 14);
    cout << "|";
    gotoxy(119, 15);
    cout << "|";
    gotoxy(119, 16);
    cout << "|";
    gotoxy(119, 17);
    cout << "|";
    gotoxy(119, 18);
    cout << "|";
    gotoxy(119, 19);
    cout << "|";
    gotoxy(119, 20);
    cout << "|";
    gotoxy(119, 21);
    cout << "|";
    gotoxy(119, 22);
    cout << "|";
    gotoxy(119, 23);
    cout << "|";
    gotoxy(119, 24);
    cout << "|";
    gotoxy(119, 25);
    cout << "|";
    gotoxy(119, 26);
    cout << "|";
    gotoxy(119, 27);
    cout << "|";
    gotoxy(45, 24);
    cout << "-------------------------------------------------------------------------";
    gotoxy(44, 28);
    cout << "---------------------------------------------------------------------------";
}

string getPassword() {
    string password;
    char ch;
    while ((ch = _getch()) != '\r') {
        if (ch == '\b') {
            if (!password.empty()) {
                password.pop_back();
                cout << "\b \b";  
            }
        } else {
            password += ch;
            cout << '*';
        }
    }
    cout << endl;

    return password;
}

void desHangman() {
    gotoxy(43,3);
    cout << "..";
    gotoxy(43,4);
    cout << "::";
    gotoxy(43,5);
    cout << "::";
    gotoxy(43,6);
    cout << "::";
    gotoxy(43,7);
    cout << "::";
    gotoxy(46,5);
    cout << "...."; // Letter H
    gotoxy(50,3);
    cout << "..";
    gotoxy(50,4);
    cout << "::";
    gotoxy(50,5);
    cout << "::";
    gotoxy(50,6);
    cout << "::";
    gotoxy(50,7);
    cout << "::";

    gotoxy(54,3);
    cout << "......";
    gotoxy(53,4);
    cout << "..";
    gotoxy(53,4);
    cout << "::";
    gotoxy(53,5);
    cout << "::";
    gotoxy(53,6);
    cout << "::";
    gotoxy(53,7); // Letter A
    cout << "::";
    gotoxy(55,5);
    cout << "....";
    gotoxy(59,4);
    cout << "::";
    gotoxy(59,5);
    cout << "::";
    gotoxy(59,6);
    cout << "::";
    gotoxy(59,7);
    cout << "::";
    
    gotoxy(62,3);
    cout << "..";
    gotoxy(62,4);
    cout << "::";
    gotoxy(62,5);
    cout << "::";
    gotoxy(62,6);
    cout << "::";
    gotoxy(62,7);
    cout << "::";
    gotoxy(64,3); 
    cout << ".";
    gotoxy(65,4);
    cout << "."; // Letter N
    gotoxy(66,5);
    cout << ".";
    gotoxy(67,6);
    cout << ".";
    gotoxy(68,7);
    cout << ".";
    gotoxy(69,3);
    cout << "..";
    gotoxy(69,4);
    cout << "::";
    gotoxy(69,5);
    cout << "::";
    gotoxy(69,6);
    cout << "::";
    gotoxy(69,7);
    cout << "::";
    
    gotoxy(72, 3);
    cout << "........";
    gotoxy(72, 4);
    cout << "::";
    gotoxy(72, 5);
    cout << "::";
    gotoxy(72, 6);
    cout << "::";
    gotoxy(72, 7);
    cout << "::";
    gotoxy(72, 5);
    cout << "......"; // Letter G
    gotoxy(74, 7);
    cout << "::";
    gotoxy(76, 7);
    cout << "::";
    gotoxy(78, 5);
    cout << "..";
    gotoxy(78, 6);
    cout << "::";
    gotoxy(78, 7);
    cout << "::";

    gotoxy(81, 3);
    cout << "..";
    gotoxy(81, 4);
    cout << "::";
    gotoxy(81, 5);
    cout << "::";
    gotoxy(81, 6);
    cout << "::";
    gotoxy(81, 7);
    cout << "::";
    gotoxy(81, 3);
    cout << ".";
    gotoxy(84, 4);
    cout << "."; // Letter M
    gotoxy(85, 5);
    cout << "..";
    gotoxy(88, 3);
    cout << ".";
    gotoxy(87, 4);
    cout << ".";
    gotoxy(89, 3);
    cout << "..";
    gotoxy(89, 4);
    cout << "::";
    gotoxy(89, 5);
    cout << "::";
    gotoxy(89, 6);
    cout << "::";
    gotoxy(89, 7);
    cout << "::";

    gotoxy(93, 3);
    cout << "......";
    gotoxy(92, 4);
    cout << "::";
    gotoxy(92, 5);
    cout << "::";
    gotoxy(92, 6);
    cout << "::";
    gotoxy(92, 7);
    cout << "::"; // Letter A
    gotoxy(94, 5);
    cout << "....";
    gotoxy(98, 4);
    cout << "::";
    gotoxy(98, 5);
    cout << "::";
    gotoxy(98, 6);
    cout << "::";
    gotoxy(98, 7);
    cout << "::";

    gotoxy(101,3);
    cout << "..";
    gotoxy(101,4);
    cout << "::";
    gotoxy(101,5);
    cout << "::";
    gotoxy(101,6);
    cout << "::";
    gotoxy(101,7);
    cout << "::";
    gotoxy(103,3); 
    cout << ".";
    gotoxy(104,4);
    cout << "."; // Letter N
    gotoxy(105,5);
    cout << ".";
    gotoxy(106,6);
    cout << ".";
    gotoxy(107,7);
    cout << ".";
    gotoxy(108,3);
    cout << "..";
    gotoxy(108,4);
    cout << "::";
    gotoxy(108,5);
    cout << "::";
    gotoxy(108,6);
    cout << "::";
    gotoxy(108,7);
    cout << "::";
}

void hangmanMainMenu() { // Main Menu for Hangman Game
    system("cls");

    desHangman();

    int hangChoice;

    gotoxy(45, 15);
    cout << "1 - Play";
    gotoxy(45, 16);
    cout << "2 - How to Play";
    gotoxy(86, 15);
    cout << "3 - Return to Main Menu";
    gotoxy(86, 16);
    cout << "4 - Exit";
    gotoxy(69, 21);
    cout << "Please Select: ";
    cin >> hangChoice;

    switch(hangChoice) {
        case 1: 
        system("cls");
        playHangmanGame();
        break;

        case 2:
        system("cls");

        gotoxy(50, 7); cout << "::";
        gotoxy(50, 8); cout << "::";
        gotoxy(50, 9); cout << "::";
        gotoxy(52, 8); cout << "::::"; // Letter H
        gotoxy(55, 7); cout << "::";
        gotoxy(55, 8); cout << "::";
        gotoxy(55, 9); cout << "::";

        gotoxy(59, 7); cout << "::";
        gotoxy(59, 8); cout << "::";
        gotoxy(59, 9); cout << "::";
        gotoxy(61, 7); cout << "::";
        gotoxy(63, 7); cout << "::";
        gotoxy(65, 7); cout << "::";   // Letter O
        gotoxy(65, 8); cout << "::";
        gotoxy(65, 9); cout << "::";
        gotoxy(61, 9); cout << "::";
        gotoxy(63, 9); cout << "::";

        gotoxy(55, 12); cout << "Guess the word correctly by answering questions."; 
        gotoxy(55, 13); cout << "The player have six(6) lives/attempts";
        gotoxy(55, 14); cout << "Avoid forming the full hangman figure, or the game is over!";

        break;

        case 3:
        system("cls");

        MainMenu();

        break;

        case 4:

        break;
    }
}

void hangmanFigure(int incorrectGuesses) {
    switch (incorrectGuesses) {

        case 0:
            cout << "  +---+\n";
            cout << "  |   |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "=========\n";
            break;
        case 1:
            cout << "  +---+\n";
            cout << "  |   |\n";
            cout << "  O   |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "=========\n";
            break;
        case 2:
            cout << "  +---+\n";
            cout << "  |   |\n";
            cout << "  O   |\n";
            cout << "  |   |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "=========\n";
            break;
        case 3:
            cout << "  +---+\n";
            cout << "  |   |\n";
            cout << "  O   |\n";
            cout << " /|   |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "=========\n";
            break;
        case 4:
            cout << "  +---+\n";
            cout << "  |   |\n";
            cout << "  O   |\n";
            cout << " /|\\  |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "=========\n";
            break;
        case 5:
            cout << "  +---+\n";
            cout << "  |   |\n";
            cout << "  O   |\n";
            cout << " /|\\  |\n";
            cout << " /    |\n";
            cout << "      |\n";
            cout << "=========\n";
            break;
        case 6:
            cout << "  +---+\n";
            cout << "  |   |\n";
            cout << "  O   |\n";
            cout << " /|\\  |\n";
            cout << " / \\  |\n";
            cout << "      |\n";
            cout << "=========\n";
            break;
    }
}

void playHangmanGame() {
    system("cls");
    
    // List of questions and answers (from W3schools and CPPReference)
    vector<pair<string, string>> quiz = {
        {"A data type that stores whole numbers", "int"},
        {"A '!=' comparison operator.", "not equal"},
        {"Defines a variable/parameter as a constant", "const"},
        {"Marks a block of code in switch statements", "case"},
        {"A data type that stores a single character", "char"}, 
        {"A data type that only stores true or false values", "bool"},
        {"A logical '&&' operator.", "and"},
        {"Breaks out of a loop or a switch block", "break"}, 
        {"A boolean value equivalent to 0.", "false"},
        {"A data type (32 bits long) that stores fractional numbers", "float"},
        {"Makes a conditional statement", "if-else"},
        {"Used to return a value from a function", "return"}, 
        {"Indicates a function that does not return a value", "void"},
        {"A data type gotoxy(64 bits long) that stores fractional numbers", "double"},
        {"A variable that stores the memory address as its value", "pointers"},
        {"Used to store multiple values in a single variable", "arrays"},
        {"Used for storing text/characters", "string"},
        {"Used to explain C++ code, and to make it more readable", "comments"},
        {"Block of code which only runs when it is called", "functions"},
        {"This header is part of the input/output library", "<iostream>"}
    };

    // Random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Shuffles the questions to randomize the order
    random_shuffle(quiz.begin(), quiz.end());

    // Number of incorrect guesses allowed
    int maxIncorrectGuesses = 6;
    int incorrectGuesses = 0;

    // Vectors to keep track of correct and incorrect answers
    vector<string> correctAnswers;
    vector<string> incorrectAnswers;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //This source code is from web to solve our problem regarding the input issue

    // Main game loop
    for (size_t i = 0; i < quiz.size() && incorrectGuesses < maxIncorrectGuesses; ++i) {
        hangmanFigure(incorrectGuesses);

        cout << "Question: " << quiz[i].first << endl;
        cout << "Enter your answer: ";

        // Get the player's answer
        string answer;
        getline(cin, answer);

        // Check if the answer is correct
        if (answer == quiz[i].second) {
            cout << "Correct!\n";
            correctAnswers.push_back(quiz[i].first + " (" + quiz[i].second + ")");
        } else {
            incorrectGuesses++;
            cout << "Incorrect. The correct answer was: " << quiz[i].second << endl;
            incorrectAnswers.push_back(quiz[i].first + " (" + quiz[i].second + ")");
        }

        cout << "You have " << (maxIncorrectGuesses - incorrectGuesses) << " attempt/s left.\n\n";

        // Show correct and incorrect answers so far
        cout << "Correct answers so far:\n";
        for (const auto& correct : correctAnswers) {
            cout << "- " << correct << endl;
        }

        cout << "Incorrect answers so far:\n";
        for (const auto& incorrect : incorrectAnswers) {
            cout << "- " << incorrect << endl;
        }

        cout << endl;
    }

    system("cls");

    // Final state of the hangman figure
    hangmanFigure(incorrectGuesses);

    // Show the final count of correct and incorrect answers
    cout << "\nFinal results:\n";
    cout << "\nTotal correct answers: " << correctAnswers.size() << endl;
    cout << "\nTotal incorrect answers: " << incorrectAnswers.size() << endl;

    cout << "\nCorrect answers:\n";
    for (const auto& correct : correctAnswers) {
        cout << "- " << correct << endl;
    }

    cout << "\nIncorrect answers:\n";
    for (const auto& incorrect : incorrectAnswers) {
        cout << "- " << incorrect << endl;
    }
}
