#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

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

void solve(long long N, std::vector<long long> A, std::vector<long long> U, std::vector<long long> V){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> U(N-1);
    std::vector<long long> V(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        std::scanf("%lld", &U[i]);
        std::scanf("%lld", &V[i]);
    }
    solve(N, std::move(A), std::move(U), std::move(V));
    return 0;
}
