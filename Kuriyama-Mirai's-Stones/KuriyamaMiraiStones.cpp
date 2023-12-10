#include <iostream>
#include <vector>
#include <set>

using namespace std;


int main (){

    vector<int> stones_cost;
    vector<int> max_cost;
    vector<int> max_sorted;
    multiset<int> sorted_cost;
    vector<int> sorted;
    int number_of_stones;
    int previous;
    cin >> number_of_stones;

    while(number_of_stones--)
    {
        int number;
        cin >> number;
        stones_cost.push_back(number);
        sorted_cost.insert(number);
        if(stones_cost.size()==1)
            max_cost.push_back(number);
        else 
            max_cost.push_back(number+max_cost.back());

    }

   for (auto itr = sorted_cost.begin(); itr != sorted_cost.end(); itr++) 
    {
        if(max_sorted.size()==0)
        {
            max_sorted.push_back(*itr);
            sorted.push_back(*itr);
            previous = *itr;
        }
        else
        {
            max_sorted.push_back(*itr+previous);
            sorted.push_back(*itr);
            previous = *itr;
        }

    }

    int number_of_queries;
    cin >> number_of_queries;
    while (number_of_queries--)
    {
        int type , l , r;
        cin >> type >> l >> r;
        if(type==1)
            cout << (max_cost[r-1]-max_cost[l-1])+stones_cost[l-1] << endl;
        else
            cout << (max_sorted[r-1]-max_sorted[l-1])+sorted[l+1]<< endl;

    }


}