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

void solve(long long a, long long b, long long c){
    vector<ll> v = {a,b,c};
    sort(all(v));
    if (v[1]==b) {
        cout << YES << endl;
    } else {
        cout << NO << endl;
    }

}

int main(){
    long long a;
    std::scanf("%lld", &a);
    long long b;
    std::scanf("%lld", &b);
    long long c;
    std::scanf("%lld", &c);
    solve(a, b, c);
    return 0;
}
