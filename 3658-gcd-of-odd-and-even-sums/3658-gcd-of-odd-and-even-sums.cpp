class Solution {
public:
    int gcd(int a, int b) {
        while( b!= 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }

        return a;
    }
    int gcdOfOddEvenSums(int n) {
        int Odd = 1;
        int sumOdd = 1;
        int Even = 2;
        int sumEven = 2;

        for(int i=1; i<n; i++) {
            Odd += 2;
            Even += 2;
            sumOdd += Odd;
            sumEven += Even;
        }

        return gcd(sumEven, sumOdd);
    }
};