#include <iostream>
#include <list>

using namespace std;


int main()
{
    // Creation
  list<int>ll;
  //insertion
  ll.push_back(10);
  ll.push_back(20);
  ll.push_back(30);
  ll.push_back(40);

  ll.push_front(80);
  ll.push_front(70);
  ll.push_front(60);
  ll.push_front(50);
  //    ll.remove(70);

    //   Iterator
    
    
    //   Printing LL using Iterator
//    cout<<*(ll.begin())<<endl;
      
    list<int>::iterator it=ll.begin();
  while(it != ll.end()){
     cout<<*it<<" ";
     ++it;
  }

//   cout<<endl<<ll.back();

    return 0;
} 