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

void solve(long long Q, std::vector<long long> X, std::vector<long long> Y, std::vector<long long> A, std::vector<long long> B){

}

int main(){
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> X(Q);
    std::vector<long long> Y(Q);
    std::vector<long long> A(Q);
    std::vector<long long> B(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &X[i]);
        std::scanf("%lld", &Y[i]);
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
    }
    solve(Q, std::move(X), std::move(Y), std::move(A), std::move(B));
    return 0;
}