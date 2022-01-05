#include <iostream>

/*
The sum of the squares of the first ten natural numbers is,
385
The square of the sum of the first ten natural numbers is,
3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
3025-385=2640
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

int main()
{
	std::cout << "Project Euler - Question 6\n";
	long int s1 = 0, s2 = 0;
	for (int i = 1; i <= 100; i++) {
		s1 += pow(i, 2);
		s2 += i;
	}
	s2 = pow(s2, 2);
	std::cout << "Solution " << s2 - s1 << "\n";
}