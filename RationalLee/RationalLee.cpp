#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--)
    {
        vector<long long> integers;
        vector<long long> gifts;
        int ones_occurances = 0;
        int n ,k ;
        long long sum =0;
        cin >> n >> k;
        while(n--)
        {
            long long number;
            cin >> number;
            integers.push_back(number);
        }
        while(k--)
        {
            long long number;
            cin >> number;
            gifts.push_back(number);
        }
        sort(integers.begin(),integers.end(),greater<int>());
        sort(gifts.begin(),gifts.end());
        
        for(int i=0;i<gifts.size();i++)
        {
            sum+=integers[i];
            gifts[i]--;
        }
            
        int size = gifts.size();
        for(int i=0;i<gifts.size();i++)
        {
            if(gifts[i]==0)
            {
                sum+=integers[ones_occurances];
                ones_occurances++;
            }
            else 
            {
                sum+=integers[size+gifts[i]-1];
                size = size +gifts[i];
            }
                
                
        }
            
        cout << sum << endl;

    }


}