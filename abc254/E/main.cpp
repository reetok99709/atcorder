#include <bits/stdc++.h>
using namespace std;


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

void solve(long long N, long long M, std::vector<long long> a, std::vector<long long> b, long long Q, std::vector<long long> x, std::vector<long long> k){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> a(M);
    std::vector<long long> b(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &a[i]);
        std::scanf("%lld", &b[i]);
    }
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> x(Q);
    std::vector<long long> k(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &k[i]);
    }
    solve(N, M, std::move(a), std::move(b), Q, std::move(x), std::move(k));
    return 0;
}
