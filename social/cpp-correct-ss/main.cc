#include <vector>
#include <iostream>
using namespace std;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

int main(){
  int n,m;
  while(cin>>n>>m,n|m){
    vi followed(n);
    REP(i,m){
      int a,b;
      cin>>a>>b,a--,b--;
      followed[b]++;
    }
    int ans=0;
    REP(i,n){
      if(followed[i]>followed[ans]){
        ans=i;
      }
    }
    cout<<ans+1<<endl;
  }
}
