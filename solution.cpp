/*______________________________________________Bismillahir Rahmanir Rahim____________________________________________


            .----------------.  .----------------.  .----------------.  .----------------.  .----------------.
|            | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |    |
|            | |    _______   | || |      __      | || |   ______     | || |     ____     | || |     _____    | |    |
|            | |   /  ___  |  | || |     /  \     | || |  |_   _ \    | || |   .'    `.   | || |    |_   _|   | |    |
|            | |  |  (__ \_|  | || |    / /\ \    | || |    | |_) |   | || |  /  .--.  \  | || |      | |     | |    |
|            | |   '.___`-.   | || |   / ____ \   | || |    |  __'.   | || |  | |    | |  | || |   _  | |     | |    |
|            | |  |`\____) |  | || | _/ /    \ \_ | || |   _| |__) |  | || |  \  `--'  /  | || |  | |_' |     | |    |
|            | |  |_______.'  | || ||____|  |____|| || |  |_______/   | || |   `.____.'   | || |  `.___.'     | |    |
|            | |              | || |              | || |              | || |              | || |              | |    |
|            | '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |    |
|            |'----------------'  '----------------'  '----------------'  '----------------'  '----------------'|    |
|                                                                                                                    |
|                                              Ahsanul Anam Saboj
|                                              Department of CSE
|                                              Comilla University                                                    |
|                                              Email : ahsanulanamsaboj1999@gmail.com                                |
|                         _____________________Something is going to be happened ___________________                   |
|___________________________________________________________________________________________________________________*/
#include<bits/stdc++.h>
using namespace std;
#define Start_by_the_grace_of_allah        int main()
#define next_Time_INsha_ALLAH               return 0;
#define ll                      long long int
#define ld                      long double
#define mod                     1000000007
#define test                    int tt;cin>>tt;while(tt--)
#define YES                     cout<<"YES"<<endl
#define NO                      cout<<"NO"<<endl
#define olta(a)                 reverse(a.begin(),a.end())
#define F                       first
#define S                       second
#define pb(x)                   push_back(x)
#define mp(x,y)                 make_pair(x,y)
#define vin                    vector<int>
#define vll                    vector<long long>
#define vp                      vector<pair<ll, ll> >
#define v_min(a)                *min_element(a.begin(),a.end())
#define v_max(a)                *max_element(a.begin(),a.end())
#define v_mini(v)               min_element(v.begin(),v.end()) - v.begin();
#define v_maxi(v)               max_element(v.begin(),v.end()) - v.begin();
#define v_sum(a)                accumulate(a.begin(),a.end(),0)
#define un(a)                   a.erase(unique(a.begin(),a.end()),a.end())
#define delete(a)               a.erase(a.begin(),a.end())
#define Sort(a)                 sort(a.begin(),a.end())
#define is(a)                   is_sorted(a.begin(),a.end())
#define Saboj4632               ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define gcd(a,b)                __gcd(a,b)
#define lcm(a,b)                ((a)*(b))/gcd(a,b)
#define pi                      3.141592653589793
#define md                      1000000050
#define ull                     unsigned ll
#define coutv(v)                for(auto it:v){cout<<it<<' ';}cout<<endl;
#define cinv(v)                 for(auto &it:v)cin>>it;
#define fr(in,out)              for(ll i=in;i<out;i++)
#define nl                      '\n'
const int N                     = (int)1e10;
#define INF                     1e11
//vector<ll>prime;
//bool mark[1000003];
//void sieve(ll n){ll i,j;mark[1]=1;for(i=4; i<=n; i+=2)mark[i]=1;prime.push_back(2);for(i=3; i<=n; i+=2){if(!mark[i]){prime.push_back(i);if(i*i<=n){for(j=i*i; j<=n; j+=(i*2))mark[j]=1;}}}}
//map<ll,ll>Factor;
//void Primefactorize(ll n){for(ll i=0; i<prime.size() && prime[i]*prime[i]<=n; i++){if(n%prime[i] == 0){while(n%prime[i] == 0){Factor[prime[i]]++;n/=prime[i];}}}if(n>1){Factor[n]++;}}
//(to print without sieve)--// void primeFactors(ll n){while (n % 2 == 0){cout << 2 << " ";n = n/2;}for (ll i = 3; i <= sqrt(n); i = i + 2){while (n % i == 0){cout << i << " ";n = n/i;}}if (n > 2)cout << n << " ";}
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//ll LIS(vector<ll> const& v){ll n = v.size();const ll INF = 1e10;vecl gdp(n+1,INF);gdp[0] = -INF;for(ll i=0;i<n;i++){ll l = upper_bound(gdp.begin(),gdp.end(),v[i])-gdp.begin();if(gdp[l-1]<v[i] && v[i]<gdp[l]){gdp[l] = v[i];}}for(ll i=n;i>=0;i--){if(gdp[i]<INF){n = i;break;}}return n;}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
    return uniform_int_distribution<int>(l, r) (rng);
}
ll nsum(ll n){

    return n*(n+1) /2;
}

void akam()
{


    ll x,y,a,b,sum=0;

    cin>>x>>y;

    a = x/3;
    b = (x+1)/3;

    sum += (a+1)*2;
    sum += (b+1);



    x = x+2;

    while(x%3!=0 && x<y){

        a = x/3;
        sum += (a+1);
        x++;
    }

    while(y%3!=0 && y>x){

        b = y/3;
        sum += (b+1);
        y--;
    }

    if(x!=y){
    b = y/3;
    sum += (b+1);
    y--;
    }
    else {
        b = x/3;
        sum += (b+1);

        cout<<sum<<endl;
        return;

    }

    cout<<sum<<" pr"<<endl;

    cout<<x<<" xx yy "<<y<<endl;
    x = x/3;
    y = y/3;


    ll c = nsum(y) - nsum(x-1);

    cout<<c<<" CC"<<endl;
    c = c*3;

    sum += c;

    sum += (y-x+1);



    cout<<sum<<endl;



}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tst =0;

    test
    akam();

    return 0;

}
