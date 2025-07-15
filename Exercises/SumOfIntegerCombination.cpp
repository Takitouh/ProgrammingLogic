#include <iostream>
#include <vector>
using namespace std;

/*
Sum of integer combination
Author: KenKamau
URL: https://www.codewars.com/kata/59f3178e3640cef6d90000d5/train/cpp
Description: This program calculates the sum of elements of an array to match a N value
PS: This exercise for me at this moment was hard, i needed to search on internet about techniques because i wasn't very
acquaint with recursion, although this exercise was beatiful 
*/

void foundCombinations(int index, int sum, int lenghtSub, int& nComb);

int n = 30;
vector<int> vec = {3,6,9,12,14,18};
int lenght = vec.size();

int main()
{ 
  int nComb = 0;
  int lenghtSub = 0;
  int sum = 0;

  for (int i = 0; i < lenght; i++)
  {
    foundCombinations(i, sum + vec[i], lenghtSub + 1, nComb);
  }
  cout << nComb;
}

void foundCombinations(int index, int sum, int lenghtSub, int& nComb)
{
  if (index >= lenght || sum > n || lenghtSub > lenght)
  {
    return;
  }
  else if (sum == n)
  {
    nComb++;
    return;
  }
  foundCombinations(index, sum + vec[index], lenghtSub + 1, nComb);

  foundCombinations(index + 1, sum, lenghtSub, nComb);
}