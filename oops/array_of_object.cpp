#include<iostream>
using namespace std;

class student{
  public:
  string name;
  int rollno;
  bool gender;
  void printinfo(){
  cout<<"name:"<<endl;
  cout<<name<<endl;
  cout<<"rollno:"<<endl;
  cout<<rollno<<endl;
  cout<<"gender:"<<endl;
  cout<<gender<<endl;

  }

};
int main()
{
 int n;
 cout<<"Enter the no. of students data: "<<endl;
 cin>>n;
 student arr[n];
  for(int i = 0; i<n;i++){
        cout<<"Name:"<<endl;
        cin>>arr[i].name;
        cout<<"rollno: "<<endl;
        cin>>arr[i].rollno;
        cout<<"gender: 1-->male , 0-->female"<<endl;
        cin>>arr[i].gender; 
  }

  for(int i = 0;i<n;i++){
     arr[i].printinfo();

  }


 
 
  return 0;
}