#include <iostream>
         #include <vector>
         #include <string.h>
         #include <sstream>
         typedef unsigned long long int lli;
         #define sz(a) lli((a).size())
         #define pb push_back
         #define all(c) (c).begin(),(c).end()
         #define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
         #define present(c,x) ((c).find(x) != (c).end())
         #define cpresent(c,x) (find(all(c),x) != (c).end())
         #include <stdio.h>
         #include <set>
         #include <algorithm>
         #include <numeric>
         #include <stack>
        #include <list>
        #include <queue>
         #define MOD 1000000007
         #include <math.h>
         using namespace std;
         typedef vector<lli> vi;
         typedef vector<vi> vvi;
         typedef pair<lli,lli> ii;

         int main()
         { lli t;
         scanf("%lld",&t);
         while(t--)
         { lli a,b,n;
         scanf("%lld %lld %lld",&a,&b,&n);
         if(n%2==0)
         {printf("%lld\n",max(a,b)/min(a,b));}
         else
         { a=a*2;
         printf("%lld\n",max(a,b)/min(a,b));}



         }




         }
