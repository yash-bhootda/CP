class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> avail;
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> use;

        int n = servers.size();
        int m = tasks.size();
        vector<int> ans(m);

        for (int i = 0; i < n; i++) {
            avail.push({servers[i], i});
        }

        long long time = 0;

        for (int i = 0; i < m; i++) {
            time = max(static_cast<long long>(i), time);
            if (avail.empty()) {
                time = use.top().first;
            }

            while (!use.empty() && use.top().first <= time) {
                auto [useTime, index] = use.top();
                avail.push({servers[index], index});
                use.pop();
            }
            auto [server, index] = avail.top();
            use.push({time + tasks[i], index});
            ans[i] = index;
            avail.pop();
}
        return ans;
    }
};
