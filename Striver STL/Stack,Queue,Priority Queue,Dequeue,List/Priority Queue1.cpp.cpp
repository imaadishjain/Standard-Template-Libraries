#include<bits/stdc++.h>
using namespace std;

int main()
{
  priority_queue<int>pq; // Stores all element in sorted manner(Descending manner)

  //cout<<pq.top()<<endl; // Wrong ha ya kyuki pq khali ha

  pq.push(5);
  pq.push(9);
  pq.push(8);
  pq.push(0);
  pq.push(7);
  pq.push(4);
  pq.push(1);

  int n;
  n=pq.size();
  cout<<"The size priority queue="<<n<<endl;

  cout<<pq.top()<<endl; //Print 9
  cout<<pq.top()<<endl; //Print 9

  pq.pop();// Delete 9;

  cout<<pq.top()<<endl; //Print 8
  pq.pop(); // Delete 8

  cout<<pq.top()<<endl; //Print 7
  cout<<pq.top()<<endl; //Print 7

  pq.pop(); //Delete 7

  while(!pq.empty())
  {
    pq.pop();
  }

  //cout<<pq.top()<<endl; // pq khali ho chuka ha
  return 0;
}
