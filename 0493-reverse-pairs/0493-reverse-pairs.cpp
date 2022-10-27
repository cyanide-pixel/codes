#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class K, class V> using ordered_map = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;
 
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        ordered_set<int>s;
        
        int ans=0;
        for(int i=n-1;i>=0;i--){
            int p;
            if(nums[i]>0)
             p=((long)nums[i]+1)/2;
            else 
                p=((long)nums[i])/2;
            int z=s.order_of_key(p);
            ans+=z;
            s.insert(nums[i]);
        }
        return ans;
    }
};