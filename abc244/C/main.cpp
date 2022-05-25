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

int output(int N, vector<int>& nums, int& went) {
    if (std::count(nums.begin(), nums.end(), went)==0) {
        nums.push_back(went);
        return went;
    } else {
        went++;
        return output(N, nums, went);
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> nums;
    int went = 1;
    while (true) {
        cout << output(N, nums, went) << endl;
        int n;
        cin >> n;
        nums.push_back(n);
        if (n==0)
            return 0;
    }
}
