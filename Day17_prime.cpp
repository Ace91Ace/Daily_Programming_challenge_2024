class Solution {  
public:  
    vector<int> AllPrimeFactors(int N) {  
        vector<int> fact;  
        int i = 2;  

        while (i <= sqrt(N)) {  
            if (N % i == 0) {  
                fact.push_back(i);  
                while (N % i == 0) {  
                    N /= i; 
                    fact.push_back(i);
                }  
            } else {  
                i++;  
            }  
        }  

        if (N > 1) {  
            fact.push_back(N);  
        }  

        return fact;  
    }  
};
