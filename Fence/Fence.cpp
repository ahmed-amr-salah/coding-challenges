#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

int main(){

int fence_size , k;
cin >> fence_size >> k;
vector<int> suffix_fence(fence_size);
vector<int> minmum_fence(fence_size);
int counter = 0;
while(fence_size--)
{
    
    int number;
    cin >> number;
    if (!counter)
        suffix_fence[counter] = number;
    else 
        suffix_fence[counter] = suffix_fence[counter-1] + number;
    counter++;
}

for(int i=0;i<suffix_fence.size();i++)
{
    if (i<k-1)
        minmum_fence[i] = INT_MAX;
    else if (i==k-1)
        minmum_fence[i] = suffix_fence[i];
    else 
        minmum_fence[i] = suffix_fence[i] - suffix_fence[i-k];
}

int minmum = minmum_fence[0];
int index_minmum;
for(int i=0;i<minmum_fence.size();i++)
{
    if (minmum_fence[i]<minmum)
    {
        minmum = minmum_fence[i];
        index_minmum = i;
    }
        
}

cout << (index_minmum + 2) - k << endl;

}