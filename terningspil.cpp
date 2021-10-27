#include <iostream>
#include <cmath>

void Startgame(std::string player1name, std::string player2name){
    int player1score;
    int player2score;
    int tilfældig = rand() % 7;
    std::cout << "klik på enter for at spille!" << std::endl;
    while(player1score < 100 or player2score < 100){
        getchar();
        std::cout << "\n" << player1name << "fik: " << tilfældig << std::endl << player1name << " score er nu: " << tilfældig + player1score;
        getchar();
        std::cout << "\n" << player2name << " fik: " << tilfældig << std::endl << player2name << " score er nu: " << tilfældig + player2score;
    }
    if (player1score > 100){
        std::cout << "\n" << player1name << " har vundet spillet!";
    }
    else if(player2score > 100){
        std::cout << "\n" << player2name << " har vundet spillet!";
    }
    else{std::cout << "\nDet stod lige!"; }

}

int main(){

    std::string player1name = "";
    std::string player2name = "";

    std::cout << "Velkommen til terningspil!" << std::endl << "Skriv et navn til spiller 1!" << std::endl << "Enter: ";
    std::cin >> player1name;
    std::cout << "\nSkriv et navn til spiller 2!" << std::endl << "Enter: ";
    std::cin >> player2name;
    system("CLS");
    std::cout << std::endl << "Velkommen " << player1name << " og " << player2name << "!" << std::endl;
    Startgame(player1name, player2name);


    return 0;
}