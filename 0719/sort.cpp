#include <bits/stdc++.h>
using namespace std;
const int N = 2e6;
int a[N], b[N];
queue<int>x;
int cnt = 1, ans;
int main() {
  freopen("sort.in", "r", stdin);
  freopen("sort.out", "w", stdout);
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    b[i] = a[i];
    x.push(a[i]);
  }
  sort(b + 1, b + 1 + n, [](int a1, int b1){return a1 > b1;});
  while (!x.empty()) {
    if(x.front() != b[cnt]) {
      ans++;
      x.push(x.front());
      x.pop();
    } else {
      cnt++;
      x.pop();
    }
  }
  cout << ans;

  return 0;
}