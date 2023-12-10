
#include <iostream>
#include <math.h>

//a simple program to convert a users input fahrenheit temperature to celsius//

int main() {
	float temp_f{}, temp_c{};
	std::cout << "Enter your temperature in Fahrenheit: " << std::endl;
	std::cin >> temp_f;
	temp_c = (temp_f - 32) * (5.0 / 9.0);
	std::cout << "The Temperature in Celsius is " << temp_c << "\n";
}


