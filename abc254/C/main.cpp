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
    vector<vl> B = vector<vl>(K);
    rep(i, K)
        B[i] = vl(N/K+1);
    rep(i, N) {
        B[i%K].push_back(a.at(i));
    }

    vl sorted = vl(N);
    copy(all(a), back_inserter(sorted));
    sort(all(sorted));

    for (auto pr : B)
        sort(all(pr));

    map<ll, ll> m;
    rep(i, N) {
        if (m.count(i%K)==0)
            m[i%K] = 0;
        a[i] = B[i%K][m[i%K]];
        m[i%K]++;
    }

    return std::equal(a.cbegin(), a.cend(), sorted.cbegin());
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
