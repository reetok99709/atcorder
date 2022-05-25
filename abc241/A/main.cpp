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

void solve(std::vector<long long> a){
    int k = 0;
    rep(i, 3) {
        k = a[k];
    }
    cout << k << endl;
}

int main(){
    std::vector<long long> a(9+1);
    for(int i = 0 ; i < 9+1 ; i++){
        std::scanf("%lld", &a[i]);
    }
    solve(std::move(a));
    return 0;
}
