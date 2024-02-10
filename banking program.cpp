#include <iostream> 
#include <iomanip>
using namespace std;

//banking program na pang-malakasan

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
   
    double balance = 0.00;
    int choice = 0;
    do{
      cout << "*******************\n";
      cout << "Enter your choice:\n";
      cout << "*******************\n";
      cout << "1. Show Balance\n";
      cout << "2. Deposit Money\n";
      cout << "3. Withdraw Money\n";
      cout << "4. Exit\n";
      cin >> choice;

      std::cin.clear();
      fflush(stdin);

    switch(choice){
        case 1: showBalance(balance);
                break;
        case 2: balance =+ deposit();
                showBalance(balance);
                break;
        case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;
        case 4:cout << "Thanks for visiting!\n";
        break;
        default:cout << "Invalid Choice!\n";
    }
    }while(choice != 4);
    return 0;
}
void showBalance(double balance){
     std::cout << "Your balance is: $"<< std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){
    
    double amount = 0;
    
    std::cout << "Enter the amount that you want to deposit: ";
    std::cin >> amount;
    
    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "That's not a valid amount! ";
        return 0;
    }
    return amount;
}
double withdraw(double balance){
   
   double amount = 0;

    std::cout << "Enter the amount that you would like to withdraw: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Insufficient funds! ";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That's not a valid amount! ";
        return 0;
    }
    else{
        return amount;
}
}


****------------------------------------------------------------------****

//Bato Bato Pick TOOOOOOOO!!!!!!!!!

#include <iostream> 
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your Choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "The Computer's Choice: ";
    showChoice(computer);

    chooseWinner(player,computer);

    return 0;
}
char getUserChoice(){
    char player;
    std::cout << "Rock Paper Scissors Game!\n";

    do{
    std::cout << "***************************\n";
    std::cout << "Choose one of the following\n";
    std::cout << "***************************\n";
    std::cout << "R/r for rock\n";
    std::cout << "P/p for paper\n";
    std::cout << "S/s for scissors\n";
    std::cin >> player;

    }while(player != 'r' && player != 'p' && player!= 's');
    return player;
    

    return 0;
}
char getComputerChoice(){

    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "Rock\n";
        break;
        case 'p': std:: cout << "Paper\n";
        break;
        case 's': std::cout << "Scissors\n";
        break;
    }
}
void chooseWinner(char player, char computer){

    switch(player){
        case 'r': if(computer == 'r'){
                    std::cout << "It's a Tie!\n";
                    }else if(computer == 'p'){
                        std::cout << "You Lose!\n";
                    }
                    else{
                        std::cout << "You Win!\n";
                    }
                    break;
        case 'p': if(computer == 'p'){
                    std::cout << "You Win!\n";
                    }else if(computer == 'p'){
                        std::cout << "It's a Tie!\n";
                    }
                    else{
                        std::cout << "You Lose!\n";
                    }
                    break;
        case 's': if(computer == 'r'){
                    std::cout << "It's Lose!\n";
                    }else if(computer == 'p'){
                        std::cout << "You Win!\n";
                    }
                    else{
                        std::cout << "It's a Tie!\n";
                    }
                    break;
    }
}

