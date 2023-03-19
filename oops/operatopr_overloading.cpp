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
  public:
  void showdata(){
      cout<<name<<endl;
      cout<<rollno<<endl;
      cout<<gender<<endl;

  }

  bool operator == (student &s1){
    if(name == s1.name && rollno == s1.rollno && gender == s1.gender){
      return true;
    }
    else{
      return false;
    }
  }

};

int main(){
  student s1("Yogesh",101,1);
  s1.showdata();
  student s2;

  student s3 = s1;

  if(s3==s1){
    cout<<"for s3 same"<<endl;
  }
  else{
    cout<<" for s3 Not same";
  }
  
  if(s2==s1){
    cout<<"for s2 same"<<endl;
  }
  else{
    cout<<"for s2 Not same";
  }

return 0;
}