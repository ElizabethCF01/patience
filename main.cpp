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

string ss[]= {
        " ", " ","  Ella ", "y ", "cerro ", "se ",
        "los ", "oscuridad ","ojos ", "dos ", "todo ", "las ",
        "el ", "huecas ","tiempo, ", "gotitas ", "\n ", "cuencas de ",
        "y ", "sus ","fue ", "saladas, ", "otro ", "ojos ",
        "rostro ", "deshizo, \n ","lo ", "\n ", "que ", "secos,\n ",
        "vio ", "con ","en ", "se ", "aquel ", "sin ",
        "momento, ", "miedo ","\n ", "escurrieron ", "no ", "de ",
        "desperdicio ", "que ","un ", "tan ", "solo ", "aun \n",
        "detalle ", "acomodo ","de ", "despacio, ", "se ", " pudieran ",
        "cuerpo, ", "que ","\n ", "\n ", "imagino ", "quedar ",
        "otras ", "abiertos...","manos, ", "que ", "otros ", "nadie ",
        "besos ", " ","\n ", "parecio ", "recordo", " ",
        "sus ", " ","ojos, ", "eterno, \n ", "su ", "sus ",
        "sonrisa ", " ","y ", "hasta ", "sus ", " ",
        "oyuelos ", "pudiera ","\n ", "rozarle ", "y ", " ",
        "sintio ", "manos \n","miedo", "los ", ", ", "verlo, \n ",
        "\n ", " ","un ", "huesos \n ", "terrible ", " ",
        "sentimiento ", " ","\n ", "toda ", "se ", " ",
        "apodero ", " ","de", "su ", "su ", " ",
        "pecho", "la ",", ", "piel ", "\n ", " en ",
        " "

};

void solve()
{

    vector<bool> crib(120, false);
     vector<ll> a (120);

    a[2]=2;
    for(int i=2;i<120;i++){
        if(!crib[i]){
            for(int j=i;j<120;j+=i){
                if(!crib[j]){
                    crib[j] = true;
                    cout<<ss[j]<<" ";
                }

            }
        }
    }

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