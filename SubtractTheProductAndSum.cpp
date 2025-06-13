#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            product *= digit;
            sum += digit;
            n /= 10;
        }

        return product - sum;
    }
};

int main() {
    Solution s1;
    int result = s1.subtractProductAndSum(234);
    cout << "The answer is " << result << endl;
    return 0;
}
