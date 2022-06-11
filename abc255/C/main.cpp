#include <bits/stdc++.h>
using namespace std;


#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define setfixed(x) std::fixed << std::setprecision(x)
#define setscientific(x) std::scientific << std::setprecision(x)
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
template<typename T>
void output_vec(vector<T> vec) {
    int size = vec.size();
    for (int i=0; i < size; i++) {
        cout << vec.at(i);
        if (i+1==size) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}
template<typename T>
void output_vec(vector<vector<T>> vec) {
    int size = vec.size();
    for (int i=0; i < size; i++) {
        output_vec(vec.at(i));
    }
}

void solve(long long X, long long A, long long D, long long N){
    ll a1, a2;
    a1 = A+(N-1)*D;
    a2 = A;
    ll min_limit = a1>a2 ? a2 : a1;
    ll max_limit = a1>a2 ? a1 : a2;

    ll ans;
    if (X > max_limit) {
        ans = X-max_limit;
    } else if (X < min_limit) {
        ans = min_limit-X;
    } else {
        ll mul = round((X-A)/D);
        ll val = A+(mul-1)*D;
        if (val>X) {
            ans = val-X;
        } else {
            ans = X-val;
        }
    }
    cout << ans << endl;
}

int main(){
    long long X;
    std::scanf("%lld", &X);
    long long A;
    std::scanf("%lld", &A);
    long long D;
    std::scanf("%lld", &D);
    long long N;
    std::scanf("%lld", &N);
    solve(X, A, D, N);
    return 0;
}
