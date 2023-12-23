#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

    vector<pair<int,int>> rank_list;
    vector<int> rank_occurances;
    int n,k;
    cin >> n >> k;
    while(n--)
    {
        int p , t;
        cin >> p >> t;
        pair<int,int> tuple = make_pair(p,-t);
        rank_list.push_back(tuple);
    }    
    sort(rank_list.begin(),rank_list.end(),greater());
    rank_occurances.push_back(-1);
    int counter=1;
    for(int i=0;i<rank_list.size();i++)
    {   
        if(i==rank_list.size()-1)
            rank_occurances.push_back(counter);
        else if(rank_list[i].first == rank_list[i+1].first && rank_list[i].second == rank_list[i+1].second)
        {
            rank_occurances.push_back(0);
            counter++;
        }
        else
        {
            rank_occurances.push_back(counter);
            counter = 1;
        }       
    }

    // for(auto pair:rank_list)
    //     cout << pair.first << ":" << pair.second << endl;
    // for(auto number:rank_occurances)
    //     cout << number << endl;

    if(rank_occurances[k]!=0)
        cout << rank_occurances[k];
    else
    {
        for(int i=k+1;i<rank_occurances.size();i++)
        {
            if(rank_occurances[i]!=0)
            {
                cout << rank_occurances[i];
                break;
            }
                
        }

    }

}