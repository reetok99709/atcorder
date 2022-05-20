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

void solve(long long H, long long W, long long R, long long C){
    if ((R==1 && R==H) && (C==1 && C==W)) {
        cout << 0 << endl;
    } else if ((R==1 || R==H) && (C==1 && C==W)) {
        cout << 1 << endl;
    } else if ((R==1 && R==H) && (C==1 || C==W)) {
        cout << 1 << endl;
    } else if ((R==1 && R==H) || (C==1 && C==W)) {
        cout << 2 << endl;
    } else if ((R==1 || R==H) && (C==1 || C==W)) {
        cout << 2 << endl;
    } else if (R==1 || R==H) {
        cout << 3 << endl;
    } else if (C==1 || C==W) {
        cout << 3 << endl;
    } else {
        cout << 4 << endl;
    }
}

int main(){
    long long H;
    std::scanf("%lld", &H);
    long long W;
    std::scanf("%lld", &W);
    long long R;
    std::scanf("%lld", &R);
    long long C;
    std::scanf("%lld", &C);
    solve(H, W, R, C);
    return 0;
}
