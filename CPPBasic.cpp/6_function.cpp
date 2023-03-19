#include<iostream>
using namespace std;
int sum(int x, int y){//call by value-> x and y formal parmeters 
                      //in call by value no affect on the actual parameters and value is passed
    int z;
    z = x + y;
    return z;
  }
  int multiplication( int &m,int &n){//cll by reference in which u can pass the address of actual parameter
  int mul;
  mul = m*n;                                    //it affect on the value of actual parameters if changes occurse
  return mul;
  }
int main(){
  int num1, num2;
  cout <<"Enter value of first number"<<endl;
  cin >> num1;
  cout <<"Enter value of second number" <<endl;
  cin >> num2;
  cout << "Summition of "<<num1<< " and " <<num2<< " is "  <<sum(num1,num2)<<endl;//num1 and num2 are actual parameters


  cout <<"Multiplication of "<<num1<< " and " <<num2<< " is  " <<multiplication(num1,num2)<<endl;

}