#include <unistd.h>
#include <iostream>
int main()
{
	
		srand (time(NULL));
 
	int computer = rand() % 3 + 1;
 
	int	user = 0;
		std::cout << "rock paper sissor\n";
		std::cout << "1) ✊🏾rock\n";
		std::cout << "2) ✋🏾paper\n";
		std::cout << "3) 🏾sissor\n";
		std::cout << "shout \n";
		std::cin >> user;
	
	int	rock = 1;
	int	paper = 2;
	int	sissor = 3;
	
	/*
	rock > sissor
	sissor > paper
	paper > rock
	*/
	if (user == rock && computer == sissor){
		std::cout << "You win \n";
	} else if (user == sissor && computer == paper){
		std::cout << "You win \n";
	} else if (user == paper && computer == rock){
		std::cout << "You win \n";
	} else if (user == computer){
		std::cout << "Tie \n";
	} else {
		std::cout << "You lose \n";
	}
		std::cout << "computer" << computer;
} 
