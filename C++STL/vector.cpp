#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //vector is dynamically sized array with contigous memory location
    //intitialisation of vector
    //vector<int>v;// default initialisation value of vector is zero
    // vector<int>v(10);//we can specify size to the vector also explicitly
    //  vector<int>v(10,1);//we can initialise all the values int he vector like this
    //vector<int>v = {10,20,30,4,5};
    // //printing the values in the vector
    //  for(int i:v){
    //    cout<<i<<" ";
    //  }cout<<endl;
    //  vector<string>v1{"Y","S","P"};
    //  for(string i:v1){
    //    cout<<i<<" ";
    //  }cout<<endl;

    // //we can initialise vector from another vector
    //  vector<int>copy{10,20,30,40};
    //  vector<int>res(copy.begin(),copy.end());
    //  for(int i =0; i<copy.size(); i++)
    //  {
    //    cout<<copy[i]<<" ";
    //  }
    // vector<int>v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // vector<int>copy(v);
    // for(int i:copy){
    //   cout<<copy[i]<<" ";
    // }

  //   //----------------------------------------------------------------------------
  //   // important basic functions of vector
    //  vector<int>v{10,20,30,40};
  // //   //1.size
  //    cout<<"size "<<v.size()<<endl;
  // //   //2. capacityi // for how many elements space is alloacated if three elements in array then its capacity could be 4
    // cout<<"capacity "<<v.capacity()<<endl;
  // //   //3.front
  //    cout<<"front "<<v.front()<<endl;
  // //   //4.back
  //    cout<<"back "<<v.back()<<endl;
  // //   //5.push_back
  //   v.push_back(50);
  //   v.push_back(60);

  //    for(int i:v)
  //    {
  //      cout<<i<<" ";
  //    }cout<<endl;

  // // // 6. empty
  //  cout<<"Empty "<<v.empty()<<endl;
  // // //7. v[i] at v.at(index)
  //  cout<<v[2]<<endl;
  //  cout<<v.at(2)<<endl;
  //  cout<<"vector elements "<<endl;
  //   for(int i:v)
  //    {
  //      cout<<i<<" ";
  //    }cout<<endl;

  //  v.pop_back();
  //v.clear();  // if we clear the the vector its size goes to zero where as capacity remains same
  //   for(int i:v)
  //    {
  //      cout<<i<<" ";
  //    }cout<<endl;

  // //---------------------------------------------------------------------------------------------------

  // //traversal method for vector
  // //1. using normal for loop
  //  vector<int>v{10,20,30,40,50};
  // cout<<"using normal for loop"<<endl;
  // for(int i = 0; i<v.size();i++){
  //   cout<<v[i]<<" ";
  //  }cout<<endl;

  // //2. using function
  //  cout<<"using function"<<endl;
  //  for(auto i = v.begin(); i !=v.end();i++){
  //       cout<<*(i)<<" ";//works like pointer//dereference operator
  // }

  // //3. using iterator
  //  vector<int>vin{10,20,30,40,50};
  //  for(int i:vin){
  //    cout<<i<<" ";
  //  }
  // for(int &i:vin){
  //   cout<<i<<" ";
  //    }

  // //-----------------------------------------------------------------------

  // // Declaring a vector
  //    vector<int> v = { 1, 2, 3 };

  //    // Declaring an iterator
  //    vector<int>::iterator i;
  //    int j;
  //    cout << "Without iterators = ";

  //   // // Accessing the elements without using iterators
  //      for (j = 0; j < 3; ++j)
  //      {
  //          cout << v[j] << " ";
  //      }

  //   //   //cout << "\nWith iterators = ";
  //   //   // Accessing the elements using iterators
  //      for (i = v.begin(); i != v.end(); ++i)
  //      {
  //          cout << *i << " ";
  //      }
  // //------------------------------------------------------------------------------

  // //Some imp fn for cp
  // //1. accumulate-> to find some of all elements in the cp

  //  vector<int> v = { 10, 20, 30 };
  //  cout<<accumulate(v.begin(),v.end(),0);//0--> initialiser like sum=0;

  // //2.*min_element
  // auto it = *min_element(v.begin(),v.end());
  // //instead of usig iterator u can use auto keyword
  // cout<<it<<endl;
  // //similar to
  //  auto it = min_element(v.begin(),v.end());
  //  cout<<*it<<endl;

  // //3.max_element
  //  auto it = max_element(v.begin(),v.end());
  //  cout<<*it<<endl;

  // //4.merge()
  // vector<string>v1{"Yogesh","Sharad","Patil"};
  // vector<string>v2{"Dongargaon"};
  // vector<string>v;
  // merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
  // for(string str:v){
  //   cout<<str<<" ";
  // }

  // }