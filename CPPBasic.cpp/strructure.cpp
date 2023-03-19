#include<iostream>
using namespace std;
// what is structure --> when we use array when all variable are of similar type.
// when all variable are of different type then we use structure for creating new data type. 
struct  Employee
{
  /* data */
  int eId;
  char favchar;
  float salary;

};
int main() 
{
    struct Employee YSP;//ysp is a variable having data type Employee
    struct Employee raj;//Raj is a variable having data type employee
    YSP.salary = 120000;
    cout<<"Salary of Ysp is "<<YSP.salary<<endl;

}
