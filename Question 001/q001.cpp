#include <iostream>

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

int main()
{
	std::cout << "Project Euler - Question 1\n";
	int total = 0;
	for (int i = 1; i < 1000; i++) {
		if (i % 3 == 0) {
			total += i;
		}
		else if (i % 5 == 0) {
			total += i;
		}
	}
	std::cout << "Solution " << total << "\n";
}