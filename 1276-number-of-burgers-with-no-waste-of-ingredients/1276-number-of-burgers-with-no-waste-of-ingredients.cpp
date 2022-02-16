class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        
        if(tomatoSlices == 0 && cheeseSlices == 0) return {0,0}; 
         if(tomatoSlices % 2 != 0 || cheeseSlices >= tomatoSlices) return {};
         if(tomatoSlices == 0 || cheeseSlices==0) return {};
        
          float jumbo_bur = 0, small_bur = 0;
          
          small_bur = (float) ((4 * cheeseSlices) - (tomatoSlices)) / 2;
          jumbo_bur = (float)cheeseSlices - small_bur;
          if(small_bur < 0 || jumbo_bur < 0) return {};
          
        
          vector<int> ans;
          ans.push_back((int) jumbo_bur);
          ans.push_back((int) small_bur);
          return ans;
    }
};