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

void S(int& x, int& y, int& d) {
    if (d==0)
        x++;
    if (d==1)
        y--;
    if (d==2)
        x--;
    if (d==3)
        y++;
}

void R(int& x, int& y, int& d) {
    d++;
    if (d > 3)
        d-=4;
}

void solve(long long N, std::string T){
    int x,y,d;
    x=0;y=0;d=0;
    // direction
    // 0 = 東 x+
    // 1 = 南 y-
    // 2 = 西 x-
    // 3 = 北 y+
    for (auto c : T){
        if (c=='S')
            S(x, y, d);
        if (c=='R')
            R(x,y,d);
    }

    cout << x << " " << y << endl;
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::string T;
    std::cin >> T;
    solve(N, T);
    return 0;
}
