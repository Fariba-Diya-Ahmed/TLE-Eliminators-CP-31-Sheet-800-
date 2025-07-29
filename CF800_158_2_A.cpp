// A. Line Trip

#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std ;

void solve(ll t)
{
    ll n,x;
    while(t--)
    {
        cin>>n>>x;
        vector<ll>v(n);
        vector<ll>stored;
        for(int i=0; i<n; i++) cin>>v[i];

        stored.push_back(v[0]);

        ll i=1 ;
        while(i<n)
        {
            stored.push_back(v[i]-v[i-1]);

            ++i;
        }

        stored.push_back(2*(x - v[n-1]));

        cout<< *max_element(stored.begin(),stored.end())<<endl;
    }
}
int main()
{
    ll t;
    cin>>t;


    solve(t);

    return 0;

}
























