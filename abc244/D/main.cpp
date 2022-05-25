#include <bits/stdc++.h>
using namespace std;

const string YES = "Yes";

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
std::string format(const std::string& fmt, Args ... args ) {
    size_t len = std::snprintf(nullptr, 0, fmt.c_str(), args ...);
    std::vector<char> buf(len + 1);
    std::snprintf(&buf[0], len + 1, fmt.c_str(), args ...);
    return std::string(&buf[0], &buf[0] + len);
}

std::string join(const std::vector<std::string>& v, const char* delim = 0) {
    std::string s;
    if (!v.empty()) {
        s += v[0];
        for (decltype(v.size()) i = 1, c = v.size(); i < c; ++i) {
            if (delim) s += delim;
            s += v[i];
        }
    }
    return s;
}

void solve(std::vector<std::string> S, std::vector<std::string> T){
    string SS = join(S, "");
    string TT = join(T,"");
    vector<string> A = {"RGB","GBR","BRG"};
    if (std::count(A.begin(), A.end(), SS)==std::count(A.begin(), A.end(), TT)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    cout << endl;
}

int main(){
    std::vector<std::string> S(3);
    for(int i = 0 ; i < 3 ; i++){
        std::cin >> S[i];
    }
    std::vector<std::string> T(3);
    for(int i = 0 ; i < 3 ; i++){
        std::cin >> T[i];
    }
    solve(std::move(S), std::move(T));
    return 0;
}
