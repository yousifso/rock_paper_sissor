#include <unistd.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

                srand (time(NULL));

        int computer = rand() % 3 + 1;

        int     user = 0;
                std::cout << "rock paper scissor\n";
                std::cout << "1) ✊🏾 rock\n";
                std::cout << "2) ✋🏾 paper\n";
                std::cout << "3) 🏾 scissor\n";
                std::cout << "shout \n";
                std::cin >> user;

        int     rock = 1;
        int     paper = 2;
        int     scissor = 3;

        /*
        rock > scissor
        sissor > paper
        paper > rock
        */
        if (user == rock && computer == scissor){
                std::cout << "You win \n";
        } else if (user == scissor && computer == paper){
                std::cout << "You win \n";
        } else if (user == paper && computer == rock){
                std::cout << "You win \n";
        } else if (user == computer){
                std::cout << "Tie \n";
        } else {
                std::cout << "You lose \n";
        }

        // Display the computer's choice
        std::cout << "computer's choice: ";
        if (computer == rock) {
                std::cout << "rock\n";
        } else if (computer == paper) {
                std::cout << "paper\n";
        } else if (computer == scissor) {
                std::cout << "scissor\n";
        }
	return 0;
}
