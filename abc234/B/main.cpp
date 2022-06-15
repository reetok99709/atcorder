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
ll max(set<ll> vec) {
    return *std::max_element(vec.begin(), vec.end());
}

ll min(set<ll> vec) {
    return *std::min_element(vec.begin(), vec.end());
}

ll max(vector<ll> vec) {
    return *std::max_element(vec.begin(), vec.end());
}

ll min(vector<ll> vec) {
    return *std::min_element(vec.begin(), vec.end());
}

ll calc_distance(pair<ll,ll> p1, pair<ll,ll> p2) {
    return pow(diff(p1.first, p2.first), 2)+pow(diff(p1.second, p2.second), 2);
}


int main(){
    ll N;
    cin >> N;
    vector<pair<ll,ll>> points;
    rep(i, N) {
        ll x,y;
        cin >> x >> y;
        points.push_back(make_pair(x,y));
    }

    set<ll> dis;
    for (auto p1:points) {
        for (auto p2: points) {
            dis.insert(calc_distance(p1,p2));
        }
    }

    cout << sqrt(max(dis)) << endl;

    return 0;
}
