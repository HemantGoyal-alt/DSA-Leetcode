class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        // Step 1: Count the frequency of each digit
        vector<int> freq(10, 0);

        for (int digit : digits) {
            freq[digit]++;
        }

        int count = 0;
        for (int num = 100;num<=999;num++){
            if (num%2!=0){
                continue;
            }
            int n = num;
            int a = n%10;
            n /=10;
            int b = n%10;
            n /=10;
            int c= n%10;
            vector<int>need(10,0);
            need[a]++;
            need[b]++;
            need[c]++;
            bool posible = true;
            for (int d=0;d<=9;d++){
                if(need[d]>freq[d]){
                    posible=false;
                    break;
                }
            }
            if (posible){
                count++;
            }
        }
        return count ;
    }
};