#include <iostream>  // Include the input/output stream library
#include <vector>    // Include the vector library for using vectors
using namespace std; // Using standard namespace

/*
SumPrimeIndexElements
Author: KenKamau
URL: https://www.codewars.com/kata/59f38b033640ce9fc700015b/train/cpp
Description: This program calculates the sum of elements at prime indices in a given vector of integers.
*/

int solve(vector<int> v); // Function prototype for solving the problem
bool isPrime(int n);      // Function to check if a number is prime

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; // Example vector
    cout << "Sum of elements at prime indices: " << solve(v) << endl;    // Output the result
    // Example output: Sum of elements at prime indices: 47
    return 0;
}

int solve(vector<int> v)
{
    int sum = 0;
    for (int i = 2; i < v.size(); i++)
    {
        if (isPrime(i)) // Check if the index is prime
        {
            sum += v[i]; // Add the element at the prime index to the sum
        }
    }
    return sum; // Return the total sum of elements at prime indices
}

bool isPrime(int n)
{
    bool flag = true; // Flag to check if n is prime
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = false; // If n is divisible by i, it's not prime
        }
    }
    return flag;
}
