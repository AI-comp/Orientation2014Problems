#include <vector>
#include <iostream>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

int main(){
  int n;
  while(cin>>n,n!=-1){
    vvi f(5,vi(5));
    REP(i,n){
      int x,y;
      cin>>x>>y,x--,y--;
      f[y][x]=1;
    }
    vvi dp(5,vi(5));
    dp[0][0]=1;
    REP(i,5){
      REP(j,5){
        if(!f[i][j]){
          if(i>0)dp[i][j]+=dp[i-1][j];
          if(j>0)dp[i][j]+=dp[i][j-1];
        }
      }
    }
    cout<<dp[4][4]<<endl;
  }
}
