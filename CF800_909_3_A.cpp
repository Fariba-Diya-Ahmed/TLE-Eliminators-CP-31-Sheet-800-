// A. Game with Integers

#include <iostream>
typedef long long ll;

using namespace std;

void solve(ll t)
{

    ll n;
    while(t--)
    {
        cin>> n;

        if((n+1)%3==0 || (n-1)%3==0)
        {
            cout<<"First"<<endl;
        }
        else
        cout<<"Second"<<endl;

    }

}
int main()
{
    ll t;
    cin>>t;

    solve(t);

    return 0;


}
