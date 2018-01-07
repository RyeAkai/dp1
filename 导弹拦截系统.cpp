#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=1000+5;
int A[N],f[N];
int main()
{
    int n;
    while(scanf("%d",&n)==1&&n)
    {
        for(int i=1;i<=n;i++)
            scanf("%d",&A[i]);
        //memset(f,1,sizeof(f));
        for(int i=1;i<=n;i++)
        {
            f[i]=1;
            for(int j=1;j<i;j++)
            {
                //   8 3 6 10 20 1 14
                if(A[j]>=A[i]&&f[j]+1>f[i])
                {
                    printf("A[i]: %d\n",A[i]);
                    printf("A[j]: %d\n",A[j]);
                    printf("f[j]: %d\n",f[j]);
                    printf("f[i]: %d\n",f[i]);
                    f[i]=f[j]+1;
                }

            }
        }
    printf("%d\n",*max_element(f+1,f+n+1));
    }
    return 0;
}
