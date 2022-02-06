class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
         
        stack<int>st;
        
        vector<int>ans;
        
        for(auto i:asteroids){
         
            if(i>0){
                st.push(i);
            }else{
               
                while(st.size()>0 && st.top()>0 &&st.top()<-i){
                    st.pop();
                }
                if(st.size()>0 && st.top() == -i){
                    st.pop();
                }else if(st.size()>0 && st.top()>-i){
                   //
                }else{
                   
                    st.push(i);
                }
            }
        }
        
        
        int n = st.size();
        
        for(int i =0;i<n;i++){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};