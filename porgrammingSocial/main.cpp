#include <iostream>
#include <stdlib.h>
#include <time.h>


int main() {
	int a = 5;
	
	return 0;
}

void fundamentals9() {
	/*
	Write a guessing game where the user has to guess a secret number. 
	After every guess the program tells the user whether their number was too large or too small. 
	At the end the number of tries needed should be printed. 
	It counts only as one try if they input the same number multiple times consecutively.*/
	srand(time(NULL));
	int ranNum = rand() % 100 + 1;
	int userGuess;
	int tryCount = 0;

	do {
		tryCount++;
		std::cout << "Enter a number: ";
		std::cin >> userGuess;
		if (checkValue(1, 100, userGuess)) {
			if (userGuess < ranNum)
				std::cout << "Too Low";
			else if (userGuess > ranNum)
				std::cout << "Too High";
		}
	} while (userGuess != ranNum);
	std::cout << "Congrats, it took you " << tryCount << "times";
	std::cout << "Enter a number between 1 and 100. The aim is to try and get the number in the least number of tries.";

}


//Return true if number is equals or greater than lower bound and equals or less than higher
bool checkValue(const int& lowBound, const int& highBound, const int& num) {
	return num >= lowBound && num <= highBound;
}