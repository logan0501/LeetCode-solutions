class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0,h=letters.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(letters[mid]>target){
                h=mid-1;
            }else l=mid+1;
        }
        if(letters[l]>target)return letters[l];
        else return letters[0];
    }
};