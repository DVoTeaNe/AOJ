#include <iostream>
#include <vector>
using namespace std;

void showRoom(vector<vector<int> > v)
{
  for (int i=0; i<3; i++) {
    for (int j=0; j<10; j++) {
      cout << " " << v.at(i).at(j);
    }
    cout << endl;
  }
}

int main()
{
  vector<vector<int> > b1(3, vector<int>(10, 0));
  vector<vector<int> > b2(3, vector<int>(10, 0));
  vector<vector<int> > b3(3, vector<int>(10, 0));
  vector<vector<int> > b4(3, vector<int>(10, 0));

  int n;
  cin >> n;
  for (int i=0; i<n; i++) {
    int b,f,r,v;
    cin >> b >> f >> r >> v;
    switch(b) {
      case 1:
        b1[f-1][r-1] += v;
        break;
      case 2:
        b2[f-1][r-1] += v;
        break;
      case 3:
        b3[f-1][r-1] += v;
        break;
      case 4:
        b4[f-1][r-1] += v;
        break;
    }
  }
  showRoom(b1);
  cout << "####################" << endl;
  showRoom(b2);
  cout << "####################" << endl;
  showRoom(b3);
  cout << "####################" << endl;
  showRoom(b4);
  return 0;
}