/*______________________________________________Bismillahir Rahmanir Rahim____________________________________________


            .----------------.  .----------------.  .----------------.  .----------------.  .----------------.|    |
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
#define veci                    vector<int>
#define vecl                    vector<long long>
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
const int N                     = (int)1e10;
#define INF                     1e11
//vector<ll>prime;
//bool mark[1000003];
//void sieve(ll n){ll i,j;mark[1]=1;for(i=4; i<=n; i+=2)mark[i]=1;prime.push_back(2);for(i=3; i<=n; i+=2){if(!mark[i]){prime.push_back(i);if(i*i<=n){for(j=i*i; j<=n; j+=(i*2))mark[j]=1;}}}}
//map<ll,ll>Factor;
//void Primefactorize(ll n){for(ll i=0; i<prime.size() && prime[i]*prime[i]<=n; i++){if(n%prime[i] == 0){while(n%prime[i] == 0){Factor[prime[i]]++;n/=prime[i];}}}if(n>1){Factor[n]++;}}
//(to print without sieve)--// void primeFactors(ll n){while (n % 2 == 0){cout << 2 << " ";n = n/2;}for (ll i = 3; i <= sqrt(n); i = i + 2){while (n % i == 0){cout << i << " ";n = n/i;}}if (n > 2)cout << n << " ";}
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll invers(ll a,ll b){

    ll res = 1;

    while(b){

        if(b%2==0){
            res = (res*a)%mod;
        }

        a = (a*a)%mod;
        b/=2;
    }

    return res%mod;

}

ll ok(string s,ll has[],ll mid,ll pow[]){

    ll n,i,j;

    n = s.size();

    ll x,y,z,c=0;
    cout<<mid<<" midd"<<endl;
    for(i=0;i<=n-mid-mid;i++){

        for(j=i+mid;j<=n-mid;j++){

            x = (((has[i+mid-1] - (i==0 ? 0 : has[i-1]) + mod)%mod)*pow[j-i])%mod;
            y = ((has[j+mid-1] - has[j-1] + mod)%mod);

          //  cout<<i<<" jjj" <<j<<" "<<s[i+mid-1]<<" "<<(i==0 ? s[0] : s[i-1])<<" "<<s[j+mid-1]<<" "<<s[j-1]<<endl;
         //  cout<<x<<" "<<y<<endl;
            if(x==y){
                c = 1;
                break;
            }

        }
    }
  // cout<<c<<" CCC"<<endl;
   if(c&1)return 1;
   else return 0;

}
void akam()
{
    ll n,i,j,c=0,x,y,k,ans=0,sum=0;

    //cout<<"Case "<<tst<<": ";
    string s;
    cin>>n>>s;



     ll base=31;
     ll has[n] = {0},inv[n],pow[n];
     pow[0] = 1;

     for(i=1;i<n;i++){
        pow[i] = (pow[i-1]*base)%mod;
//        if(pow[i]<0){
//            pow[i] += mod;
//        }
     }

     ll pinv = 1;
     pinv = invers(base,mod-2);
     has[0] = s[0] - 'a' + 1;
     inv[0] = 1;

     for(i=1;i<n;i++){

        has[i] = (has[i-1] + ((s[i]-'a'+1)*pow[i])%mod)%mod;
        inv[i] = (inv[i-1] * pinv)%mod ;
       // cout<<has[i]<<" dfdkf"<<endl;
        //if(inv[i]<0)inv[i]+=mod;
        //if(has[i]<0)has[i]+=mod;

     }


    ll l=0,r=n+1,mid;

    while(l+1<r){


        mid = (l+r)/2;

        if(ok(s,has,mid,pow)==1){
            l = mid;
        }
        else {
            r = mid;
        }
    }

    cout<<l<<endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tst =0;

    //test
    akam();

    return 0;

}
