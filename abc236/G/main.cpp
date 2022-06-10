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

void solve(long long N, long long T, long long L, std::vector<long long> u, std::vector<long long> v){
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long T;
    std::scanf("%lld", &T);
    long long L;
    std::scanf("%lld", &L);
    std::vector<long long> u(T);
    std::vector<long long> v(T);
    for(int i = 0 ; i < T ; i++){
        std::scanf("%lld", &u[i]);
        std::scanf("%lld", &v[i]);
    }
    solve(N, T, L, std::move(u), std::move(v));
    return 0;
}
