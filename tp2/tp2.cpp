// tp2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void calculator();
int main()
{

	calculator();
}

void calculator()
{
	int option = 0;
	char contnue;
	do
	{
		std::cout << "Calculator menu:\n\t1. Add\n\t2. Subtract\n\t3. Multiply\n\t4. Division\n\t5. Modulus\n";
		std::cin >> option;
		if (option >= 1 && option <= 5)
		{
			float a, b;
			std::cout << "Enter first number\n";

			std::cin >> a;
			std::cout << "Enter second number\n";
			std::cin >> b;

			if (option == 4 && b == 0)
			{

				do
				{
					std::cout << "Enter a number different than 0 to divide:";
					std::cin >> b;
				} while (b == 0);
			}
			switch (option)
			{
			case 1:std::cout << a + b;
				break;
			case 2: std::cout << a - b;
				break;
			case 3:std::cout << a * b;
				break;
			case 4: std::cout << a / b;
				break;
			case 5: std::cout << int(a) % int(b);
			default:
				break;
			}
		}
		std::cout << "\nDo you want to try again (y)?";
		std::cin >> contnue;
	} while (contnue == 'y');
}
