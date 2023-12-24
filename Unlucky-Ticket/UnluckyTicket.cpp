#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main (){

string ticket_number;
vector<int> first;
vector<int> second;
int n;
cin >> n;
cin >> ticket_number;

for(int i=0;i<n;i++)
{
    first.push_back((int)ticket_number[i]-'0');
    second.push_back((int)ticket_number[i+n]-'0');        
}

sort(first.begin(),first.end());
sort(second.begin(),second.end());
bool greater = 0;
bool flag = 0;

if (first[0] > second[0])
    greater = 1;

for(int i=0;i<n;i++)
{
    if(greater && first[i] < second[i])
        flag = 1;
    else if (!greater  && first[i] > second[i])
        flag = 1;   
}

if (flag)
    cout << "NO" << endl;
else 
    cout << "YES" << endl;

}