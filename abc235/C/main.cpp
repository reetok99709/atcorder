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

void solve(long long N, long long Q, std::vector<long long> a, std::vector<long long> x, std::vector<long long> k){
    rep(i, Q) {
        ll X = x.at(i);
        ll K = k.at(i);

        ll count = 0;
        rep(j, N) {
            ll A = a.at(j);
            if (A==X)
                count++;

            if (count==K) {
                cout << j+1 << endl;
                break;
            }
        }
    }
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> a(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &a[i]);
    }
    std::vector<long long> x(Q);
    std::vector<long long> k(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &k[i]);
    }
    solve(N, Q, std::move(a), std::move(x), std::move(k));
    return 0;
}
