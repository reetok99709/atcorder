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

int gcd(int a, int b){
    if(a%b == 0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}
int lcm(int a, int b){
    return a*b / gcd(a, b);
}

void solve(long long N, long long A, long long B){
    ll ans = N*(N+1)/2;

    // Aの倍数の和
    ll n = floor(N/A);
    ll  i = n*(n+1)/2;
    ans-=i*A;

    // Bの倍数の和
    ll m = floor(N/B);
    ll j = m*(m+1)/2;
    ans-=j*B;

    // AとBの公倍数の話
    ll C = lcm(A,B);
    ll o = floor(N/C);
    ll k = o*(o+1)/2;
    ans-=k*C;

    cout << ans << endl;
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
