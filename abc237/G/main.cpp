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

void solve(long long N, long long Q, long long X, std::vector<long long> P, std::vector<long long> C, std::vector<long long> L, std::vector<long long> R){
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    long long X;
    std::scanf("%lld", &X);
    std::vector<long long> P(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &P[i]);
    }
    std::vector<long long> C(Q);
    std::vector<long long> L(Q);
    std::vector<long long> R(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &C[i]);
        std::scanf("%lld", &L[i]);
        std::scanf("%lld", &R[i]);
    }
    solve(N, Q, X, std::move(P), std::move(C), std::move(L), std::move(R));
    return 0;
}
