#include <iostream>
using namespace std;
int main()
{
  int age;
  cout << "Enter the value of age" << endl;
  cin >> age;
  if(age<=0)
  {
    cout <<"INVALID age";
  }
  else if (age >= 18)
  {
    cout << "You can vote";
  }
  else
  {
    cout << "You can not vote";
  }
}