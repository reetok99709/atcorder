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

void solve(long long N, std::vector<long long> a, std::vector<long long> b, long long Q, std::vector<long long> x, std::vector<long long> y){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> a(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &a[i]);
    }
    std::vector<long long> b(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &b[i]);
    }
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> x(Q);
    std::vector<long long> y(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &y[i]);
    }
    solve(N, std::move(a), std::move(b), Q, std::move(x), std::move(y));
    return 0;
}
