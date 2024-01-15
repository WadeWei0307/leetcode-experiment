class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unsigned int shift = 1; //用來判定每個bit是1是0
        int count; //用來記錄有幾個數字該bit為1
        unsigned int ans = 0; 
        for (int i = 0; i < 32; i++) { //32個bits
            count = 0;
            for (auto num : nums) {
                if (num & shift) //判斷該bit是否為1
                    count++;
            }
            if (count % 3 != 0) {//如果count為0，表示每個num該bit都是0也會被整除；如果沒被3整除，則表示獨立的數字該bit為1
                ans |= shift; //將bit用or組起來
            }
            shift <<= 1; //左移換檢查下一個bit
        }
        return ans;        
    }
};