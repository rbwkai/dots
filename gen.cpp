//#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("avx2,popcnt,lzcnt,abm,bmi,bmi2,fma,tune=native")
 
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
using ll = long long;
using vi = vector<ll>;
using pi = pair<ll, ll>;
using grid = vector<vi>;
 
template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, 
                         tree_order_statistics_node_update>; 
#define en "\n"
#define ln " \n"[i==n-1]
#define sz(_O) _O.size()
#define fix(_O) cout<<setprecision(_O)<<fixed
#define fir(_O) for(int i=0, ii=_O-1; i<_O; ++i, --ii)
#define fjr(_O) for(int j=0, jj=_O-1; j<_O; ++j, --jj)
 
ll const inf = 1e18; //0x3f3f3f3f3f3f;
ll const mod = 1e9+7; //998244353;

int random(int l, int r) {
    static mt19937 generator(
        (unsigned)chrono::high_resolution_clock::now()
          .time_since_epoch().count()
    );
    uniform_int_distribution<int> dist(l, r);
    return dist(generator);
}

void gen(){
  ll n = 8, m = 6, q = 1; 
  cout<<n<<" "<<m<<" "<<q<<en;
  fir(n) cout<<random(1, 20)<<ln;
  fir(m) cout<<random(1, 20)<<" "; cout<<en;

  ll x = random(1, n);
  ll y = random(1, m);
  ll p = random(1, x+y);
  cout<<x<<" "<<y<<" "<<p<<en;
}

int main(){
    ll tc = 1;
    cout << tc << en;  // uncomment if you want multiple testcases
    fir(tc){
        gen();
    }
    return 0;
}

