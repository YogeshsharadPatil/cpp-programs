#include <iostream>
using namespace std;

int main() {
  int n,m;
  cout <<"Enter no. of row in an array"<<endl;
  cin >> n;
  cout <<"Enter no. of coloumn in an array"<<endl;
  cin >>m;
    int numbers[n][m];

    cout << "Enter"<<" "<<n*m<<" "<<"numbers: " << endl;

    // Storing user input in the array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> numbers[i][j];
        }
    }

    cout << "The numbers are: " << endl;

    //  Printing array element s
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j] << endl;
        }
    }

    return 0;
}