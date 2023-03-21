#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &digits)
{
  int x = digits.size();
  digits[x - 1] = digits[x - 1] + 1;
  for (int i = 0; i < x; i++)
  {
    if (i == x - 1 && digits[0] == 10)
    {
      digits[0] = 0;
      digits.insert(digits.begin(), 1);
    }

    else if (digits[x - i - 1] == 10)
    {
      digits[x - i - 1] = 0;
      digits[x - i - 2] = digits[x - i - 2] + 1;
      
    }
    else
    {
      break;
    }
  }
  return digits;
}

int main()
{
  vector<int> v = {4,3,2,1};
  int target = 0;
  v = plusOne(v);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}
