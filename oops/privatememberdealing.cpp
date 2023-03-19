#include <iostream>
using namespace std;
class student
{
  string name;
  int rollno;
  bool gender;

public:
  void setvalue(string gname, int grollno, bool ggender)
  {
    name = gname;
    rollno = grollno;
    gender = ggender;
  }

  void showdata()
  {
    cout << name << endl;
    cout << rollno << endl;
    cout << gender << endl;
  }
};

int main()
{

  int n;
  string gname;
  int grollno;
  bool ggender;
  cout<<"Enter no. of students data: "<<endl;
  cin >> n;
  student arr[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Enter name: " << endl;
    cin >> gname;
    cout << "Enter rollnno: " << endl;
    cin >> grollno;
    cout << "Enter gender: " << endl;
    cin >> ggender;
    arr[i].setvalue(gname, grollno, ggender);
  }

  for (int i = 0; i < n; i++)
  {
    arr[i].showdata();
  }

  return 0;
}