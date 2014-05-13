#include <iostream>
#include <cmath>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

int main(){
  int n;
  while(cin>>n,n){
    int farthest=0;
    REP(i,n){
      int x,y;
      cin>>x>>y;
      farthest=max(farthest,x*x+y*y);
    }
    int ans;
    if(farthest<=5*5){
      ans=5;
    }else if(farthest<=50*50){
      ans=4;
    }else if(farthest<=100*100){
      ans=3;
    }else if(farthest<=200*200){
      ans=2;
    }else if(farthest<=300*300){
      ans=1;
    }else{
      ans=0;
    }
    cout<<ans<<endl;
  }
}
