int toitent[1000005]
void calcToitent()
{
     for(int i=0;i<1000005;i++) toitent[i]=i;
     
     for(int i=2;i<1000005;i++)
     {
        if(toitent[i]==i)
        {
            toitent[i]=i-1;
            for(int j=i+i;j<1000005;j+=i)
            toitent[j]=(toitent[j]*1LL*(i-1))/i;
        }
     }
}

        


