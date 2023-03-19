#include <iostream>
using namespace std;
int main()
{
  int a;//intialisationn
  cout <<"Enter value of a"<<endl;
  cin >>a;
  while (a <= 10)//condition
  {
    cout << a << endl;
    a++;//increament
  }
  //do while loop runs at least one
  int b;
  cout <<"Enter value of b "<<endl;
  cin >>b;
  do{
    cout<<b<<endl;
    b++;
  }while(b <= 10);

  for(int i = 1; i<10;i++)
  {
    cout<<i<<endl;
  }

  return 0;
}