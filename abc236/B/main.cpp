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

void solve(long long N, std::vector<long long> A){
    map<ll, int> map;
    rep(i, 4*N-1) {
        if (map.count(A[i])==0)
            map[A[i]]=0;
        map[A[i]]++;
    }
    for (auto pr: map) {
        if (pr.second==3) {
            cout << pr.first << endl;
            return;
        }
    }
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(4*N-1);
    for(int i = 0 ; i < 4*N-1 ; i++){
        std::scanf("%lld", &A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
