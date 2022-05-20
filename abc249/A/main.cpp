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

void solve(long long A, long long B, long long C, long long D, long long E, long long F, long long X){
    // 高橋
    int t_w = floor(X/(A+C));
    int t_m = X%(A+C);
    int t_walked = t_w*A*B;
    if (t_m >= A) {
        t_walked += A*B;
    } else {
        t_walked += B*t_m;
    }

    // 青木
    int a_w = floor(X/(D+F));
    int a_m = X%(D+F);
    int a_walked = a_w*D*E;
    if (a_m >= D) {
        a_walked += D*E;
    } else {
        a_walked += E*a_m;
    }

    debug(t_walked);
    debug(a_walked);

    if (t_walked > a_walked) {
        cout << "Takahashi" << endl;
    } else if (t_walked < a_walked) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }
}

int main(){
    long long A;
    std::scanf("%lld", &A);
    long long B;
    std::scanf("%lld", &B);
    long long C;
    std::scanf("%lld", &C);
    long long D;
    std::scanf("%lld", &D);
    long long E;
    std::scanf("%lld", &E);
    long long F;
    std::scanf("%lld", &F);
    long long X;
    std::scanf("%lld", &X);
    solve(A, B, C, D, E, F, X);
    return 0;
}
