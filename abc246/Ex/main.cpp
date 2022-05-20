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

void solve(long long N, long long Q, std::string S, std::vector<long long> x, std::vector<std::string> c){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    std::string S;
    std::cin >> S;
    std::vector<long long> x(Q);
    std::vector<std::string> c(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &x[i]);
        std::cin >> c[i];
    }
    solve(N, Q, S, std::move(x), std::move(c));
    return 0;
}
