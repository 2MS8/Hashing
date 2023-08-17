
#include <bits/stdc++.h>
// #include<unordered_map>
using namespace std;

int main()
{
 
 // unordered_set<int>s;

 // s.insert(10);
 // s.insert(5);
 // s.insert(1);
 // s.insert(150);

 // for(auto x=s.begin();x!=s.end();x++){
 //   cout<<(*x)<<endl;
 // }

 //

 // int key=5;
 // if(s.find(key)!=s.end()){
 //  cout<<"Key found"<<endl;
 // }
 // else{
 //  cout<<"not found"<<endl;
 // }

 // int key=5;
 // if(s.find(key)!=s.end()){
 //  // auto temp=s.find(key);
 //  // s.erase(temp);
 //  // s.erase(key);
 // }
//  if(s.count(key)){
//   cout<<"found";
//  }
// cout<<s.size()<<endl;
// 







// unordered_map<string,int>m;

// m["manav"]=28;
// m["singh"]=12;
// m["panwar"]=2000;

// for(auto x: m){
//   cout<<x.first<<" "<<x.second<<endl;
// }

// for(auto itr=m.begin();itr!=m.end();itr++){
//   cout<<itr->first<<" "<<itr->second<<endl;
// }

// string key="manav";

// if(m.find(key)!=m.end()){
//   auto temp=m.find(key);
//   cout<<"value is : "<<temp->second;
// }

// m.insert(make_pair("mobile",18000));
// for(auto x: m){
//   cout<<x.first<<" "<<x.second<<endl;
// }


// int n=12;
//   int arr[n]={1,2,3,4,1,2,3,4,5,6,7,0};

//   unordered_map<int,int>m;


// for(int i=0;i<n;i++)
// {
//   m[arr[i]]++;
// }

// for(auto x:m){
//   cout<<x.first<<" "<<x.second<<endl;
// }
  int n=6;
  int arr[]={1,2,3,4,5,7};

  map<int,int>m;

  for(int i=0;i<n;i++)
  {
    m[arr[i]]++;
  }

 for(int i =1;i<=n;i++)
 {
     if(m.find(i)==m.end()){
      cout<<i;
     }
 }



}