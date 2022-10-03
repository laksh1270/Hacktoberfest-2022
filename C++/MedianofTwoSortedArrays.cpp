#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums3.begin());
        double ma = 0;
        int t = nums3.size();
        if(t%2==0)
        {
            ma = nums3[(t/2)-1]+nums3[(t/2)];
            ma = ma/2;
        }
        else
        {
            ma = nums3[(t-1)/2];
        }
        return ma;
    }

int main(){
  vector<int> v1;
  vector<int> v2;
    int n1,n2;
    cin>>n1>>n2;
    for (int i = 0; i < n1; ++i)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
  for (int i = 0; i < n2; ++i)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
  cout<<findMedianSortedArrays(v1,v2)<<endl;
  return 0;
}
