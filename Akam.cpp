/*______________________________________________Bismillahir Rahmanir Rahim____________________________________________


|            |.----------------.  .----------------.  .----------------.  .----------------.  .----------------.|    |
|            | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |    |
|            | |    _______   | || |      __      | || |   ______     | || |     ____     | || |     _____    | |    |
|            | |   /  ___  |  | || |     /  \     |  || |  |_   _ \    | || |   .'    `.   | || |    |_   _|   | |    |
|            | |  |  (__ \_|  | || |    / /\ \    | || |    | |_) |   | || |  /  .--.  \  | || |      | |     | |    |
|            | |   '.___`-.   | || |   / ____ \   | || |    |  __'.   | || |  | |    | |  | || |   _  | |     | |    |
|            | |  |`\____) |  | || | _/ /    \ \_ | || |   _| |__) |  | || |  \  `--'  /  | || |  | |_' |     | |    |
|            | |  |_______.'  | || ||____|  |____|| || |  |_______/   | || |   `.____.'   | || |  `.___.'     | |    |
|            | |              | || |              | || |              | || |              | || |              | |    |
|            | '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |    |
|            |'----------------'  '----------------'  '----------------'  '----------------'  '----------------'|    |
|                                                                                                                    |
|                                              Student of Computer Science & Engineering                              |                                        |
|                                              Comilla University                                                    |                   |
|                                              Email : ahsanulanamsaboj1999@gmail.com                                |                                      |
|                         _____________________Don't judge a book by it's cover___________________                   |                                                    |
|___________________________________________________________________________________________________________________*/

#include<bits/stdc++.h>
#include<string>
#include<string>
#define Start_by_the_grace_of_allah        int main()
#define next_Time_INsha_ALLAH               return 0;
#define ll                      long long int
#define ld                      long double
#define mod                     1000000007
#define akam                    int t;cin>>t;while(t--)
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
#define md                      1000000007
const int N                     = (int)1e6;
using namespace std;


struct S_T
{


    ll tree[N];
    void initi(int node,int b,int e){

        if(b==e){
            tree[node] = 0;
            return;
        }
        int left,right,mid;

        left = node*2;
        right = left + 1;
        mid = (b+e)/2;
        initi(left,b,mid);
        initi(right,mid+1,e);
        tree[node] = tree[left] + tree[right];
    }


    void stu(int node,int b,int e,int i,int j,int newval)
    {

        if(i>e || j<b)
        {
            return;
        }
        if(b==e)
        {

            tree[node] = newval;

            return;
        }
        int left,right,mid;

        left = node*2;
        right = left+1;

        mid = (b+e)/2;
        stu(left,b,mid,i,j,newval);
        stu(right,mid+1,e,i,j,newval);
        tree[node] = tree[left] + tree[right];


    }

    ll stq(int node,int b,int e,int i,int j)
    {

        if(i>e || j<b)return 0;
        if(b>=i && e<=j)return tree[node];
        int left,right,mid,p1,p2;

        left = node*2;
        right = left + 1;

        mid = (b+e)/2;

        p1 = stq(left,b,mid,i,j);
        p2 = stq(right,mid+1,e,i,j);

        return p1+p2;


    }


}stt[2];

Start_by_the_grace_of_allah
{
    Saboj4632;

    ll n,k,i,j,type,x1,x2,y1,y2,x,y;

    cin>>n>>k;
    map<ll,ll>row;
    map<ll,ll>col;
    stt[0].initi(1,1,n);
    stt[1].initi(1,1,n);
    for(i=0;i<k;i++){
        cin>>type;

        if(type==1){
            cin>>x>>y;
            row[x]++;
            col[y]++;
            stt[0].stu(1,1,n,x,x,1);
            stt[1].stu(1,1,n,y,y,1);
        }
        else if(type==2){
            cin>>x>>y;
            row[x]--;
            col[y]--;
            if(row[x]==0)stt[0].stu(1,1,n,x,x,0);
            if(col[y]==0)stt[1].stu(1,1,n,y,y,0);
        }
        else {
            cin>>x1>>y1>>x2>>y2;

            x = stt[0].stq(1,1,n,x1,x2);
            y = stt[1].stq(1,1,n,y1,y2);
            if(x == (x2-x1+1) || y == (y2-y1+1))YES;
            else NO;

        }
    }

    next_Time_INsha_ALLAH

}
