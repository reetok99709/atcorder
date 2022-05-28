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

vector<string> split_naive(const string &s, char delim) {
    vector<string> elems;
    string item;
    for (char ch: s) {
        if (ch == delim) {
            if (!item.empty())
                elems.push_back(item);
            item.clear();
        }
        else {
            item += ch;
        }
    }
    if (!item.empty())
        elems.push_back(item);
    return elems;
}

int main(){
    int Q;
    cin >> Q;
    map<ll, ll> S;
    int mode = 0;
    rep(i,Q) {
        string q;
        getline(cin, q);
        vector<string> query = split_naive(q, ' ');
        if (query[0]=="1") {
            ll x = stoll(query[1]);
            if (S.count(x)==0){
                S[x]=1;
            } else {
                S[x]++;
            }
        } else if (query[1]=="2") {
            ll x,c;
            x = stoll(query[1]);
            c = stoll(query[2]);
            if (S[x]<=c) {
                S[x] = 0;
            } else {
                S[x]-=c;
            }
        } else if (query[2]=="3") {
            int max = S.rbegin()->first;
            int min = S.begin()->first;
            cout << max-min << endl;
        }
    }
    return 0;
}
