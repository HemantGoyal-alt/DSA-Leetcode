class Solution {
public:
    int maxPalindromes(string s, int k) {
    int n = s.size();
    if (k == 1) return n;   // every single char is a palindrome of length 1, so answer = n

    int res = 0;

    for (int i = 0; i <= n - k;) {   // scan through the string
        int step = 1;                 // default: if nothing found, just move by 1

        for (int d : {k, k + 1}) {    // try length k first, then k+1
            if (i + d <= n &&                                    // must fit in string
                equal(s.begin() + i, s.begin() + i + (d >> 1),    // compare first half...
                      s.rbegin() + (n - (i + d))))                // ...to reversed second half
            {
                step = d;      // found a palindrome of length d starting at i
                res++;         // count it
                break;         // stop checking (don't also try k+1 if k worked)
            }
        }

        i += step;   // jump past this palindrome (or just +1 if nothing found)
    }

    return res;
}
};