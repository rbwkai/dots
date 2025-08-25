//#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;
using ll = long long;
using vi = vector<ll>;

#define fir(_O) for(int i=0, ii=(_O)-1; i<(_O); ++i, --ii)

vi primes;
void pre(){
  vi pr(1e7, 1); pr[0]=pr[1]=0;
  for(int i=2; i<1e7; i++){
    if(pr[i]){
      primes.push_back(i);
      for(int j=2*i; j<1e7; j+=i) pr[j]=0;
    }
  }
}

void solve(int tc) {
  setTestCase(tc);
  int n = inf.readInt();
  ll m  = inf.readLong();

  ll M = 1; fir(n) if(i) M *= primes[i];

  vi a(n);

  a[0] = ouf.readLong(-1, m, "a[1]");

  if(a[0] == -1){
    if(M<=m) quitf(_wa, "soln exists bt code dumb.");
    else return;
  }
  if(a[0] == 0){
    quitf(_wa, "soln outputs 0 why");
  }

  fir(n) if(i){
    a[i] = ouf.readLong(1, m, "a[" + to_string(i + 1) + "]");
  }
  
  vi pre_gcd(n+1), suf_gcd(n+1); pre_gcd[1]=suf_gcd[n]=0;
  for(int p=1, s=n-1; p<=n; p++, s--){
    pre_gcd[p] = __gcd(pre_gcd[p-1], a[p-1]);
    suf_gcd[s] = __gcd(suf_gcd[s+1], a[s]);
  }
  ll array_gcd = pre_gcd[n];

  fir(n){
    ll pg = pre_gcd[i];
    ll sg = suf_gcd[i+1];
    ll g = __gcd(pg, sg);

    if(g==array_gcd) quitf(_wa, "condition breaks at index %d.", i+1);
  }
}



int main(int argc, char* argv[]) {
  registerTestlibCmd(argc, argv);
  pre();

  int tt = inf.readInt();
  for(int tc=1; tc<=tt; tc++){
    solve(tc);
  }
  quitf(_ok, "GG");
  return 0;
}

