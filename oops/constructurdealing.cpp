#include<iostream>
using namespace std;

class student{
  string name;
  int rollno;
  bool gender;
   
  public:
    student(){
      cout<<"Default constructor"<<endl;
    }//default constructor

    student( student &s1){
    cout<<"copy  constructor"<<endl;
      name = s1.name;
      rollno = s1.rollno;
      gender = s1.gender;
    }

  student(string gname, int grollno, bool ggender  ){

    name = gname;
    rollno = grollno;
    gender = ggender;
  }//parameterised constructor

  ~student(){
    cout<<"Default destructors"<<endl;
  }// destructors run automatically if execution of object is over
  public:
  void showdata(){
      cout<<name<<endl;
      cout<<rollno<<endl;
      cout<<gender<<endl;

  }

};

int main(){
  student s1("Yogesh",101,1);
  s1.showdata();
  student s2;

  student s3 = s1;

return 0;
}