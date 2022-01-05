#include <iostream>

/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

int main()
{
	int solution[3] = { 0,0,0 };
	std::cout << "Project Euler - Question 9\n";
	for (int a = 1; a <= 998; a++) {
		for (int b = 1; b <= 999; b++) {
			int c = 1000 - a - b;
			if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
				solution[0] = a;
				solution[1] = b;
				solution[2] = c;
			}
		}
	}
	std::cout << "Solution " << solution[0] * solution[1] * solution[2] << "\n";
}