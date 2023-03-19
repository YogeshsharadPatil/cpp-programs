#include<iostream>
using namespace std;
class Student{
   public:
   string name;
   int rollno;
   bool gender;
    void printinfo(){
    cout<<name<<endl;
    cout<<rollno<<endl;;
    cout<<gender<<endl;
  }

};

int main(){
  
  Student a;
  a.name = "Yogesh";
  a.rollno = 101;
  a.gender = 0;
  a.printinfo();

}