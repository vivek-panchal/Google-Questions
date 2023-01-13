class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        for(int i=0;i<n;i++){
            int start=0;
            int end=n-1;
            while(start<=end){
                swap(image[i][start],image[i][end]);
                start++;
                end--;
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(image[i][j]==1){
                    image[i][j]=0;
                }
                else{
                    image[i][j]=1;
                }
            }
        }

        return image;
    }
};
