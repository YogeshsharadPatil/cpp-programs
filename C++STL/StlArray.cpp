#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main()
{

  array<int, 3> a = {1, 2, 3}; //similar to -->//int a[3] = {1,2,3};
  cout << "Size " << a.size() << endl;

  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;

  cout << "Element at second index using *at* operator " << a.at(2) << endl;

  cout << "front " << a.front() << endl;
  cout << "back " << a.back() << endl;
  cout << "empty " << a.empty() << endl;

  //*vector is dynamic sized array , it will double the memory after the
  // capacity of previous vector is over
  // then double the size and copy the elements in the previous vector
  // paste that element in the newly created vector
  // erase the memory of the previous vector
  vector<int> v; // 5 size and 1 is intialised ; default initialiser is 0
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  //insert element into a vector
  v.push_back(2);
  v.push_back(3);
  int i = 0;
  for (int i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  cout << "capacity" << v.capacity() << endl;
}