#include <bits/stdc++.h>
using namespace std;


#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define setfixed(x) std::fixed << std::setprecision(x)
#define setscientific(x) std::scientific << std::setprecision(x)
using ll = long long;
using vl = vector<long long>;
#ifdef _DEBUG
#define debug(x) cerr << "[DEBUG] " << __LINE__ << ": " << #x << " = " << x << endl
#else
#define debug(x)
#endif
template <typename ... Args>
std::string format(const std::string& fmt, Args ... args )
{
    size_t len = std::snprintf( nullptr, 0, fmt.c_str(), args ... );
    std::vector<char> buf(len + 1);
    std::snprintf(&buf[0], len + 1, fmt.c_str(), args ... );
    return std::string(&buf[0], &buf[0] + len);
}
template<typename T>
void output_vec(vector<T> vec) {
    int size = vec.size();
    for (int i=0; i < size; i++) {
        cout << vec.at(i);
        if (i+1==size) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}
template<typename T>
void output_vec(vector<vector<T>> vec) {
    int size = vec.size();
    for (int i=0; i < size; i++) {
        output_vec(vec.at(i));
    }
}

template<typename T>
T diff(T a, T b) {
    return a>b ? a-b : b-a;
}

template<typename T>
T vec_max(vector<T> vec) {
    return *std::max_element(vec.begin(), vec.end());
}

template<typename T>
T vec_min(vector<T> vec) {
    return *std::min_element(vec.begin(), vec.end());
}

ll calc_distance(pair<ll,ll> p1, pair<ll,ll> p2) {
    return pow(diff(p1.first, p2.first), 2)+pow(diff(p1.second, p2.second), 2);
}


void solve(std::vector<long long> hi, std::vector<long long> wi){
    ll ans = 0;
    rep(a, 30) {
        rep(c, 30) {
            rep(g, 30) {
                rep(i, 30) {
                    ll b = hi[0]-a-c;
                    ll d = wi[0]-a-g;
                    ll h = hi[2]-g-i;
                    ll f = wi[2]-c-i;
                    ll e = hi[1]-d-f;
                    if (b>=0 && d>=0 && h>=0 && f>=0 && e>=0)
                        if (a+b+c==hi[0] && d+e+f==hi[1] && g+h+i==hi[2] && a+d+g==wi[0] && b+e+h==wi[1] && c+f+i==wi[2])
                            ans++;
//                    cout << a << " " << b << " " << c << endl;
//                    cout << d << " " << e << " " << f << endl;
//                    cout << g << " " << h << " " << i << endl;
//                    cout << ans << endl;
//                    cout << "-------" << endl;
                }
            }
        }
    }
    cout << ans << endl;
}

int main(){
    std::vector<long long> h(3);
    for(int i = 0 ; i < 3 ; i++){
        std::scanf("%lld", &h[i]);
    }
    std::vector<long long> w(3);
    for(int i = 0 ; i < 3 ; i++){
        std::scanf("%lld", &w[i]);
    }
    solve(std::move(h), std::move(w));
    return 0;
}
