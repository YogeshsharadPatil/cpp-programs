#include <bits/stdc++.h>
#include <vector> //if we don't use above header file then we need to include vector
using namespace std;
int main()
{


   // 1.initialization of vector
   // int arr[10];
   // vector<int>v;
   // vector<char>v1;
   // vector<int>v(10); //=>this will creates vector of 10 size.default value is 0.
   // for(int x : v){
   //     cout<<x<<" ";
   // }
   // vector<int>v1(10,-1);
   //
   // int arr[] = {10,20,30};
   //we can directly intialize vector
   // vector<int>v2{10,20,30};
   // for(int x : v2){
   //     cout<<x<<" ";
   // }
   // vector<string>names{"abhi","amol","aniket"};
   // for(string x : names){
   //     cout<<x<<" ";
   // }


   //we can initialize our vector from another vector
   // vector<int>v1{10,20,30,40};
   // vector<int>res(v1.begin(),v1.end());
   // for (int i = 0; i < res.size(); i++)
   // {
   //     cout<<res[i]<<" ";
   // }


   // ----------------------------------------------------------------------------------------
   // 2.Basic but important vector functions


   // 1.size=>returns the number of elements present in the vector
   vector<int>v{10,20,30};
   cout<<v.size()<<endl;
   cout<<v.capacity()<<endl;
   // //2.capacity => returns the capacity of vector
   // v.push_back(40);
   // v.push_back(50);
   // cout<<v.size()<<endl;
   // cout<<v.capacity()<<endl;
   //3.empty function returns whether vector is empty or not?
   // cout<<v.empty()<<endl;


   //v[i] and at(i) function
   // cout<<v[2]<<endl;
   // cout<<v.at(1)<<endl;


   // 4.front() and back()
   // cout<<v.front()<<endl; //returns the first element of vector
   // cout<<v.back()<<endl; //returns the last element of vector
   // ----------------------------------------------------------------------------------------


   //vector important modifying functions
   // 1.push_back=>used to push elements into vector from back
   // vector<int>v;
   // v.push_back(10);
   // v.push_back(20);
   // v.push_back(30);
   // v.push_back(40);
   // v.pop_back();
   // v.pop_back();
   // v.pop_back();
   // v.pop_back();
   // for (int i = 0; i < v.size(); i++)
   // {
   //     cout<<v[i]<<" ";
   // }
// --------------------------------------------------------------------------------


   //traversal methods of vector
   // 1.we can use normal for loop
   // vector<int>v{10,20,30,40};
   // for (int i = 0; i < v.size(); i++)
   // {
   //     cout<<v[i]<<" ";
   // }
  
   // 2.using vector function
   // vector<int> :: iterator i;
   // for(auto i=v.begin(); i!=v.end();i++){
   //     cout<<*(i)<<" ";
   // }
   // 3.using iterator
   // 4.for each loop
   // for(int x : v){
   //     cout<<x<<" ";
   // }
   // vector<string>v1{"abhi","amol","aniket"};
   // for(string str : v1){
   //     cout<<str<<" ";
   // }
// -------------------------------------------------------------------------------------
   //some important function for CP
   //1.accumulate =>to find the sum of all elements
   // vector<int>vec{10,20,30,-40}; //100
   // cout<<accumulate(vec.begin(),vec.end(),0);


   // 2. *min_element
   // auto it = *min_element(vec.begin(),vec.end());
   // cout<<it<<endl;
   // // 3.*max_element
   // auto it1 = max_element(vec.begin(),vec.end());
   // cout<<*(it1)<<endl;


   // 5.merge()
   // vector<int>v1{10,20,30};
   // vector<int>v2{100,200,300};
   // vector<int>v(6);
   // merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
   // for(int ele : v){
   //     cout<<ele<<" ";
   // }


  
   return 0;
}