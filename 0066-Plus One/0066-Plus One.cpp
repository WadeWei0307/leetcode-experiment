class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    bool carryBit = false;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (i == digits.size() - 1 && digits[i] == 9) { //個位數是9
            carryBit = true;
            digits[i] = 0;
        }
        else if (digits[i] == 9 && carryBit) { //十位數以上有9且有進位
            digits[i] = 0;
        }
        else {
            carryBit = false;
            digits[i] += 1;
            break;
        }
    }
    if (carryBit)
        digits.insert(digits.begin(), 1);
    return digits;
    }
};