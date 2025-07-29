// A. Halloumi Boxes

#include <iostream>
#include <vector>
#define loop for(int i=0;i<n;i++)
#define ll long long

using namespace std;

bool isSorted(const vector<ll> &v,int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(v[i]>v[i+1])
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<ll>v(n);
        loop cin>>v[i];

        if(isSorted(v,n) && k<=n)
            cout<<"YES"<<endl;

        else
        {
            if(!isSorted(v,n) && k<=1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;


        }
    }
    return 0;
}
