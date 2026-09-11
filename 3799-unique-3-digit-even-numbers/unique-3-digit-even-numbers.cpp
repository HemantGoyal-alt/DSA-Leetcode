class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        
        int freq[10] = {0};

        // Count how many times each digit appears
        for (int digit : digits) {
            freq[digit]++;
        }

        int count = 0;

        // Choose the hundreds digit
        for (int first = 1; first <= 9; first++) {

            if (freq[first] == 0)
                continue;

            freq[first]--;

            // Choose the tens digit
            for (int second = 0; second <= 9; second++) {

                if (freq[second] == 0)
                    continue;

                freq[second]--;

                // Choose the units digit
                for (int third = 0; third <= 8; third += 2) {

                    if (freq[third] > 0) {
                        count++;
                    }
                }

                // Put the tens digit back
                freq[second]++;
            }

            // Put the hundreds digit back
            freq[first]++;
        }

        return count;
    }
};