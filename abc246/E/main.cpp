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

void solve(long long N, long long A_x, long long A_y, long long B_x, long long B_y, std::vector<std::string> S){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long A_x;
    std::scanf("%lld", &A_x);
    long long A_y;
    std::scanf("%lld", &A_y);
    long long B_x;
    std::scanf("%lld", &B_x);
    long long B_y;
    std::scanf("%lld", &B_y);
    std::vector<std::string> S(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
    }
    solve(N, A_x, A_y, B_x, B_y, std::move(S));
    return 0;
}
