class Solution {
    vector<vector<int>>grid;
    vector<int>low,dist,parent;
    vector<vector<int>>ans;
    int time = 0;
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        grid.resize(n);
        low.resize(n,-1);
        dist.resize(n,-1);
        parent.resize(n,-1);
        for(auto a : connections) {
            grid[a[0]].push_back(a[1]);
            grid[a[1]].push_back(a[0]);
        }
        dfs(0);
        return ans;
    }

    void dfs(int u) {
        low[u] = dist[u] = time;
        time++;
        for(int v: grid[u]) {
            if(parent[v]== -1) {
                parent[v] = u;
                dfs(v);
                if(low[v] > dist[u]) {
                    ans.push_back({u,v});
                }
                low[u] = min(low[v], low[u]);
            } else if(v != parent[u]) {
                low[u] = min(low[v], low[u]);
            }
        }
    }
};
