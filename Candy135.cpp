#include <algorithm>

#include <vector>
#include <iostream>
using namespace std;

int candy(vector<int> &ratings)
{

  int n = ratings.size();

  vector<int> RatingCandy(n, 1);

  for (int i = 1; i < n; i++)
  {
    if (ratings[i] > ratings[i - 1])
    {
      RatingCandy[i] = RatingCandy[i - 1] + 1;
    }
  }

  for (int i = n - 1; i >= 1; i--)
  {

    if (ratings[i - 1] > ratings[i])
    {
      RatingCandy[i - 1] = max(RatingCandy[i] + 1, RatingCandy[i - 1]);
    }
  }

  int candy = 0;

  for (int i = 0; i < n; i++)
  {
    candy += RatingCandy[i];
  }

  return candy;
}

int main()
{
  vector<int> a = {1, 3, 2, 2, 1};
  cout << candy(a);
  return 0;
}
