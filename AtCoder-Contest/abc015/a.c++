# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int main(){
    string a,b;
    cin >> a >> b;
    int al = a.size();
    int bl = b.size();
    if(al < bl) cout << b << endl;
    else cout << a << endl;

}