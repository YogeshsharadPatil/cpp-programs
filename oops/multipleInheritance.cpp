#include<iostream>
using namespace std;
class A{
  private:
  int a;
  public:
    void FuncA(){
      cout<<"Inherited funcA"<<endl;
    }

  protected:
     int aprotected;
};

class B{
   private:
   int b;
   public:
   void FuncB(){
     cout<<"Inherited funcB"<<endl;
   }
   
 };

 class C: public A , public B{
    public:
       int c = aprotected;

 };

 int main(){
   C obj;
   obj.FuncA();
   obj.FuncB();



 } 