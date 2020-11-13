#include <iostream>
using namespace std;


int main() {
  cout << "\n\nStart\n\n";

  int n = 0;
  cout << "Please, enter an even number: " << endl;
  cin >> n;
  while (n % 2 != 0){
    cout << "The number is not even, please, try one more time. " << endl;
    cin >> n;
  }
  for (int row = 0; row <= n; row++){
    for (int col = 0; col <= n; col++){
      if ((col == row)||(row + col == n)){
        cout << "*";
      }
      else {
        cout << " ";
      }
    }
    cout << endl;

  }

  cout << "\n\nFinish\n\n";
  return 0;
}