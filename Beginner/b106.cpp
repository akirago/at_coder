#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
#include <cstdlib>
#include <math.h>

using namespace std;

typedef long long ll;
#define rep(i, n) for(long (i) = 0; (i) < (long) (n); (i)++)
#define rep1(i,n) for(int i=1;i<=(n);i++)
#define rrep(i,a,b) for(long i=(a);i<(b);i++)
#define rrep1(i,a,b) for(long i=(a);i<=(b);i++)
#define rrrep(i,a,b) for(long i=(a);i>=(b);i--)
#define define pb push_back
#define ALL(obj) (obj).begin(), (obj).end()
#define X first
#define Y second
#define vi vector<int>
#define vl vector<ll>
#define vii vector<vector<int> >

const int INF = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const ll LINF = 1e18;

int printYes() {
    cout << "Yes" << endl;
    return 0;
}

int printNo() {
    cout << "No" << endl;
    return 0;
}

int ans;

int printAns() {
    cout << ans << endl;
    return 0;
}


int pow(int x) {
	if (x == 0) {
		return 1;
	}
	else {
		return pow(x - 1) * 2;
	}
}

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    if (N < 105) {
        cout << 0;
        return 0;
    } else if (N<135)
    {
        cout << 1;
        return 0;
    } else if (N < 165) {
        cout << 2;
        return 0;
    } else if (N<189) {
        cout << 3;
    }else if (N<195) {
        cout << 4;
    } else
    
    {
        cout <<5;
        return 0;
    }
    
    
    return 0;
}
