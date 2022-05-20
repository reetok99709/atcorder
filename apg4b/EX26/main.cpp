#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using vl = vector<long long>;

map<string, int> int_values;
map<string, vector<int>> vec_values;

template<class T> std::vector<std::string> split(const std::string& s, const T& separator, bool ignore_empty = 0, bool split_empty = 0) {
    struct {
        auto len(const std::string&             s) { return s.length(); }
        auto len(const std::string::value_type* p) { return p ? std::char_traits<std::string::value_type>::length(p) : 0; }
        auto len(const std::string::value_type  c) { return c == std::string::value_type() ? 0 : 1; /*return 1;*/ }
    } util;

    if (s.empty()) { /// empty string ///
        if (!split_empty || util.len(separator)) return {""};
        return {};
    }

    auto v = std::vector<std::string>();
    auto n = static_cast<std::string::size_type>(util.len(separator));
    if (n == 0) {    /// empty separator ///
        if (!split_empty) return {s};
        for (auto&& c : s) v.emplace_back(1, c);
        return v;
    }

    auto p = std::string::size_type(0);
    while (1) {      /// split with separator ///
        auto pos = s.find(separator, p);
        if (pos == std::string::npos) {
            if (ignore_empty && p - n + 1 == s.size()) break;
            v.emplace_back(s.begin() + p, s.end());
            break;
        }
        if (!ignore_empty || p != pos)
            v.emplace_back(s.begin() + p, s.begin() + pos);
        p = pos + n;
    }
    return v;
}

vector<string> lexer(string code) {
    return split(code, " ", true);
}

int review_int(string token) {
    if (int_values.count(token)==0) {
        return stoi(token);
    } else {
        return int_values.at(token);
    }
}

int review_compression_int(vector<string> tokens, int& pc) {
    string val = tokens.at(pc);
    int res = review_int(val);
//    cout << "DEBUG: review_compression_int = " << res << endl;
    pc+=1;
    while(true) {
        string ope = tokens.at(pc);
//        cout << "DEBUG: new ope" << ope << endl;
        if (ope=="+") {
            pc+=1;
            val = tokens.at(pc);
            res += review_int(val);
        } else if (ope=="-") {
            pc+=1;
            val = tokens.at(pc);
            res -= review_int(val);
        } else if (ope==";") {
            break;
        }
        pc+=1;
    }
    return res;
}

vector<int> review_vec(vector<string> tokens, int& pc) {
//    cout << "review_vec -----" << endl;
    string token = tokens.at(pc);
//    cout << "TOKEN: " << token << endl;
    pc+=1;
    if (token=="[") {
        vector<int> res;
        int v = review_int(tokens.at(pc));
        res.push_back(v);
        pc+=1;
        while (true) {
            string ope = tokens.at(pc);
            pc+=1;
            if (ope==",") {
                v = review_int(tokens.at(pc));
                res.push_back(v);
                pc+=1;
            } else if (ope=="]") {
                break;
            }
        }
        return res;
    } else {
        return vec_values.at(token);
    }
}

void print_vec(vector<int> vec) {
    cout << "[ ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << " ";
    }
    cout << "]" << endl;
}

vector<int> review_compression_vec(vector<string> tokens, int& pc) {
//    cout << "review_comporession_vec ------" << endl;
    vector<int> res = review_vec(tokens, pc);
    while(true) {
//        cout << "NOW: ";
//        print_vec(res);
        string ope = tokens.at(pc);
//        cout << "ope: " << ope << endl;
        if (ope=="+") {
            pc+=1;
            vector<int> target = review_vec(tokens, pc);
            rep (i, res.size()) {
                res[i]+=target[i];
            }
//            pc+=1;
        } else if (ope=="-") {
            pc+=1;
            vector<int> target = review_vec(tokens, pc);
            rep (i, res.size()) {
                res[i]-=target[i];
            }
//            pc+=1;
        } else if (ope==";") {
            break;
        }
    }
    return res;
}

void print_vec_string(vector<string> vec) {
    cout << "[ ";
    int i = 0;
    while (true) {
        cout << vec.at(i) << " ";
        i++;
        if (i < vec.size()) {
            cout << ", ";
        } else {
            cout << "]" << endl;
            return;
        }
    }
}

void solve(int N, string code) {
    vector<string> tokens = lexer(code);

//    print_vec_string(tokens);


    rep(i, tokens.size()) {
        string t = tokens.at(i);
//        cout << "DEBUG: " << t << endl;
        if (t=="int") {
            i+=1;
            string name = tokens.at(i);
            i+=2;
            int val = review_compression_int(tokens, i);
            int_values[name] = val;
        } else if (t=="print_int") {
            i+=1;
            int val = review_compression_int(tokens, i);
            cout << val << endl;
        } else if (t=="vec") {
            i+=1;
            string name = tokens.at(i);
            i+=2;
            vector<int> val = review_compression_vec(tokens, i);
            vec_values[name] = val;
        } else if (t=="print_vec") {
            i+=1;
            vector<int> val = review_compression_vec(tokens, i);
            print_vec(val);
        }
    }
}

int main() {
    int N;
    cin >> N;
    string code;
    rep(i, N+1) {
        string line;
        getline(cin, line);
        code+=line+" ";
    }

//    cout << code << endl;

//    cout << "------- START ------" << endl;

    solve(N, code);

    return 0;
}
