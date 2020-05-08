#include <iostream>
#include <vector>
using namespace std;

#if 0
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = m--+--n;
        while(n>=0){
            nums1[k--] = m>=0 && nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];
        }
        cout << nums1.size() << endl;
        for(k=0;k<nums1.size();k++){
            cout << nums1[k];
        }
        cout << endl;
    }
};
#endif


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int tag = m+n-1,i=m-1,j=n-1;
        while(i>=0&&j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[tag] = nums1[i];
                i--;
                cout << "i--" << i << endl;
            }else{
                nums1[tag] = nums2[j];
                j--;
                cout << "j--" << j << endl;
            }
            cout << nums1[tag] << endl;
            tag--;
        }
        if(i<0){
            while(j>=0){
                nums1[tag] = nums2[j];
                j--;
                tag--;
            }
        }else{
            while(i>=0){
                nums1[tag] = nums1[i];
                i--;
                tag--;
            }
        }
        for(i=0;i<m+n;i++){
            cout << nums1[i];
        }
    }
};

int main() {
    vector<int> nums1;
    vector<int> nums2;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums2.push_back(4);
    nums2.push_back(5);
    nums2.push_back(6);
    Solution s;
    s.merge(nums1,nums1.size(),nums2,nums2.size());
//    for(int i=0;i< nums1.size();i++){
//        cout << nums1[i];
//    }
    return 0;
}