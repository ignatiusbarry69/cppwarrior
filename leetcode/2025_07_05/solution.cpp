#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

struct LuckyNumberAnalyzer {
    // std::vector<int> arr;
    std::unordered_map<int, int> freqMap;
    
    LuckyNumberAnalyzer(const std::vector<int>& input) {
        for (int num : input) {
            freqMap[num]++;
        }
    }

    int getMaxLucky() {
        int maxLucky = -1;
        auto checkLucky = [&](const std::pair<const int, int>& p) {
            if (p.first == p.second) {
                maxLucky = std::max(maxLucky, p.first);
            }
        };
        std::for_each(freqMap.begin(), freqMap.end(), checkLucky);
        return maxLucky;
    }
};

struct Solution {
    int findLucky(std::vector<int>& arr) {
        LuckyNumberAnalyzer analyzer(arr);
        return analyzer.getMaxLucky();
    }
};

int main() {
    Solution solution;
    std::vector<int> arr = {2, 2, 3, 4};
    int result = solution.findLucky(arr);
    std::cout << "Lucky number: " << result << std::endl; // Expected output: 2
    return 0;
}
