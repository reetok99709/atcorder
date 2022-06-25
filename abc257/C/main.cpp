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


void solve(long long N, std::string S, std::vector<long long> W){
    vector<ll> children;
    vector<ll> parents;
    rep(i, N) {
        if (S[i] == 0) {
            children.push_back(i);
        } else {
            parents.push_back(i);
        }
    }
    // childrenのなかでXより小さい要素の数とparentsのなかでXより大きい要素の数の和の最大を求める
    ll ans = 0;
    rep(i, children.size()) {
        ll c = children.at(i);
        ll p = parents.at(i);
        ans += W.at(c) + W.at(p);
    }
    cout << ans << endl;
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::string S;
    std::cin >> S;
    std::vector<long long> W(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &W[i]);
    }
    solve(N, S, std::move(W));
    return 0;
}
