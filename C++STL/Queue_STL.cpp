#include <bits/stdc++.h>
#include<queue>//if u don't use above header file then u need to include this header file in order to use queue.
using namespace std;
int main(){
   // queue => it is type of container which follows FIFO(first in first out)
   // => STL queue has already implemented functions which helps us
   // => elements are inserted from back and removed from front
   // => simple example is line of peoples in front of ticket counter in railway station


   // -------------------------------------------------------------------------------------------
   //important functions:::
   // 1.push() / emplace() = > used to insert a new element at end of queue
   // queue<int>q; //queue<char>q1;
   // q.push(10); //rear end
   // q.emplace(20);
   // q.emplace(30);
   // q.emplace(40);
   // while (!q.empty())
   // {
   //     cout<<q.front()<<" ";
   //     q.pop();
   // }
   // cout<<endl;


   // 2.pop() => removes the front element of the queue


   // q.pop();
   // q.pop();
   // while (!q.empty())
   // {
   //     cout<<q.front()<<" ";
   //     q.pop();
   // }


   // 3.size() =>  returns the number of elements present in the queue
   // cout<<q.size()<<endl;


   // 4.empty() => returns whether queue is empty or not
   // cout<<q.empty()<<"\n"; //boolearn


   // queue<char>q1;
   // q1.push('a');
   // q1.push('b');
   // q1.push('c');


   // 5.front() => returns the front element of queue
   // cout<<q1.front()<<endl;


   //  ------------------------------------------------------------------------------------------------
   // queue traversal methods
   // queue<char>q;
   // q.push('a');
   // q.push('b');
   // q.push('c');
   // q.push('d');
   // q.push('e');
   // q.push('f');
   // while (!q.empty())
   // {
   //     cout<<q.front()<<" ";
   //     q.pop();
   // }
  
   return 0;
}