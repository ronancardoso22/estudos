#include <stdio.h>

float serieS(float n)){
    int i,k;

      for(i = 0;i<n;i++)
        {
            scanf("%d",&k);

            for(float j = 1; j <= k ;j++)
            {
                return serieS(((j*j)-1)/2);
            }
            
        }
}

int main()
{
    
    float n,k;
    

    scanf("%d",&n);

    

    printf("%.2f\n",serieS(n));
    
    return 0;
}