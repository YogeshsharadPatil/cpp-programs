#include<iostream>
using namespace std;
class A{
  private:
     int a;
   public:
     void funcA(){
       cout<<"FuncA is inherited"<<endl;
   
     }
  protected:
   int aprotected;
};
class B: public A{
   public:
      void funcB(){
        cout<<"FuncB is inherited"<<endl;
      }
};
class C: public B{

};
int main(){
   C obj;
   obj.funcA();
   obj.funcB();
  
  
  
  return 0;
  }