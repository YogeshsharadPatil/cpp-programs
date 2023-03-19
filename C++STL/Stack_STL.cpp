#include <bits/stdc++.h>
#include<stack> //if u are not using above header file then u need to include this to use stack in your program.
using namespace std;
int main(){
   // stack => It is container which follows LIFO .
   // => STL provides direct functions to us.
   // => Operations are performed on the top of container.
   // =>Consider an example of plates stacked over one another in the canteen.


   //-----------------------------------------------------------------------------------------------
   // initialisation and important functions:
   // stack<int>s; //vector<int>v;
   // s.push(10); //push function add element to the stack
   // s.push(20);
   // s.push(30);
   // s.push(40);
   // s.push(50);
   // // while (!s.empty())
   // // {
   // //     cout<<s.top()<<" ";
   // //     s.pop();
   // // }
  
   // // 1.push => add element to the top of stack
   // s.push(60);
   // s.emplace(70);
   // // 2.pop => removes element from the top of stack
   // int item = s.top();
   // s.pop();
   // // cout<<item<<endl;
   // s.pop();
   // // cout<<s.top()<<endl;
   // s.pop();
   // s.pop();
   // item = s.top();
   // cout<<item<<endl;


   // 3.empty() => it checks whether stack is empty or not
   // stack<char>s1;
   // s1.push('a');
   // s1.push('b');
   // s1.push('c');
   // cout<<s1.empty()<<endl; //boolean


   // stack<int>s2;
   // s2.push(10);
   // s2.push(20);
   // s2.push(30);


   // stack<int>s3;
   // s3.push(40);
   // s3.push(50);
   // s3.push(60);
   // // s2.swap(s3);
   // swap(s2,s3);
   // // while (!s2.empty())
   // // {
   // //     cout<<s2.top()<<" ";
   // //     s2.pop();
   // // }
   // // cout<<endl;
   // while (!s3.empty())
   // {
   //     cout<<s3.top()<<" ";
   //     s3.pop();
   // }
// ---------------------------------------------------------------------------------
   // stack traversal method:
   // stack<int>s3;
   // s3.push(40);
   // s3.push(50);
   // s3.push(60);
   // stack<char>s3;
   // s3.push('a');
   // s3.push('b');
   // s3.push('c');
   // while (!s3.empty()) //s3.empty() == false
   // {
   //     cout<<s3.top()<<" ";
   //     s3.pop();
   // }
  
   return 0;
}