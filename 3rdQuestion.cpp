#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<int> threeDivisors(vector<long long> query, int q)
{
    vector<int> count(q, 0);
    int a;
    for (int i = 0; i < q; i++)
    {
        for (int j = 2; j <= query[i]; j++)
        {
            int f = sqrt(j);
            if (j % f == 0)
            {
                for (int k = 2; k <= (f); k++)
                {
                    if (f % k == 0)
                        a = 1;
                }
                if (a != 1)
                    count[i]++;
            }
        }
    }
    return count; // Write your code here
}
int main()
{
    vector<long long> quer = {6};
    int q = 1;
    vector<int> vect= threeDivisors(quer, q);
    for(int i=0;i<q;i++){
        cout<<vect[i];
    }
    return 0;
}