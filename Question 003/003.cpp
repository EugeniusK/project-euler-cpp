#include <iostream>

/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

int main()
{
    std::cout << "Project Euler - Question 3\n";
    const long long int n = 600851475143;
    long long int k = n;
    int largest = 0;
    for (int i = 2; i < sqrt(n) + 1; i++) {
        while (k % i == 0) {
            k /= i;
            largest = i;
        }
    }
    std::cout << "Solution " << largest << "\n";
}