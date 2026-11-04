class Solution{	
	public:
		vector<char> frequencySort(string& s){
            unordered_map<char , int> m;
            vector<char>r;
			for(int i=0 ; i<s.size() ; i++){
                m[s[i]]++;
            }
            while(m.size()>0){
                int max_value=0;
                char key;
                 for(auto x:m){
                    if(x.second>max_value){
                        max_value=x.second;
                        key=x.first;
                    }else if (x.second == max_value && x.first < key) {
                                   key = x.first;
                        }
               }
               r.push_back(key);
               m.erase(key);    
            }
            return r;
		}
};
//Frequency counting: O(n)
//Finding maximum repeatedly: O(k²)
//Total: O(n + k²)



//optimised by sorting which gves o(n+klogk)
class Solution {
public:
    vector<char> frequencySort(string& s) {

        // Step 1: Count frequency
        unordered_map<char, int> m;

        for (char c : s) {
            m[c]++;
        }

        // Step 2: Transfer map entries into vector
        vector<pair<char, int>> v(m.begin(), m.end());

        // Step 3: Sort by frequency, then alphabetically
        sort(v.begin(), v.end(), [](auto a, auto b) {
            if (a.second != b.second)
                return a.second > b.second;

            return a.first < b.first;
        });

        // Step 4: Store characters in result
        vector<char> result;

        for (auto x : v) {
            result.push_back(x.first);
        }

        return result;
    }
};
