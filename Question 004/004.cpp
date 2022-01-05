#include <iostream>
#include <cmath>

/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

int main()
{
    std::cout << "Project Euler - Question 4\n";
    int largest_palindrome = 0;
    for (int i = 999; i > 99; i--) {
        for (int j = 999; j > 99; j--) {
            int product = i * j;
            double number_digits = floor(log10(product)) + 1;
            bool not_palindrome = false;
            for (int n = 0; n < (number_digits - 1) / 2; n++) {
                float digit_a = floor(fmod(product, pow(10, n + 1)) / pow(10, n));
                float digit_b = floor(fmod(product, pow(10, number_digits - n)) / pow(10, number_digits - n - 1));
                if (digit_a != digit_b) {
                    not_palindrome = true;
                }
            }
            if (not_palindrome == false && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }
    std::cout << "Solution "  << largest_palindrome << "\n";
}
