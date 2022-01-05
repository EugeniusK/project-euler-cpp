#include <iostream>

/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

int main()
{
    std::cout << "Project Euler - Question 5\n";
    long int solution = 1;
    int highf_prime_factors_dict[20] = {  };
    for (int n = 1; n < 21; n++) {
        int prime_factors_dict[20] = {  };
        int k = n;
        for (int i = 2; i < sqrt(n) + 1; i++) {
            while (k % i == 0) {
                k /= i;
                prime_factors_dict[i - 1] += 1;
            }
        }
        if (k != 1) {
            prime_factors_dict[k - 1] += 1;
        }
        for (int b = 0; b < 20; b++) {
            if (prime_factors_dict[b] > highf_prime_factors_dict[b]) {
                highf_prime_factors_dict[b] = prime_factors_dict[b];
            }
        }
    }
    for (int c = 0; c < 20; c++) {
        solution *= pow(c + 1, highf_prime_factors_dict[c]);
    }
    std::cout << "Solution " << solution << "\n";
}