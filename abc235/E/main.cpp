#include <bits/stdc++.h>
using namespace std;

const string YES = "Yes";
const string NO = "No";

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

bool solve(long long N, long long M, long long Q, std::vector<long long> a, std::vector<long long> b, std::vector<long long> c, std::vector<long long> u, std::vector<long long> v, std::vector<long long> w){
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> a(M);
    std::vector<long long> b(M);
    std::vector<long long> c(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &a[i]);
        std::scanf("%lld", &b[i]);
        std::scanf("%lld", &c[i]);
    }
    std::vector<long long> u(Q);
    std::vector<long long> v(Q);
    std::vector<long long> w(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &u[i]);
        std::scanf("%lld", &v[i]);
        std::scanf("%lld", &w[i]);
    }
    if (solve(N, M, Q, std::move(a), std::move(b), std::move(c), std::move(u), std::move(v), std::move(w))) {
        cout << YES << endl;
    } else {
        cout << NO << endl;
    }
    return 0;
}
