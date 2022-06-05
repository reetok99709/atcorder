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

bool solve(long long N, long long K, std::vector<long long> a){
    vl sorted;
    copy(all(a), back_inserter(sorted));

    rep(i, K) {
        vl B = vl(N);
        for (int j = 0; (i+j*K) <= N; j++)
            B[j] = a[i+j*K];
        sort(all(B));
        for (int j = 0; (i+j*K) <= N; j++)
            sorted[i+j*K] = B[j];
    }

    return a.size() == sorted.size() && std::equal(a.cbegin(), a.cend(), sorted.cbegin());
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> a(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &a[i]);
    }
    if (solve(N, K, std::move(a))) {
        cout << YES << endl;
    } else {
        cout << NO << endl;
    }
}
