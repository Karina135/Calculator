#include <iostream>
#include "Calc_library.h"
#include <cstring>
using std::cout;
using std::cin;

void run(){
	char buffer[500];

	cout << "Enter 'exit' to quit.\n";

	while (true) {
		cout << "Enter expression: ";
		cin.getline(buffer, sizeof(buffer));
		if (strncmp("exit", buffer, 4) == 0)
			break;
		cout << "Result: " << calculate(buffer) << '\n';
	}
}

int main()
{
	run();
}
