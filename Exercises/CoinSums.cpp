#include <iostream>  // Include the input/output stream library
#include <vector>    // Include the vector library for using vectors
using namespace std; // Using standard namespace
                     /*
                      Coin Sums problem
                      Source: https://projecteuler.net/problem=31
                      Description: In the United Kingdom the currency is made up of pound (£) and pence (p).
                      There are eight coins in general circulation:
                     
                     1p, 2p, 5p, 10p, 20p, 50p, £1 (100p), and £2 (200p).
                     It is possible to make £2 in the following way:
                     
                     1×£1 + 1×50p + 2×20p + 1×5p + 1×2p + 3×1p
                     How many different ways can £2 be made using any number of coins?
                     */

vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200}; // Define the coin denominations
int comb = 0;                                        // Variable to count the combinations
int sum = 0;

void foundCombination(int index, int sum);

int main()
{
    for (int i = 0; i < coins.size(); i++)
    {
        foundCombination(i, sum+coins[i]);
    }
    cout << comb;
    return 0;
}

void foundCombination(int index, int sum)
{
    if (sum > 200 || index >= coins.size())
    {
        return;
    }
    else if (sum == 200)
    {
        comb++;
        return;
    }

    foundCombination(index, sum + coins[index]);

    foundCombination(index + 1, sum);
}
