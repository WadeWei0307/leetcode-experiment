class Solution {
public:
    int binarySearch(int x, int left, int right){
        if (x < 2)
            return x;
        int middle = (left+right)/2;
        long middleOfSquare = (long)middle*middle;
        if(middleOfSquare == x)
            return middle;
        else if(middleOfSquare < x){ //平方和 < input x
            if((long)(middle+1)*(middle+1) > x) 
                return middle;
            else
                return binarySearch(x, middle+1, right); //binary search concept
        }
        else
            return binarySearch(x, left, middle-1); //binary search concept
    }
    int mySqrt(int x) {
        return binarySearch(x, 1, x/2);
    }
};