#include <iostream>

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

int main()
{
	const int n = 1000000;
	std::cout << "Project Euler - Question 6\n";
	bool prime_array[n - 1] = {  }; // 2 ~ 1000000
	for (int c = 2; c < n - 1; c += 2) {
		prime_array[c] = true;
	}
	for (int i = 1; i * i < n; i += 2) {
		if (prime_array[i] == false) {
			for (int p = 2 * (i + 1); p < n; p += (i + 2)) {
				prime_array[p] = true;
			}
		}
	}
	int count = 0;
	for (int d = 0; d < n - 1; d++) {
		if (prime_array[d] == false) {
			count += 1;
			if (count == 10001) {
				std::cout << "Solution " << d + 2 << "\n";
			}
		} 
	}
}