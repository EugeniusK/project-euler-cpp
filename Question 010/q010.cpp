#include <iostream>

/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

int main()
{
	const int n = 2000000;
	std::cout << "Project Euler - Question 10\n";
	bool* prime_array = new bool[n - 1]();
	for (int c = 2; c < n - 2; c += 2) {
		prime_array[c] = true;
	}
	for (int i = 1; i * i < n; i += 2) {
		if (prime_array[i] == false) {
			for (int p = 2 * (i + 1); p < n - 2; p += (i + 2)) {
				prime_array[p] = true;
			}
		}
	}
	long long int total = 0;
	for (int d = 0; d < n - 1; d++) {
		if (prime_array[d] == false) {
			total += d + 2;
		}
	}
	std::cout << "Solution " << total << "\n";
	delete[] prime_array;
}