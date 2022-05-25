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
    return string(&buf[0], &buf[0] + len);
}

bool fix(std::vector<std::string> s, std::vector<std::string> t, int& id, map<string,int>& m, map<int,int>& nicks) {
   string ss = s.at(id);
   int i = m.at(ss);
   if (nicks.at(i)==1) {
       string s_t = t.at(i);
       if (m.count(s_t)==0) {
           m[ss] = id;
           nicks[i] = 2;
           nicks[id] = 1;
           return true;
       } else {
           if (fix(s,t,i,m,nicks)) {
               m[ss] = id;
               nicks[i] = 2;
               nicks[id] = 1;
               return true;
           }
       }
   } else if (nicks.at(i)==2) {
       string s_t = s.at(i);
       if (m.count(s_t)==0) {
           m[ss] = id;
           nicks[i] = 1;
           nicks[id] = 2;
           return true;
       } else {
           if (fix(s,t,i,m,nicks)) {
               m[ss] = id;
               nicks[i] = 1;
               nicks[id] = 2;
               return true;
           }
       }
   }

}

void solve(long long N, std::vector<std::string> s, std::vector<std::string> t){
    map<string,int> m;
    map<int,int> nicks;
    vector<int> no_nick;
    rep(i, N) {
        string ss = s.at(i);
        string tt = t.at(i);

        if (m.count(ss)==0) {
            m[ss] = i;
            nicks[i]=1;
        } else if (m.count(tt)==0) {
            m[tt] = i;
            nicks[i]=2;
        } else {
            no_nick.push_back(i);
        }
    }
    cout << "Yes" << endl;
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<std::string> s(N);
    std::vector<std::string> t(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> s[i];
        std::cin >> t[i];
    }
    solve(N, std::move(s), std::move(t));
    return 0;
}
