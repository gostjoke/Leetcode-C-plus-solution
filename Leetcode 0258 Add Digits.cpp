/*
07/14/2023
This my first C++ solution,
As C++ beginner, it is a great step for myself,
I believe one day I will write something better than python can did.
*/

class Solution {
public:
    int addDigits(int num) {
        int sum =0;
        while(num)
        {
            sum+=(num%10);
            num/=10;
        }
        if (sum<10)
            return sum;
        else
            return addDigits(sum); 
    }
};
