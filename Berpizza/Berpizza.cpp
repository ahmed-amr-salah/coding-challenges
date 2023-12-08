#include <iostream>
#include <map>
using namespace std;


int main (){

multimap<int,int,greater<>> customers;
map<int,int> served;
int customer_counter=1;
int current_customer=1;
int nuumber_of_operations;
cin >> nuumber_of_operations;

while(nuumber_of_operations--)
{
    int op;
    cin >> op;
    if(op==1)
    {
        int value;
        cin >> value;
        customers.insert({value,customer_counter++});
    }
    else if (op==2)
    {
        while(served[current_customer])
            current_customer++;
        served[current_customer]=1;
        cout << current_customer << " ";
    }
    else if(op==3)
    {
        while(served[customers.begin()->second])
            customers.erase(customers.begin());
        served[customers.begin()->second]=1;
        cout << customers.begin()->second << " ";
    }
}


}