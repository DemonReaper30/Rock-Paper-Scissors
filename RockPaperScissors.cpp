#include <iostream>
#include <ctime>

char getUserChoice(){

    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";

    do{
        std::cout << "Choose one of the following:\n";
        std::cout << "'r' for Rock\n";
        std::cout << "'p' for Paper\n";
        std::cout << "'s' for Scissors\n";
        std::cout << "'l' for Lizard\n";
        std::cout << "'k' for Spock\n";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's' && player != 'l' && player != 'k');

    return player;
}
char getComputerChoice(){
    
    srand(time(0));
    int num = rand() % 5;

    switch(num){
        case 0: return 'r';
        case 1: return 'p';
        case 2: return 's';
        case 3: return 'l';
        case 4: return 'k';
    }

    return 0;
}
void showChoice(char choice){

    switch(choice){
        case 'r': std::cout << "Rock\n";
                break;
        case 'p': std::cout << "Paper\n";
                break;
        case 's': std::cout << "Scissors\n";
                break;
        case 'l': std::cout << "Lizard\n";
                break;
        case 'k': std::cout << "Spock\n";
    }
}
void chooseWinner(char player, char computer){

    switch(player){
        case 'r':   if(computer == 'r'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 'p' || computer == 'k'){
                        std::cout << "You lose\n";
                    }
                    else{
                        std::cout << "You win!\n";
                    }
                    break;
        case 'p':   if(computer == 'p'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 's' || computer == 'l'){
                        std::cout << "You lose\n";
                    }
                    else{
                        std::cout << "You win!\n";
                    }
                    break;
        case 's':   if(computer == 's'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 'r' || computer == 'k'){
                        std::cout << "You lose\n";
                    }
                    else{
                        std::cout << "You win!\n";
                    }
                    break;
        case 'l':   if(computer == 'l'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 'r' || computer == 's'){
                        std::cout << "You lose\n";
                    }
                    else{
                        std::cout << "You win!\n";
                    }
                    break;
        case 'k':   if(computer == 'k'){
                        std::cout << "It's a tie!\n";
                    }
                    else if(computer == 'l' || computer == 'p'){
                        std::cout << "You lose\n";
                    }
                    else{
                        std::cout << "You win!\n";
                    }
                    break;
    }

}

int main() {
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}