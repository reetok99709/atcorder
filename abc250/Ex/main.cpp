#include <bits/stdc++.h>
using namespace std;

const string YES = "Yes";
const string NO = "No";

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
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

void solve(long long N, long long M, long long K, std::vector<long long> a, std::vector<long long> b, std::vector<long long> c, long long Q, std::vector<long long> x, std::vector<long long> y, std::vector<long long> t){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> a(M);
    std::vector<long long> b(M);
    std::vector<long long> c(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &a[i]);
        std::scanf("%lld", &b[i]);
        std::scanf("%lld", &c[i]);
    }
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> x(Q);
    std::vector<long long> y(Q);
    std::vector<long long> t(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &y[i]);
        std::scanf("%lld", &t[i]);
    }
    solve(N, M, K, std::move(a), std::move(b), std::move(c), Q, std::move(x), std::move(y), std::move(t));
    return 0;
}
