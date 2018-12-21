template<typename T> T mulmod(T a,T b)
{
    T res=0; a=a%mod;
    while(b)
    {
        if(b&1)
        res = (res+a)%mod;
        b>>=1;
        a = (a+a)%mod;
    }
    return res;
}
