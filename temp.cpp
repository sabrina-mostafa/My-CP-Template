///  ~~~~~Bismillah'hir Rah'maanir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


///         Originator : Sabrina Mostafa
///         Dept. Of CSE
///         International Islamic University Chittagong




#include<bits/stdc++.h>
using namespace std ;

#define   FastRead      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define   ULL               unsigned long long
#define   LL                  long long
#define   ST                  string
#define   F                    first
#define   S                    second
#define   PB                 push_back
#define   MP                make_pair
#define   pi                   acos(-1.0)
#define   NL                 "\n"
#define    _                    " "

#define YES cout << "YES"<< endl ;
#define NO cout << "NO" << endl ;
#define Yes cout << "Yes" << endl ;
#define No cout << "No" << endl ;
#define yes cout << "yes" << endl ;
#define no cout << "no" << endl ;

/*
ll gcd(ll a,ll b)
{
    return __gcd(a,b);
}
ll lcm(ll a,ll b)
{
    return (a*(b/gcd(a,b)));
}
*/

/*
````````````````` Sieve + SPF `````````````````````
````````````````````````````````````````````````````````
#define mx 1000005
int mark[mx+5] ;
int spf[mx+5] ;
vector<int>primes ;

void sieve()
{
    LL i, j ;
    mark[1] = mark[0] = 1 ;
    primes.PB(2) ;
    spf[2] = 2 ;

    for(i=1; i<=mx; i+=2) spf[i]=i ;
    for(i=4; i<=mx; i+=2)
    {
        mark[i] = 1 ;
        spf[i] = 2 ;
    }

    for(i=3; i<=mx; i+=2)
    {
        if(mark[i]!=1)
        {
            primes.PB(i) ;
            for(j=i*i; j<=mx; j+=2*i)
                mark[j] = 1 ;
        }
        if(spf[i]==i)
        {
            for(j=i*i; j<=mx; j+=2*i)
                spf[j] = i ;
        }
    }
}
*/

/*
vector<vector<int>>visited(m, vector<int>(n, 0))
vector<int>vec ;
pair<int, int>pr ;
priority_queue<int, vector<int>, greater<int>> pq ;    // MIN_Heap
set<int>st ;
vector<  pair< pair<char, int>, int>   >v ;
        for(auto i=v.begin(); i!=v.end(); i++)
        {
                cout<<i->F.F<<" "<<i->F.S<<" "<<i->S<<endl ;
        }
map<int, int>mp ;
map<char, int> :: iterator it ;
for(it = mp.begin() ; it!=mp.end(); it++)
        cout<<(*it).second<<NL ;
*/


/// ---for Unordered map---
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/
/// ---for Setprecision---
/* cout<< fixed << showpoint << setprecision(9) << */

int dx4 [ ] = {-1,   0,   0,  +1} ;
int dy4 [ ] = { 0,  -1,  +1,  0} ;
int dx [ ] = {-1,  -1,  -1,   0,   0,  +1,  +1,  +1} ;
int dy [ ] = {-1,   0,  +1,  -1,  +1,  -1,   0,  +1} ;






int main ()
{
    // FastRead ;

    int t, n, m, i, j, k, x, y, z, sum=0, l, r, f=0, flag=0, cnt=0, mx = INT_MIN, mn = INT_MAX ;
    //double p, q ;
    char ch ;
    string s, s1, s2 ;

    cin>>t ;

    //for(i=1; i<=t; i++)
    while(t--)
    {
        //int f = 0, cnt = 0, y = 0, mx = INT_MIN , mn = INT_MAX ;
        cin>>n ;

        //int a[n+5], b[n+5], c[n+5] ;

        
        

        //YES
        //NO
    }

    return 0 ;
}
