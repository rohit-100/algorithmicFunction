int fact[1000005];
int inv[1000005];
void calcFact()
{
    fact[0]=1;
    for(int i=1;i<1000005;i++)
    fact[i]=i*1LL*fact[i-1]%mod;
}
void clacInv()
{
    inv[1000004]=power(fact[1000004],mod-2);
    
    for(int i=1000003;i>=0;i--)
    inv[i]=inv[i+1]*1LL*(i+1)%mod;
}
template<typename T> Tcnr(T n,T r)
{
    return (fact[n]*1LL*inv[r]%mod)*inv[n-r]%mod;
}

below code is compiled with ideone
/*

template<typename T> T power(T a,T b)
{
	
    T res=1;
    while(b)
    {
        if(b&1)
        res = res*1LL*a%mod;
        b>>=1;
        a = a*1LL*a%mod;
    }
    return res;
}
void calcFact()
{
    fact[0]=1;
    for(int i=1;i<1000005;i++)
    fact[i]=i*1LL*fact[i-1]%mod;
}
void clacInv()
{
	calcFact();
    inv[1000004]=power(fact[1000004],mod-2);
   // cout<<inv[1000004]<<endl;
    for(int i=1000003;i>=0;i--)
    inv[i]=inv[i+1]*1LL*(i+1)%mod;
}
*/
