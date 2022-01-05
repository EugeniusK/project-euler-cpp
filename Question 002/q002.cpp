#include <iostream>

/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

int main()
{
	std::cout << "Project Euler - Question 2\n";
	int total = 0;
	int a = 1, b = 2;
	while (a < 4000000) {
		int tmp = b;
		b = a + b;
		a = tmp;
		if (a % 2 == 0) {
			total += a;
		}
	}
	std::cout << "Solution " << total << "\n";
}