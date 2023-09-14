// Lauma Gailite 221RDB389 2. grupa

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;

  cout << "n=";
  cin >> n;

if(!n){
      cout << "input-output";
      //return 0;
    }

else if (n <= 1) {
    cout << "error";
    //return 0;
}
  else if(n >=2) {
    //cout << n <<;

    while (n % 2 == 0) {
      cout << 2 << " ";
      n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2) {
      while (n % i == 0) {
        cout << i << " ";
        n = n / i;
      }
    }

    if (n > 2) {
      cout << n << " ";
      //return 0;
    }
  }
  return 0;
}