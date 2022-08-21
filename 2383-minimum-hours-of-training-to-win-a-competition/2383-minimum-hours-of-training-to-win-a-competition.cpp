class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& exp) {
        int hrs = 0;
        
        for(int i=0; i<exp.size(); i++) {
            
            if(initialEnergy<=energy[i]) {
                hrs+=energy[i] - initialEnergy+1;
                initialEnergy = energy[i]+1;
            }
            
            if(initialExperience<=exp[i]) {
                hrs += exp[i] - initialExperience+1;
                initialExperience += (exp[i]-initialExperience)+1;
            }
            
            initialExperience+=exp[i];
            initialEnergy-=energy[i];
        }
        return hrs;
    }
};