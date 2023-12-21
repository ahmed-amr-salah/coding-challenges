#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;


int main(){

vector<int> DSC_sorted;
vector<int> ASC_sorted;
vector<int> result;
int n;
cin >> n;

while(n--)
{
    int number;
    cin >> number;
    DSC_sorted.push_back(number);
    ASC_sorted.push_back(number);
}

sort(DSC_sorted.begin(),DSC_sorted.end(),greater());
sort(ASC_sorted.begin(),ASC_sorted.end());
int number_of_evens = DSC_sorted.size()/2;
int number_of_odds = DSC_sorted.size() - number_of_evens;
int counter = 0;
bool flag;
while (number_of_evens > 0|| number_of_odds > 0)
{   
    if(number_of_odds-->0)
    {
        result.push_back(ASC_sorted[counter]);   
    }
        
    if(number_of_evens-->0)
    {
        if(result[result.size()-1] > DSC_sorted[counter])
        {
            cout << "Impossible" ;
            return 0;
        }
        result.push_back(DSC_sorted[counter]);
    }
        
    counter++;
}



for(auto number:result)
    cout << number << " ";
}