class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int high = 0;
        int ans = 0;

        unordered_map<int, int> mp;

        while (high < fruits.size()) {

            // current fruit ko window me add karo
            mp[fruits[high]]++;

            // agar 2 se zyada types ho gaye
            while (mp.size() > 2) {
                mp[fruits[low]]--;

                if (mp[fruits[low]] == 0) {
                    mp.erase(fruits[low]);
                }

                low++;
            }

            // valid window
            ans = max(ans, high - low + 1);

            high++;
        }

        return ans;
    }
};