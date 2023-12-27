#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

vector<int> arr;
vector<long long> arr_suffix_sum;
vector<int> sorted_arr;
vector<long long> sorted_arr_suffix_sum;
int size_of_array;
cin >> size_of_array;
while(size_of_array--)
{
    int number;
    cin >> number;
    arr.push_back(number);
    sorted_arr.push_back(number);
}

sort(sorted_arr.begin(),sorted_arr.end());

for(int i=0;i<sorted_arr.size();i++)
{
    if(!i)
    {
        sorted_arr_suffix_sum.push_back(sorted_arr[i]);
        arr_suffix_sum.push_back(arr[i]);
    }
    else 
    {
        sorted_arr_suffix_sum.push_back(sorted_arr[i]+sorted_arr_suffix_sum[i-1]);
        arr_suffix_sum.push_back(arr[i]+arr_suffix_sum[i-1]);
    }
}

int n;
cin >> n;
while(n--)
{
    int q , l , r;
    cin >> q >> l >> r;
    if(q==2)
        cout << (sorted_arr_suffix_sum[r-1] - sorted_arr_suffix_sum[l-1]) + sorted_arr[l-1]  << endl;
    else
        cout << (arr_suffix_sum[r-1] - arr_suffix_sum[l-1])+ arr[l-1]<< endl;

}



}