#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define deb(x) cout << #x << "=" << x << "\n"
#define deb2(x,y) cout << #x << "=" << x << " " << #y << "=" << y <<"\n"

#define debarr(x, n) cout<< #x <<": "; fo(i,n) cout<< x[i]<<" "; cout<<"\n"; 
#define debmap(mp) cout<< #mp <<": \n"; for (auto i : mp) cout <<"\t"<< i.first << ": " << i.second<< endl;

#define debv(x) cout<< #x <<": "; fo(i,x.size()) cout<< x[i]<<" "; cout<<"\n"; 

#define vc vector<char>
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>

#define vpii vector<pii>

#define pii pair<int, int> 

#define mpii map<int, int> 
#define mpll map<ll, ll> 
#define mpsi map<string, int> 
#define mpss map<string, string> 

#define si set<int>
#define msi multiset<int>

#define sc set<char>
#define siit si::iterator
// #define coutd(i,p) cout<<fixed<<setprecision(p)<<i<<"\n";
int mod=998244353;
ll gcd(ll a, ll b)    { if (a == 0)  return b; return gcd(b % a, a);}
vs str_tokenize(string s, string del = " "){ vs v; int start, end = -1*del.size(); do { start = end + del.size(); end = s.find(del, start); v.push_back(s.substr(start, end - start));} while (end != -1); return(v); }
int getInvCount(int arr[],int n) { si s; s.insert(arr[0]); int invcount = 0; siit its; for (int i=1; i<n; i++) { s.insert(arr[i]); its = s.upper_bound(arr[i]); invcount += distance(its, s.end()); } return invcount; } 

void pre() {

}
void solve() {
    int l,b;
    cin>>l>>b;
    if(l*b==2*(l+b)) cout << "Eq\n"<<2*(l+b)<<"\n";
    else if(l*b<2*(l+b)) cout << "Peri\n"<<2*(l+b)<<"\n";
    else if(l*b>2*(l+b)) cout << "Area\n"<<l*b<<"\n";
    
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    pre();

    int t;
    // cin >> t;
    t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}