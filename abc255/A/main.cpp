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

void solve(long long R, long long C, std::vector<std::vector<long long>> A){
    cout << A[R-1][C-1] << endl;
}

int main(){
    long long R;
    std::scanf("%lld", &R);
    long long C;
    std::scanf("%lld", &C);
    std::vector<std::vector<long long>> A(2, std::vector<long long>(2));
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            std::scanf("%lld", &A[i][j]);
        }
    }
    solve(R, C, std::move(A));
    return 0;
}
