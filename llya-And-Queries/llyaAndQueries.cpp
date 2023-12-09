#include <iostream>
#include <vector>

using namespace std;

int main(){

string input;
cin >> input;
vector<int> consecutive_array;
vector<int> max_array;
for(int i=0;i<input.size();i++)
{
    if(i==input.size())
    {
        consecutive_array.push_back(0);
        max_array.push_back(max_array[i-1]+consecutive_array[i]);
    }
    else 
    {
        if(input[i]==input[i+1])
            consecutive_array.push_back(1);
        else 
            consecutive_array.push_back(0);
        
        if(i==0)
            max_array.push_back(consecutive_array[i]);
        else 
            max_array.push_back(max_array[i-1]+consecutive_array[i]);
    }
}

int number_of_queries;
cin >> number_of_queries;
while(number_of_queries--)
{
    int l , r;
    cin >> l >> r;
    cout << ((max_array[r-1]-max_array[l-1])+consecutive_array[l-1])-consecutive_array[r-1] << endl;
}


}
