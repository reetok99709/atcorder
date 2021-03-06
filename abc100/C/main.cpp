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


void solve(long long N, std::vector<long long> a){
    int count = 0;
    while (true) {
        bool is_end = true;

//        cout << "BEFORE ";
//        for (auto val : a)
//            cout << val << ", ";
//        cout << endl;

        for (int i=0; i < a.size(); i++) {
            long v = a.at(i);
            if (v%2==0 && is_end) {
                a.at(i) = v/2;
                is_end = false;
            } else {
                a.at(i) = v*3;
            }
        }

//        cout << "AFTER ";
//        for (auto val : a)
//            cout << val << ", ";
//        cout << endl;

//        cout << "FLAG: " << is_end << endl;

        if (is_end) {
            cout << count << endl;
            return;
        } else {
            count+=1;
        }
    }
}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> a(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &a[i]);
    }
    solve(N, std::move(a));
    return 0;
}
