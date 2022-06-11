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

ll dist(ll x1, ll y1, ll x2, ll y2) {
    ll x = x1>x2 ? x1-x2 : x2-x1;
    ll y = y1>y2 ? y1-y2 : y2-y1;
    return x*x+y*y;
}

void solve(long long N, long long K, std::vector<long long> A, std::vector<long long> X, std::vector<long long> Y){
    cout << "-----" << endl;
    ll ans = 0;
    rep(i, N) {
        vector<ll> vec;
        rep(j, K) {
            vec.push_back(
                    dist(X[i], Y[i], X[A[j]-1], Y[A[j]-1])
                    );
            cout << i << endl;
            cout << A[j] << endl;
            cout << dist(X[i], Y[i], X[A[j]-1], Y[A[j]-1]) << endl;
        }
        ll min = *std::min_element(vec.begin(), vec.end());
        if (ans < min) {
            ans = min;
        }
    }
    cout << ans << endl;
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> A(K);
    for(int i = 0 ; i < K ; i++){
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> X(N);
    std::vector<long long> Y(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &X[i]);
        std::scanf("%lld", &Y[i]);
    }
    solve(N, K, std::move(A), std::move(X), std::move(Y));
    return 0;
}
