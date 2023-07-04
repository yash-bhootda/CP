class Solution {
public:
    string reorganizeString(string s) {
        map<char, int> charFreq;
        for (int i = 0; i < s.size(); i++) {
            charFreq[s[i]]++;
        }

        priority_queue<pair<int, char>> pq;

        for (auto entry : charFreq) {
            pq.push({entry.second, entry.first});
        }
        
        string rearrangedString = "";
        while (!pq.empty()) {
            int frequency1 = pq.top().first;
            char char1 = pq.top().second;
            pq.pop();
            
            if (frequency1 && rearrangedString.empty() || rearrangedString.back() != char1) {
                rearrangedString.push_back(char1);
                frequency1--;
            }
            
            if (pq.empty()) {
                break;
            }
            
            int frequency2 = pq.top().first;
            char char2 = pq.top().second;
            pq.pop();
            
            if (frequency2 && rearrangedString.back() != char2) {
                rearrangedString.push_back(char2);
                frequency2--;
            }
            
            if (frequency1 > 0) {
                pq.push({frequency1, char1});
            }
            
            if (frequency2 > 0) {
                pq.push({frequency2, char2});
            }

            if (pq.empty()) {
                break;
            }
        }
        
        if (rearrangedString.size() != s.size()) {
            return "";
        }
        
        return rearrangedString;
    }
};
