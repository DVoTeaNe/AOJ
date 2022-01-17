#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i=1;i<=n;i++) {
    if (i%3==0 || i%10==3) {
      cout << " " << i;
      continue;
    }
    int j = i/10;
    while(true){
      if (j > 0) {
        if (j%10==3) {
          cout << " " << i;
          break;
        } else {
          j /= 10;
        }
      } else {
        break;
      }
    }
  }
  cout << endl;
  return 0;
}