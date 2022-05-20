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

void solve(std::string S){
    map<char, int> times;
    bool contain_small_char = false;
    bool contain_big_char = false;

    for (char c : S) {
        if (times.count(c)==0)
            times[c]=0;
        times[c]+=1;
        if (isupper(c))
            contain_big_char=true;
        if (islower(c))
            contain_small_char=true;
    }

    if (!contain_big_char || !contain_small_char) {
        cout << "No" << endl; return;
    }

    for (pair<char,int> p : times) {
        if (p.second>1) {
            cout << "No" << endl; return;
        }
    }
    cout << "Yes" << endl;
}

int main(){
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
