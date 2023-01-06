#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
#define ps push
#define pp pop

vector<ll>v;
set<ll>s;
set<ll>:: iterator it;
set<ll>:: iterator it1;
ll bsearch(ll n,ll key)
{
    ll l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(v[mid]==key)
            return mid;
        else if(v[mid]>key)
        {
            r=mid-1;
        }
        else
            l=mid+1;
    }
    return -1;
}
ll ex(ll a,ll b)
{
    if(b==0)
        return 1;
    else if(b%2==0)
        return (ex((a*a),b/2));
    else
        return (a*ex((a*a),(b-1)/2));
}
double Sqrt(ll key)
{
    double l=0,r=1000000,mid,i=0;
    while(r>=l)
    {
        i++;
        if(i==100)
            return mid;
        mid=(l+r)/2;
        if(mid*mid==key)
            return mid;
        else if(mid*mid>key)
            r=mid;
        else
            l=mid;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     cout<<Sqrt(200);


return 0;
}
