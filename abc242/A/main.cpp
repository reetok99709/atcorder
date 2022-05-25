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

void solve(long long A, long long B, long long C, long long X){
    if (X <= A) {
        cout << 1 << endl;
        return;
    } else if (X > B) {
        cout << 0 << endl;
        return;
    } else {
        cout << ((double)C)/(double(B-A)) << endl;
    }
}

int main(){
    long long A;
    std::scanf("%lld", &A);
    long long B;
    std::scanf("%lld", &B);
    long long C;
    std::scanf("%lld", &C);
    long long X;
    std::scanf("%lld", &X);
    solve(A, B, C, X);
    return 0;
}
