class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 0)
            nums1 = nums2;
        int x = m - 1;
        int y = n - 1;
        int currentIndex = m+n-1;
        while(x!=-1&&y!=-1){
            if(nums2[y]>=nums1[x]){
                nums1[currentIndex] = nums2[y];
                y-=1;
                currentIndex-=1;
            }
            else{
                swap(nums1[currentIndex], nums1[x]);
                x-=1;
                currentIndex-=1;
            }
        }
        for(int i = 0; i <= y; i++){
            nums1[i] = nums2[i];
        }
    }
};