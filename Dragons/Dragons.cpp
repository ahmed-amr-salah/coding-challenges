#include <iostream>
#include <map>


using namespace std;

int main(){

    int strength , number_of_dragons;
    cin >> strength >> number_of_dragons;
    multimap<int,int,greater<>> dragons;
    int size = number_of_dragons;
    while(number_of_dragons--)
    {
        int x , y;
        cin >> x >> y;
        dragons.insert({y,x});
    }
    
    while (size--)
    {
        for (auto itr = dragons.begin(); itr != dragons.end(); ++itr) 
        {
            if (itr->second < strength) 
            {
                strength += itr->first;
                dragons.erase(itr);
                break;
            }
        }
    }

    if (dragons.empty())
        cout << "YES";
    else 
        cout << "NO";
    

}
