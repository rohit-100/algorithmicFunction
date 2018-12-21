int seive[1000005];
vector<int>primes;
void clacSeive()
{
    for(int i=0;i<1000005;i++) seive[i]=1;
        
    for(int i=2;i<1000005;i++)
    {
        if(seive[i])
        {
            for(int j=i*i;j<1000005;j+=i)
            seive[i]=0;
            primes.push_back(i);
         }
    }
}
    
