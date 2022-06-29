#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#ifdef ONLINE_JUDGE
#pragma GCC oPimize("Ofast","unroint-loops","omit-frame-pointer","inline","03")
#endif // ONLINE_JUDGE

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define uni(x) (x).erase(unique(all(x)), (x).end())
#define rnk(x, y) upper_bound(all((x)), (y)) - (x).begin()
#define out(x) cout<<x<<"\n"
#define fin(a) for(auto &i: a) cin>>i

#define aaa(x) s2[(x)]-'a'

template <class T = int> using ii = pair <T, T>;
template <class T = int> using tri = tuple <T, T, T>;

typedef long double ld;
typedef long long ll;

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

static int rnd(int lo, int hi) {
    return uniform_int_distribution <int> (lo, hi)(rng);
}

typedef vector <vector <int>> mat;

const ld eps = 1e-9;
const ll oo = 1e18;

const ll MAX = 1e6+100;
const ll mod = 998244353;

const int p = 31;
string ss[]={"","breathe ", "count ", "2, ","3, ", "to ", "now ", "and ", "three, ", "continue ", "1, "};

void bfs(vector<vector<int>> &vec, vector<bool> vis, int pos){
    queue<int> cola;
    cola.push(pos);
    vis[pos]=true;
    while(cola.size()){
        int e = cola.front();
        cola.pop();
        for(int i=0; i<vec[e].size(); i++){
            int current=vec[e][i];

            if(!vis[current]){
                cola.push(current);
                vis[current]=true;
                cout<<ss[current];

            }
        }

    }
}

void solve()
{
    int n=11;
    vector<vector<int>> a(n);
    vector<bool> vis(n);
    a[0].push_back(1);
    a[0].push_back(7);

    a[1].push_back(2);
    a[1].push_back(5);

    a[2].push_back(3);
    a[2].push_back(4);

    a[5].push_back(6);

    a[7].push_back(8);
    a[7].push_back(10);

    a[8].push_back(9);

    bfs(a,vis,0);


    out("");
    out("Accepted! ");

    ll x=1e10;
    while(x--){
    }
    cout<< "oh damn there was an error, msh"<<"\n";
    cout<<"Wrong answer on test 1"<<"\n";

}

int main() {

/*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
    int t = 1;
    //cin >> t;

    while(t--){
        solve();
    }

    return 0;
}

/*
 *         If you are reading this, it is quite possible that you have lost patience with me.
 *
 */