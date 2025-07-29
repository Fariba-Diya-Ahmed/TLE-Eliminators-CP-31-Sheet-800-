// A. Cover in Water

#include <iostream>
#include <string>
#include <algorithm>
typedef long long ll;

using namespace std;

void solve(ll t)
{
    while(t--)
    {
        ll n;
        cin>>n;

        string s;
        cin>> s;

        ll length=s.size(), count = 0;
        bool three = false ;

        for(ll i=0; i<length; i++)
        {
            if(s[i] == '.' && (i+1)<length && s[i+1]=='.' && (i+2)<length && s[i+2]=='.')
            {
                three = true;
                break;
            }
            if(s[i]=='.')
            {
                ++count;
            }
        }

        if(three)
            cout<<2<<endl;
        else cout<<count<<endl;
    }


}

int main()
{
    ll t;
    cin>>t;

    solve(t);

    return 0;
}

