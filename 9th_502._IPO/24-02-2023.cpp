class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n= profits.size();
        vector<pair<int, int>> projects(n);
        for(int i=0; i<n; i++)
            projects[i]={profits[i], capital[i]};
        sort(projects.begin(), projects.end());
        int i=0;
        priority_queue<int>PQ;

        while(k--){
            while(i<n && projects[i].second<=w){
                PQ.push(projects[i].first);
                i++;
            }
            if(!PQ.empty()){
                w+=PQ.top();
                PQ.pop();
            }
        }
    return w;
        
    }
};
