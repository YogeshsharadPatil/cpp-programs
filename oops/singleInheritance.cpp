#include<iostream>
using namespace std;
class A{
   public:
   void FuncA(){
     cout<<"Inherited fn A"<<endl;
   }
   protected:
     int a;
};
class B: public A{


};

int main(){
  B obj;
  obj.FuncA();
}