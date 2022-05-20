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

void solve(long long N, std::vector<std::string> s, std::vector<std::string> t){
    map<string,bool> map;
    rep(i, N) {
        string ss = s.at(i);
        string tt = t.at(i);

        if (map.count(ss)==0) {
            map[ss] = true;
        } else if (map.count(tt)==0) {
            map[tt] = true;
        } else {
            cout << "No" << endl; return;
        }
    }
    cout << "Yes" << endl;
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<std::string> s(N);
    std::vector<std::string> t(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> s[i];
        std::cin >> t[i];
    }
    solve(N, std::move(s), std::move(t));
    return 0;
}
