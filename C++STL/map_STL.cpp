#include <bits/stdc++.h>
#include<map> //if u don't use above header file then u need to include this header file in order to use map in your program.
using namespace std;
int main(){
   // map = > it is associative container that stores element in (key,value) combination.
   // => it stores key value pair in sortd order on the basis of key.
   // map<int,string>mp; //key value
   // mp.insert(make_pair(10,"abhi"));
   // mp.insert({2,"amol"});
   // for(auto x : mp){
   //     cout<<x.first<<" "<<x.second<<endl;
   // }


   // //we can intialize the map like arrays
   // map<int,int>m{{3,10},{1,20},{2,30}}; //int arr[] = {10,20,30};
   // for(auto x : m){
   //     cout<<x.first<<" "<<x.second<<endl;
   // }
   // cout<<"------"<<endl;
   // // // we can initialize map with another map


   // map<int,int>m2(m.begin(),m.end());
   // for(auto x : m2){
   //     cout<<x.first<<" "<<x.second<<endl;
   // }


   // ----------------------------------------------------------------------------
   // map STL important iterator functions
   // 1.begin() => returns an iterator to the first combination of map
   // 2.end() => returns an iterator pointing to the theoratial combination after the last combination of map.
   // 3.rbegin()
   // 4.rend()


   //------------------------------------------------------------------------
   // capacity related functions in map
   // map<int,int>mp{{1,10},{2,20},{3,30}};


   // cout<<mp.size()<<endl;
   // cout<<mp.empty()<<endl;
   // cout<<mp[10]<<endl; //=>returns 0 if key is not present in the map


   // -----------------------------------------------------------------------
   // map modifying functions
   // 1.insert()=> used to insert a new (key,value) pair into map


   // map<char,int>c{{'a',10},{'b',30},{'c',50}};
   // // for(auto x : c){
   // //     cout<<x.first<<" "<<x.second<<endl;
   // // }
   // c.insert({'d',60});
   // c.emplace(make_pair('e',70));
   // cout<<"after insertion"<<endl;
   // for(auto x : c){
   //     cout<<x.first<<" "<<x.second<<endl;
   // }


   // // 2.erase() => used to remove combination from map
   // c.erase('a');
   // c.erase('e');
   // for(auto x : c){
   //     cout<<x.first<<" "<<x.second<<endl;
   // }
   // c.clear();
   // for(auto x : c){
   //     cout<<x.first<<" "<<x.second<<endl;
   // }


   //------------------------------------------------------------------
   // 1.find() => returns the iterator pointing to the element if key is present in container otherwise returns iterator pointing to the .end()
   // map<int,int> :: iterator it;
   // auto it = mp.find(10);
   // if(it==mp.end()){
   //     cout<<"element not found!!!"<<endl;
   // }else{
   //     cout<<it->first<<" "<<it->second<<endl;
   // }


   // // 2.count => since map contains unique elements so it returns 1 if key is present and 0 if key is not present.


   // cout<<mp.count(1)<<endl;
   // cout<<mp.count(10)<<endl;


   // 3.lower_bound() => it returns an iterator pointing to the (key,value) pair having key greater than or equal to the key we passed else points to the .end()


   // auto it = mp.lower_bound(10);
   // if(it==mp.end()){
   //     cout<<"element not found!!!"<<endl;
   // }else{
   //     cout<<it->first<<" "<<it->second<<" ";
   // }


   // map<int,int>mp{{1,10},{7,20},{3,30}};


   // // // 4.upper_bound => it returns iterator pointing to the combination where key value is greater than the key we provided else points to the .end()
   // auto it = mp.upper_bound(7);
   // if(it==mp.end()){
   //     cout<<"element not found!!!"<<endl;
   // }else{
   //     cout<<it->first<<" "<<it->second<<" ";
   // }


   //----------------------------------------------------------------------
   // map traversal methods :
   // map<int,int>mp{{1,10},{2,20},{3,30}};


   // for(auto it = mp.begin();it!=mp.end();it++){
   //     cout<<it->first<<" "<<it->second<<endl;
   // }
   // cout<<"-------"<<endl;


   // for(auto &x : mp){
   //     cout<<x.first<<" "<<x.second<<endl;
   // }
   // cout<<"-------"<<endl;
   return 0;
}