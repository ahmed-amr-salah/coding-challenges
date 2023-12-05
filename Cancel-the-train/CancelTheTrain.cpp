#include <iostream>
#include <set>
using namespace std;


int main() {
  
int number_of_testcases;
cin >> number_of_testcases;

while(number_of_testcases--)
{
    set<int> train_numbers;
    int n , m;
    cin >> n;
    cin >> m;
    int trains_sum = n + m;
    while(n--)
    {
        int temp;
        cin >> temp;
        train_numbers.insert(temp);
    }
    while(m--)
    {
        int temp;
        cin >> temp;
        train_numbers.insert(temp);
    }
    int cancelled_trains = trains_sum - train_numbers.size();
    cout << cancelled_trains << endl;
}
}
