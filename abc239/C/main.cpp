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

pair<ll, ll> cpair(ll x, ll y, ll xx, ll yy) {
    pair<ll, ll> pair;
    pair.first = x+xx;
    pair.second = y+yy;
    return pair;
}

void func(vector<pair<ll,ll>>* vec, vl var ) {
    ll x = var.at(0);
    ll y = var.at(1);
    vec->push_back(cpair(x, y, 2, 1));
    vec->push_back(cpair(x, y, 1, 2));
    vec->push_back(cpair(x, y, -2, 1));
    vec->push_back(cpair(x, y, -1, 2));
    vec->push_back(cpair(x, y, 2, -1));
    vec->push_back(cpair(x, y, 1, -2));
    vec->push_back(cpair(x, y, -2, -1));
    vec->push_back(cpair(x, y, -1, -2));
}

bool solve(std::vector<long long> x, std::vector<long long> y){
    vector<pair<ll, ll>> xs;
    func(&xs, x);
    vector<pair<ll, ll>> ys;
    func(&ys, y);

    for (auto p : xs) {
        for (auto p2 : ys) {
            if (p.first==p2.first&&p.second==p2.second)
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
