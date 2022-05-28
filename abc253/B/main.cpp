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

void solve(long long H, long long W, std::vector<std::string> S){
    int i = 0;
    int j = 0;
    int x1,y1;
    int x2,y2;
    for(string s : S) {
        int k = 0;
        for (char c : s){
            if (c=='o') {
                if (i==0) {
                    x1 = k;
                    y1 = j;
                    i++;
                } else if (i==1) {
                    x2 = k;
                    y2 = j;
                    i++;
                }
            }
            k++;
        }
        j++;
    }

    cout << abs(x1-x2)+abs(y1-y2) << endl;
}

int main(){
    long long H;
    std::scanf("%lld", &H);
    long long W;
    std::scanf("%lld", &W);
    std::vector<std::string> S(H);
    for(int i = 0 ; i < H ; i++){
        std::cin >> S[i];
    }
    solve(H, W, std::move(S));
    return 0;
}
