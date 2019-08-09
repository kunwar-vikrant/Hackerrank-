void bfs_list(int s, vector<int> adj[], bool vis[])
{
    // Your code here
    vis[s] = 1;
    queue<int> q;
    int u;
    q.push(s);
    
    while(!q.empty()){
        
        u = q.front();
        cout<<u<<" ";
        q.pop();
        for(auto i : adj[u]){
            
            if(vis[i] != 1){
                // cout<<i<<" ";
                q.push(i);
                vis[i] = 1;
            }
        }
    }
    
}


void bfs(int i){

	visited[i] = 1;
	q.enqueue(i);
    cout<<"Vectex:"<<i;

	while(!q.empty()){

		int u = q.front();
		q.pop();
		
		for(int v = u; v <= n; v++){
			if(A[u][v] == 1 && visited[v] != 1){
				cout<<v<<" ";
				q.enqueue(v);
				visited[v] = 1;
			}
		}
	}
}