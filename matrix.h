#include <vector>
#include <numeric>

using namespace std;
namespace matrix{

    class Solution{

        public:

        long long gridgame(vector<vector<int>> &G);
    };

/*
1. determine i, where first robot will  go down.
2. second robot will either go down or stay up.
3. answer will be max (down[i-1],  up[i+1]) 

*/

    long long Solution::gridgame(vector<vector<int>>&G){
        long long top = accumulate(begin(G[0]), end(G[0]), 0LL), bottom = 0, ans =0;
        
        int n = G[0].size();
        for (int  i =0;i<n;i++){
        top -=  G[0][i];
        ans = min(ans,max(top, bottom));
        bottom += G[1][i];
        }


    }

}