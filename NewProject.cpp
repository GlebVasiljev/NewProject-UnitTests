
#include <iostream>
#include "C:/Users/glebs/source/repos/NewProject/MathOp.h"

using namespace std;


int main(int argc, char* argv[])
{
	int UserInput;
	std::cout << "Enter an integer number\n";
	while (true) {
		if (std::cin >> UserInput) {
			break;
		}
		else {
			std::cout << "You have entered wrong input. Try again " << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			
		}
		
	}

	MathOp NewInt;
	NewInt.square(UserInput);
	return 0;
}


