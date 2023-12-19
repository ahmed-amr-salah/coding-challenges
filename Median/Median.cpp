#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

map<int,int> freq;
map<int,int> index;
vector<int> sorted_array;
int n , x;
int current_index;
int output_size;
int exist = 0;
cin >> n >> x;
while(n--)
{
    int number;
    cin >> number;
    sorted_array.push_back(number);
    freq[number]++;
}
if(freq[x]==0)
{
    sorted_array.push_back(x);
    exist++;   
}
    

sort(sorted_array.begin(),sorted_array.end());
int median_index = (sorted_array.size() +1) / 2;
int distance_to_median = 0 ;
for(int i=0;i<sorted_array.size();i++)
{
    if(sorted_array[i]==x)
    {        
        current_index = i+1;
        distance_to_median = median_index - current_index; 
        if (distance_to_median < 0)
            distance_to_median = abs(distance_to_median) +1;
        index.insert({distance_to_median,current_index});
    }
}
current_index = index.begin()->second;
int before = current_index -1;
int after = sorted_array.size() - current_index;
int difference  = before - after;

if(difference<0)
    cout << (abs(difference) -1)+exist;
else 
    cout << difference + exist;

}