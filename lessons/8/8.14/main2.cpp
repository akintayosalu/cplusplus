#include <iostream>
#include <random> //for std::mt19937

int main(){
	std::mt19937 mt{}; // Instantiate a 32-bit Mersenne Twister

	// Print a bunch of random numbers
	for (int count{ 1 }; count <= 40; ++count)
	{
        // Create a reusable random number generator that generates uniform numbers between 1 and 6
        std::uniform_int_distribution die6{ 1, 6 }; // for C++14, use std::uniform_int_distribution<> die6{ 1, 6 };
		
        std::cout << die6(mt) << '\t'; // generate a random number

		// If we've printed 5 numbers, start a new row
		if (count % 5 == 0)
			std::cout << '\n';
	}

	return 0;
}
