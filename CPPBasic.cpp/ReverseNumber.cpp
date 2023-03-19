#include<iostream>
using namespace std;
string reverse_num(int n)
{
  string rev_num;
  while(n>0){
      n = n % 10;
      rev_num = to_string(n)  + rev_num;
      n = n/10;     
  }

  return rev_num;
}
int main(){
   int n;
   cin>>n;
   cout<<reverse_num(n);
   

  return 0;
}