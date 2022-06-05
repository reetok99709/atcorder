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
    vector<vl> B(K);
    rep(i, N)
        B[i%K].push_back(a.at(i));

    vl sorted;
    copy(all(a), back_inserter(sorted));
    sort(all(sorted));

    for (auto pr : B) {
        for (auto v : pr)
            cout << v << " ";
        cout << endl;
        sort(all(pr));
        cout << "------" << endl;
        for (auto v : pr)
            cout << v << " ";
        cout << endl;
    }

    vl SA(N);
    rep(i, N) {
        SA[i] = B[i%K][i/K];
    }

    rep(i, N)
        cout << a[i] << " ";
    cout << endl;
    rep(i, N)
        cout << SA[i] << " ";
    cout << endl;
    rep(i, N)
        cout << sorted[i] << " ";
    cout << endl;



    return SA==sorted;
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
