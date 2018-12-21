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
