void solve() {
    int n, s;
    cin>>n>>s;
    
    int a[n];
    fo(i,n) cin>>a[i];

    int id = -1;
    fo(i,n) if(a[i]==s) { id = i; break; }

    cout<<id<<'\n';
}