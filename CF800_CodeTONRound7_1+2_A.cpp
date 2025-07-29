// A. Jagged Swaps

#include <iostream>
#include <vector>
typedef long long ll;
#define loop for(ll i=1;i<=n;i++)

using namespace std;

void solve()
{
    ll t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        vector<ll>v(n+1);
        loop cin>>v[i];

        if(v[1]==1)
            cout<<"Yes"<<endl;
        else
        cout<<"NO"<<endl;
    }
}

int main()
{
    solve();

    return 0;
}
