#include<bits\stdc++.h>
using namespace std;
int main(){
  // operations on queue
  // q.push()
  //q.pop()
 //q.back()
 //q.front()
 //q.size()
 //q.empty()

   // Impleent Queue
  //  queue<int>q;
  //  q.push(1);
  //  q.push(2);
  //  q.push(3);
  //  q.push(4);
  //  q.push(5);
  //  while(!q.empty()){
  //    cout<<q.front()<<" ";
  //    q.pop();
  //  }



   // Deque is upgrade version of queue in which insertion and deletionb takes place at both the end
  
  // operations on deque
  //q.push_back();
  //q.push_front()
  //q.pop_back()
  //q.pop_front()
  //q.front
  //q.pop

  deque<int>dq;
  dq.push_back(1);
  dq.push_back(2);
  dq.push_front(3);
  dq.push_front(4);
  while(!dq.empty()){
    cout<<dq.front()<<" ";
    dq.pop_front();
  }

return 0;
}