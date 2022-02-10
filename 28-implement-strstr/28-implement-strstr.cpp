class Solution {
    #define ll long long int
    #define mm 1000000007
public:
    int strStr(string s, string x) {
        
        ll n=s.size(),z=0,m=x.size(),i;
        if(m==0)
            return 0;
        if(m>n)
            return -1;
        vector<ll>h(n,0),p(n,0);
        p[0]=1;
        for(i=1;i<n;i++)
            p[i]=(p[i-1]*31)%mm;
        h[0]=s[0]-'a'+1;
        for(i=1;i<n;i++){
            h[i]=(h[i-1]+((s[i]-'a'+1)*1ll*p[i])%mm)%mm;
                                                                    
            
        }
        for(i=0;i<m;i++)
        {
            z=(z+(x[i]-'a'+1)*1ll*p[i])%mm;
        }
        cout<<z<<endl;
        for(i=0;i<n;i++)
            cout<<h[i]<<" ";
        cout<<endl;
        if(h[m-1]==z)
            return 0;
        for(i=1;i<=n-m;i++)
        {
            ll d=(h[i+m-1]-h[i-1]+mm)%mm;
            
            ll rr=(z*1ll*p[i])%mm;
            
            if(d==rr)
                return i;
        }
        return -1;
    }
};