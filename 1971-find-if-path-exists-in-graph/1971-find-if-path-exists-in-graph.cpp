class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        int i, size = edges.size();

        //neighborhood 
        for(i=0; i<size; i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        vector<int>visited(n,0);
        visited[source] =1;

        queue<int>q;
        q.push(source); // starting from source

        while(!q.empty())
        {
            // get next node in queue
            int node = q.front();
            q.pop();

            // check for destination
            if(node == destination)
            {
                return true;
            }

            // add all connections to queue
            for(auto it : adj[node])
            {
                if(visited[it] == 0)
                {
                    visited[it] =1;
                    q.push(it);
                }
            }

        }
        return false;

    }
};