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

bool solve(std::string S){
    int prefix = 0;
    rep(i, S.size()) {
        if (S.at(i)=='a') {
            prefix++;
        } else {
            break;
        }
    }
    int suffix = 0;
    rep(j, S.size()) {
        int i = S.size()-j-1;
        if (S.at(i)=='a') {
            suffix++;
        } else {
            break;
        }
    }

    cout << prefix << endl;
    cout << suffix << endl;

    if (prefix > suffix) {
        return false;
    } else if (prefix == suffix) {
        return true;
    } else {
        string str = S.substr(prefix, S.size()-suffix-prefix);
        cout << str << endl;
        string reversed;
        std::copy(str.begin(), str.end(), back_inserter(reversed));
        std::reverse(reversed.begin(), reversed.end());
        return str==reversed;
    }
}

int main(){
    std::string S;
    std::cin >> S;
    if (solve(S)) {
        cout << YES << endl;
    } else {
        cout << NO << endl;
    }
    return 0;
}
