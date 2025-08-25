
inf = 10**18; #0x3f3f3f3f3f3f;
mod = 998244353; #1**9+7;

def solve():
    x, y = map(int, input().split())
    if(x**4 + 4 * y*y == 4 *x*x*y):
      print("Yes")
    else:
      print("No")

tt = int(input())
for _ in range(tt):
    solve()


