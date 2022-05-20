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

void solve(long long N, std::vector<long long> A, std::vector<long long> u, std::vector<long long> v){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N-2+1);
    for(int i = 0 ; i < N-2+1 ; i++){
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> u(N-1);
    std::vector<long long> v(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        std::scanf("%lld", &u[i]);
        std::scanf("%lld", &v[i]);
    }
    solve(N, std::move(A), std::move(u), std::move(v));
    return 0;
}
