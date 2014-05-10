#include <vector>
#include <iostream>
using namespace std;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

bool isPrime(int n){
  FOR(i,2,n){
    if(n%i==0){
      return false;
    }
  }
  return true;
}

int main(){
  int n;
  while(cin>>n,n){
    bool ans=false;
    FOR(i,2,n){
      FOR(j,2,n){
        if(i*j==n&&isPrime(i)&&isPrime(j)){
          ans=true;
        }
      }
    }
    cout<<(ans?"YES":"NO")<<endl;
  }
}
