void bfs(int u, vector<bool> &visited, vector<int> adj[], vector<int> &dist){

    visited[u] = true;
    queue<int> q;
    q.push(u);
    
    while(!q.empty()){

        int x = q.front();
        q.pop();
        for(auto v : adj[x]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
                dist[v] = dist[x]+6;  
            }
        }
        // level++;
    }
}

vector<int> bfs(int n, int m, vector<vector<int>> edges, int s) {

    vector<bool> visited(n+1, false);
    vector<int> adj[n+1];

    for(int i = 0; i < edges.size(); i++){
         // handles duplicate input
    if(find(adj[edges[i][0]].begin(), adj[edges[i][0]].end(), edges[i][1])                                          !=adj[edges[i][0]].end())
            continue;
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    vector<int> dist(n+1, 0);
    bfs(s, visited, adj, dist);
    
    vector<int> v;
    for(int i = 1; i <= n; i++){

        if(i != s){
            if(dist[i] == 0){
                v.push_back(-1);
            }
            else{
                v.push_back(dist[i]);
            }
        }

    }
    return v;

}