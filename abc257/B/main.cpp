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

template<typename T>
T diff(T a, T b) {
    return a>b ? a-b : b-a;
}

template<typename T>
T vec_max(vector<T> vec) {
    return *std::max_element(vec.begin(), vec.end());
}

template<typename T>
T vec_min(vector<T> vec) {
    return *std::min_element(vec.begin(), vec.end());
}

ll calc_distance(pair<ll,ll> p1, pair<ll,ll> p2) {
    return pow(diff(p1.first, p2.first), 2)+pow(diff(p1.second, p2.second), 2);
}


void solve(long long N, long long K, long long Q, std::vector<long long> A, std::vector<long long> L){
    vector<bool> status(N, false);
    vector<ll> koma(K);
    rep(i, K) {
        auto item = A.at(i);
        status[item - 1] = true;
        koma[i] = item-1;
    }
//    output_vec(status);

    rep(i, Q) {
//        cout << "STEP " << i << " " << endl;
        auto index = koma[L.at(i)-1];
        if (index+1==N)
            continue;
        if (status[index+1])
            continue;
        status[index]=false;
        status[index+1]=true;
        koma[L.at(i)-1]++;
//        output_vec(status);
    }

    rep(i, K) {
        koma[i]++;
    }
    output_vec(koma);

//    output_vec(status);

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> A(K);
    for(int i = 0 ; i < K ; i++){
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> L(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &L[i]);
    }
    solve(N, K, Q, std::move(A), std::move(L));
    return 0;
}
