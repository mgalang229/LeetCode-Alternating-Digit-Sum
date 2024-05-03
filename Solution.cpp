class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> vec;
        while (n > 0) {
            vec.push_back(n % 10);
            n /= 10;
        }
        reverse(vec.begin(), vec.end());
        int sum = 0;
        for (int i = 0; i < vec.size(); i++) {
            if (i % 2 == 1) {
                vec[i] *= -1;
            }
            sum += vec[i];
        }
        return sum;
    }
};
