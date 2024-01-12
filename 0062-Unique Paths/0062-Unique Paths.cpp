class Solution {
public:
    int uniquePaths(int m, int n) {
        int molecular = m-1; //(分子)
        int denominator = n-1; //(分母)
        double sum = 1.0;
        for(int i = 1; i <= molecular; i++){
            sum = sum * (denominator + i) / i;
        }
        return (int)sum;
    }
};