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

void solve(long long N, long long A, long long B){
    rep(i,A*N) {
        rep(j, B*N) {
            debug(i);
            debug(j);
            ll ii = floor(i/A)+1;
            ll jj = floor(j/B)+1;
            if ((ii+jj)%2==0) {
                cout << ".";
            } else {
                cout << "#";
            }
        }
        cout << endl;
    }
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long A;
    std::scanf("%lld", &A);
    long long B;
    std::scanf("%lld", &B);
    solve(N, A, B);
    return 0;
}
