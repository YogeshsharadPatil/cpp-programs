#include <bits\stdc++.h>
#include <iostream>
#include <set>
using namespace std;

int main()
{
  //   // =>set : it is associative container which contains a sorted set of unique object of type key.
  //   // =>typically implemented as binary search trees
  //   // =>insertion,removal and searching have logarithmic time complexity

  //    // ------------------------------------------
  //    // initialization of set
  //    set<char>c;
  //   set<int>s{10,20,30,40,40};
  //    for(auto it = s.begin();it!=s.end();it++){
  //         cout<<*it<<" ";
  //    }
  //    // set stores unique values in acending order

  //    // we can initialize set by using another set or by using vector
  //    vector<int>v{1,2,3,4};
  //   set<int>s{v.begin(),v.end()};
  //   for(auto it = s.begin();it!=s.end();it++){
  //       cout<<*it<<" ";
  //   }

  //    set<int>s{1,2,3,4};
  //    s.insert(10);
  //    s.insert(20);
  //    s.insert(20);
  //    for(auto it = s.begin();it!=s.end();it++){
  //        cout<<*it<<" ";
  //    }

  //   //-------------------------------------------
  //   // set iterator functions
  //   // 1.begin()
  //   // 2.end()
  //   // 3.rbegin()
  //   // 4.rend()
  //    set<char>c1{'z','x','y','a'};
  //   // //print in ascending order
  //    for(auto it=c1.begin();it!=c1.end();it++){
  //     cout<<*it<<" ";
  //    }cout<<endl;
  //   // //print in decending  order
  //    for(auto it=c1.rbegin();it!=c1.rend();it++){
  //      cout<<*it<<" ";
  //    }

  //    // set important capacity related functions
  //     set<int>s{1,2,3};
  //    for(auto it=s.begin();it!=s.end();it++){
  //       cout<<*it<<" ";
  //     }cout<<endl;
  //     cout<<"size "<<s.size()<<endl;
  //     cout<<"empty or not<<"<<s.empty();//boolean

  //    // ---------------------------------------
  //    // set modifying functions
  //   // 1.insert() / emplace()=>used to insert new element into set
  //  set<int>s{10,20,30,40};
  //  s.insert(60);
  //  s.emplace(70);
  //  cout<<"Before erase"<<endl;
  //  for(auto &it :s)
  //  {
  //    cout<<it<<" ";
  // }cout<<endl;

  // // //2.erase() =>used to remove element
  //  s.erase(60);
  // s.erase(70);
  // cout<<"After erase"<<endl;
  // for(auto &it :s)
  //  {
  //    cout<<it<<" ";
  //  }cout<<endl;
  // //   // // 3.clear => removes all elements from set

  //    s.clear();
  //   cout<<"after clearing"<<endl;
  //   for(auto &it :s)
  // {
  //   cout<<it<<" ";
  // }
  //    //-----------------------------------------
  //    //set traversal methods
  //     set<int>s{10,20,30};
  //     set<int> :: iterator it;//no need of declaring this after using auto keyword
  //    for(auto it = s.begin();it!=s.end();it++){
  //        cout<<*(it)<<" ";
  //    }
  //    for(auto &x : s){
  //        cout<<x<<" ";
  //    }

  // //---------------------------------------
  // // set important functions
  // // 1.find() => if element is present in container then returns the iterator and
  // // if not then returns the iterator pointing to the end

  //  set<int>s{10,20,30};
  //  auto it = s.find(50);
  //  if( it == s.end()){
  //    cout<<"Element is not present"<<endl;
  //  }
  //  else {
  //   cout<<*it<<endl;
  //  }cout<<endl;
  // // // 2.count()=>returns 1 if element is present in set and 0 if element is not present in s
  //  cout<<s.count(50)<<endl;
  //  cout<<s.count(20)<<endl;

  //  // 3.lower bound => returns iterator pointing to the the exact element if it is present or if not then returns iterator to the greater element or set.end ()
  // set<int>s{10,20,30};
  //  auto it = lower_bound(s.begin(),s.end(),15);
  //  if(it == s.end())
  //  cout<<"Not found";
  //  else
  //  cout<<*it<<endl;

  // // 4.upper bound => it returns iterator to the grater element than we provided or to the set.end()
  // auto it = upper_bound(s.begin(),s.end(),10);
  // if(it==s.end())
  // cout<<"Not found";
  // else
  // cout<<*it;

  // return 0;
  // }