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

pair<ll, ll> cpair(ll x, ll y) {
    pair<ll, ll> pair;
    pair.first = x;
    pair.second = y;
    return pair;
}

bool solve(std::vector<long long> x, std::vector<long long> y){
    vector<pair<ll, ll>> vec;
    vec.push_back(cpair(2, 1));
    vec.push_back(cpair(1, 2));
    vec.push_back(cpair(-2, 1));
    vec.push_back(cpair(-1, 2));
    vec.push_back(cpair(2, -1));
    vec.push_back(cpair(1, -2));
    vec.push_back(cpair(-2, -1));
    vec.push_back(cpair(-1, -2));

    ll x1,y1,x2,y2;
    x1 = x.at(0);
    x2 = x.at(1);
    y1 = x.at(0);
    y2 = x.at(1);


    for (auto p1: vec) {
        for (auto p2: vec) {
            if (x1+p1.first+p2.first==x2 && y1+p1.second+p2.second==y2)
                return true;
        }
    }
    return false;
}

int main(){
    std::vector<long long> x(2);
    std::vector<long long> y(2);
    for(int i = 0 ; i < 2 ; i++){
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &y[i]);
    }
    if (solve(std::move(x), std::move(y))) {
        cout << YES << endl;
    } else {
        cout << NO << endl;
    }
    return 0;
}
