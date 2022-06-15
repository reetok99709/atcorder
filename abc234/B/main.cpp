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

ll calc_distance(pair<ll,ll> p1, pair<ll,ll> p2) {
    ll x_distance = p1.first>p2.first ? p1.first-p2.first : p2.first-p1.first;
    ll y_distance = p1.second>p2.second ? p1.second-p2.second : p2.second-p1.second;

    return x_distance*x_distance+y_distance*y_distance;
}


int main(){
    ll N;
    cin >> N;
    vl x(N),y(N);
    rep(i, N) {
        cin >> x[i] >> y[i];
    }

    ll max_x,min_x,max_y,min_y;
    max_x = *std::max_element(x.begin(), x.end());
    min_x = *std::min_element(x.begin(), x.end());
    max_y = *std::max_element(y.begin(), y.end());
    min_y = *std::min_element(y.begin(), y.end());


    vector<pair<ll,ll>> points(4);
    points.push_back(make_pair(max_x, max_y));
    points.push_back(make_pair(max_x, min_y));
    points.push_back(make_pair(min_x, max_y));
    points.push_back(make_pair(min_x, min_y));

    set<ll> ans;
    for (auto p1 : points) {
        for (auto p2 : points) {
            ans.insert(calc_distance(p1, p2));
        }
    }

    ll a = *std::max_element(ans.begin(), ans.end());

    cout << sqrt(a) << endl;


    return 0;
}
