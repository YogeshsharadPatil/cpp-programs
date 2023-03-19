#include <bits/stdc++.h>
#include <set> //if u don't use above header file then we need to include this header file
using namespace std;
int main()
{
   // =>set : it is associative container which contains a sorted set of unique object of type key.
   // =>typically implemented as binary search trees
   // =>insertion,removal and searching have logarithmic time complexity


   // ------------------------------------------
   // initialization of set
   // set<int> s;  //set<char>s;
   // s.insert(10);
   // s.insert(20);
   // s.insert(30);
   // s.insert(30);
   // for(auto it = s.begin();it!=s.end();it++){
   //     cout<<*(it)<<" ";
   // }
   // 2.intializing like arrays
   // int arr[] = {10,20,30,40};
   // set<int> s1{10, 20, 30, 40};
   // for (auto it = s1.begin(); it != s1.end(); it++)
   // {
   //     cout << *(it) << " ";
   // }


   // we can initialize set by using another set or by using vector
   // vector<int>v{10,20,30,80,80};
   // set<int>s(v.begin(),v.end());
   // for (auto it = s.begin(); it != s.end(); it++)
   // {
   //     cout << *(it) << " ";
   // }
   //-------------------------------------------
   // set iterator functions
   // set<char>c1{'z','a','y','d'}; //a d y z
   // 1.begin()
   // 2.end()
   // 3.rbegin()
   // 4.rend()
   // for(auto it = c1.begin();it!=c1.end();it++){


   //     cout<<(*it)<<" ";
   // }


   // for(auto it = c1.rbegin();it!=c1.rend();it++){
   //     cout<<(*it)<<" ";
   // }


   // ------------------------------------------


   // set important capacity related functions
   // set<char>s;
   //  for(auto it = s.begin();it!=s.end();it++){
   //     cout<<*(it)<<" ";
   // }


   // cout<<s.size()<<endl;
   // cout<<s.empty()<<endl; //boolean


   // ---------------------------------------
   // set modifying functions
   // 1.insert() / emplace()=>used to insert new element into set
   // set<int>s{10,20,30};
   // s.insert(40);
   // s.emplace(50);
   // cout<<"before clearing "<<endl;
   // for(auto &x : s){
   //     cout<<x<<" ";
   // }
   // cout<<endl;


   // // 2.erase() =>used to remove element
   // s.erase(50);
   // s.erase(10);
   // cout<<"after deletion "<<endl;
   // for(auto &x : s){
   //     cout<<x<<" ";
   // }


   // // 3.clear => removes all elements from set
   // s.clear();
   // cout<<"after clearing"<<endl;
   // for(auto &x : s){
   //     cout<<x<<" ";
   // }


   //-----------------------------------------
   // set traversal methods
   // set<int>s{10,20,30};
   // set<int> :: iterator it;
   // for(auto it = s.begin();it!=s.end();it++){
   //     cout<<*(it)<<" ";
   // }
   // for(auto &x : s){
   //     cout<<x<<" ";
   // }


   //---------------------------------------
   // set important functions
   // 1.find() => if element is present in container then returns the iterator and if not then returns the iterator pointing to the end


   // auto it = s.find(80);
   // if (it == s.end())
   //     cout << "element not present!";
   // else
   //     cout << *(it) << endl;


   // 2.count()=>returns 1 if element is present in set and 0 if element is not present in set
   // cout<<s.count(10)<<endl;
   // cout<<s.count(70)<<endl;


   // 3.lower bound => returns iterator pointing to the the exact element if it is present or if not then returns iterator to the greater element or set.end ()
   // set<int> s{10, 20, 30};


   // auto it = lower_bound(s.begin(),s.end(),65);
   // if(it==s.end())cout<<"NOT FOUND";
   // else cout<<*(it)<<endl;


   // 4.upper bound => it returns iterator to the grater element than we provided or to the set.end()


   // auto it = upper_bound(s.begin(),s.end(),30);
   // if(it==s.end())cout<<"NOT FOUND";
   // else cout<<*(it)<<endl;


   return 0;
}