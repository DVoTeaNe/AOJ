#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  vector<int> a;
  cin >> n;
  for (int i=0; i<n; i++) {
    int an;
    cin >> an;
    a.push_back(an);
  }
  for (int i=n-1; i>=0; i--) {
    cout << a[i];
    if (i==0) {
      cout << endl;
    } else {
      cout << " ";
    }
  }

  return 0;
}