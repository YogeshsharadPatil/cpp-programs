#include<iostream>
using namespace std;
class A{
  public:
      void funcA(){
        cout<<"Func A"<<endl;
      }
  private:
    void funcB(){
      cout<<"FuncB"<<endl;
    }
  protected:
    void funC(){
      cout<<"FunC"<<endl;
    }
};

int main(){
 
  A obj;
  obj.funcA();
  obj.funcB();
  obj.funC();

}