#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> arrangement;
    int n , temp , first_element,last_element;
    cin >> n;
    while(n--)
    {
        int number;
        cin >> number;
        arrangement.push_back(number);
    }
    sort(arrangement.begin(),arrangement.end());
    swap(arrangement[0], arrangement[arrangement.size()-1]);

    for(auto number:arrangement)
        cout << number << " ";

}
