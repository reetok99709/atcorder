#include <bits/stdc++.h>
using namespace std;


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

void solve(std::vector<long long> x, std::vector<long long> y){
    map<int, int> xs;
    map<int, int> ys;
    rep(i,3) {
        int xv = x.at(i);
        int yv = y.at(i);
        if (xs.count(xv)==0)
            xs[xv]=0;
        if (ys.count(yv)==0)
            ys[yv]=0;
        xs[xv]+=1;
        ys[yv]+=1;
    }

    int X,Y;
    for(auto p:xs) {
        if (p.second==1)
            X=p.first;
    }
    for(auto p:ys) {
        if (p.second==1)
            Y=p.first;
    }

    cout << X << " " << Y << endl;

}

int main(){
    std::vector<long long> x(3);
    std::vector<long long> y(3);
    for(int i = 0 ; i < 3 ; i++){
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &y[i]);
    }
    solve(std::move(x), std::move(y));
    return 0;
}
