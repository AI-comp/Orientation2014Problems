#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
typedef vector<int> vi;
#define ALL(a) (a).begin(),(a).end()
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

int main(){
  int n;
  while(cin>>n,n){
    vi t(n);
    REP(i,n){
      cin>>t[i];
    }
    sort(ALL(t));
    int ans=0;
    REP(i,n-1){
      ans+=abs(t[i]-t[i+1]);
    }
    cout<<ans<<endl;
  }
}
