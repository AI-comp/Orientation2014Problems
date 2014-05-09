#include <vector>
#include <algorithm>
#include <iostream>
#include <climits>
using namespace std;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

int dist(int x1, int y1, int x2, int y2) {
    int x = x1 - x2;
    int y = y1 - y2;
    return abs(x) + abs(y);
}

int dfs(int cur_x,int cur_y,vi &used,vi &x,vi &y){
  int n=x.size();
  bool done=true;
  REP(i,n){
    if(!used[i]){
      done=false;
    }
  }
  if(done){
    return dist(cur_x,cur_y,0,0);
  }
  int ret=INT_MAX;
  REP(i,n){
    if(!used[i]){
      vi new_used(used);
      new_used[i]=1;
      ret=min(ret,dfs(x[i],y[i],new_used,x,y)+dist(cur_x,cur_y,x[i],y[i]));
    }
  }
  return ret;
}

int main(){
  int n;
  while(cin>>n,n!=-1){
    vi x(n),y(n);
    REP(i,n){
      cin>>x[i]>>y[i];
    }
    vi used(n);
    cout<<dfs(0,0,used,x,y)<<endl;
  }
}
