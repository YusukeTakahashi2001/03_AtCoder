# include <bits/stdc++.h>

# define rep(i,n) for(int i=0;i<(n);++i)
# define rep1(i,n) for(int i=1;i<=(n);++i)
# define ALL(x) (x).begin(),(x).end()
# define pb push_back

using namespace std;
using ll = long long;

int r,g,b;

int main(){
    cin >> r >> g >> b;
    int sum = 100*r+10*g+b;
    if(sum%4 == 0) printf("YES\n");
    else printf("NO\n");    
}