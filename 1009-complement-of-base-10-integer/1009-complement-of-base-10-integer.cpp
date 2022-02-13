class Solution {
public:
    int bitwiseComplement(int n) {
        int comp=0;
   int count=0;
   if(n==0)
   {
       return 1;
   }
    else
   {
    while(n)
    {
      if((n&1)==0)
        comp = comp + pow(2,count)*1;
    
      ++count;
      n>>=1;
    }
    }
    return comp;
    }
    
        
};