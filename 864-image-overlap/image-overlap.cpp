class Solution {
  public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2){
        int n = img1.size();
        int ans =0;
        for (int row=-n+1;row<n;row++){
            for (int col= -n+1;col<n;col++){
                int count =0;
                for(int i= 0;i<n;i++){
                    for(int j=0;j<n;j++){
                        int X=i+row;
                        int Y=j+col;

                        if(X<0 || X>=n || Y<0 || Y>=n){
                            continue;
                        }
                        if(img1[i][j]==1&& img2[X][Y]==1){
                        count++;}
                        
                    }
                }ans = max(ans, count);
            }
        }
        return ans;
    }                    
};

                    