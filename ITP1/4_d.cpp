#include <iostream>
using namespace std;

int calcMin(int min, int tmp)
{
  return min < tmp ? min : tmp;
}

int calcMax(int max, int tmp)
{
  return max > tmp ? max : tmp;
}

int main()
{
  int n;
  int min, max;
  long long sum = 0;
  cin >> n;
  for (int i=0; i<n; i++) {
    int tmp;
    cin >> tmp;
    if (i == 0) {
      min = tmp;
      max = tmp;
    }
    min = calcMin(min, tmp);
    max = calcMax(max, tmp);
    sum += tmp;
  }
  cout << min << " " << max << " " << sum << endl;
  return 0;
}