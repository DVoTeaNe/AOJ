#include <iostream>
using namespace std;

void output(int Card[], char m){
  for (int i=0; i<13; i++) {
    if(Card[i] == 0) {
      cout << m << " " << (i+1) << endl;
    }
  }
}

int main()
{
  char mark[2];
  int n,S[13],H[13],C[13],D[13],tmp;
  for (int i=0;i<13;i++) S[i]=H[i]=C[i]=D[i]=0;
  cin >> n;
  for (int i=0;i<n;i++) {
    cin >> mark >> tmp;
    switch(mark[0]){
      case 'S':
        S[tmp-1] = 1;
        break;
      case 'H':
        H[tmp-1] = 1;
        break;
      case 'C':
        C[tmp-1] = 1;
        break;
      case 'D':
        D[tmp-1] = 1;
        break;
    }
  }
  output(S, 'S');
  output(H, 'H');
  output(C, 'C');
  output(D, 'D');

  return 0;
}