#include <iostream>
using namespace std;
int main()
{
  int n;
  cout <<"Enter size of an array"<<endl;
  cin>>n;
  int arr[n];
  for (int i;i<n;i++){
      cout <<" Enter " <<i<< " value of an array "<<endl;
      cin>>arr[i];
  }
  for(int i;i<n;i++){
    cout << arr[i] <<" ";
  }


  


}