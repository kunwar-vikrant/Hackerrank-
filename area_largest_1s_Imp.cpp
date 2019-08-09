#include<vector>
#include<iostream>

using namespace std;

void dfs(vector<int> a[],int i,int j,int n,int m, int &count){
    
    //point out of array
    if(i<0 || i>=n || j<0 || j>=m ||a[i][j]==0) 
        return;
    

    count++;

    a[i][j]=0;
    dfs(a,i+1,j,n,m,count);
    dfs(a,i-1,j,n,m,count);
    dfs(a,i,j+1,n,m,count);
    dfs(a,i,j-1,n,m,count);
    dfs(a,i+1,j+1,n,m,count);
    dfs(a,i-1,j-1,n,m,count);
    dfs(a,i-1,j+1,n,m,count);
    dfs(a,i+1,j-1,n,m,count);
    
}


int main()
 {
    //code
    int t;
    cin>>t;
    while(t--){
        
        int n,m;
        cin>>n>>m;
        vector<int> v[n];
        
        for(int i=0;i<n;i++){
            vector<int> temp(m);
            v[i] = temp;
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        int result = 0, c;
        for(int i = 0; i < n; i++){
            
            for(int j = 0; j < m; j++){
                
                c = 0;
                if(v[i][j] == 1){
                    c++;
                    dfs(v,i,j,n,m,c);
                    
                    result = max(result, c);
                }
            }
        }
        cout<<result-1<<endl;
    }
    return 0;
}