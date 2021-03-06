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
#include <math.h>
using namespace std;


void solve(long long N){
    long near = N * 0.92592592592;
    for (long i = near-100; i <= near+100; i++) {
//        cout << "DEBUG " << i << endl;
        if (floor(i * 1.08) == N) {
            cout << i << endl;
            return;
        }
    }
    cout << ":(" << endl;
}

// Generated by 2.12.0 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    std::scanf("%lld", &N);
    solve(N);
    return 0;
}
