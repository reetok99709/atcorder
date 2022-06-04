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

void solve(long long N){
    vector<vl> ans;
    rep(i, N) {
        ans[i] = vl(i+1);
        rep(j, i+1) {
            if (j==0||j==i) {
                ans[i][j] = 1;
            } else {
                ans[i][j] = ans[i-1][j-1]+ans[i-1][j];
            }
        }
    }

    for (vl v : ans) {
        bool flag = false;
        for (ll i : v) {
            if (flag) {
                cout << " ";
            } else {
                flag = true;
            }
            cout << i;
        }
        cout << endl;
    }
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    solve(N);
    return 0;
}
