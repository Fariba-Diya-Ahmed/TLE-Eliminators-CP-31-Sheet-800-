// A. Buttons

#include <iostream>
typedef long long ll ;

using namespace std;


void solve()
{
    ll t,a,b,c;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c;

        if(c%2==1)
        {
        if(b>a)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;

        }
        else
        {
            if(b>=a)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
        }
    }
}
int main()
{
    solve();
    return 0;
}
