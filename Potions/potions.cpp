#include <iostream>
#include <queue>

using namespace std;


int main(){

    int number_of_potions;
    long long sum=0;
    priority_queue<int,vector<int>,greater<>> potions;
    cin >> number_of_potions;
    while(number_of_potions--)
    {
        int new_potions;
        cin >> new_potions;
        potions.push(new_potions);
        sum += new_potions;
        if(sum<0)
        {
            sum -= potions.top();   
            potions.pop();
        }
            
    }

    cout << potions.size() << endl;

}