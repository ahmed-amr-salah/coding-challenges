#include <iostream>
#include <deque>
using namespace std;

int main() {

int Q; 
cin >> Q;
deque<int> to_do_list;
int r;
// if r is even , the deque is in the right order 
// if r is odd , the is in the reversed order 
for(int i=0;i<Q;i++)
{
    string command;
    cin >> command;
    if(command=="back")
    {
        
        if(!to_do_list.empty())
        {
            if(r%2==0)
            {
                cout << to_do_list.back()<<endl;
                to_do_list.pop_back();
            }
            else 
            {
                cout << to_do_list.front() << endl;
                to_do_list.pop_front();
            }
            
        }
        else
            cout << "No job for Ada?" <<endl;
    }
    else if (command=="front")
    {
        
        if(!to_do_list.empty())
        {
            if(r%2==0)
            {
                cout << to_do_list.front()<<endl;
                to_do_list.pop_front();
            }
            else 
            {
                cout << to_do_list.back()<<endl;
                to_do_list.pop_back();
            }
            
        }   
            
        else
            cout << "No job for Ada?" <<endl;
    }
    else if(command=="reverse")
    {
       r++;
    
    }   
    else if(command=="push_back")
    {
        int number;
        cin >>number;
        
        if(r%2==0)
            to_do_list.push_back(number);
        else 
            to_do_list.push_front(number);
            
    }
    else if(command=="toFront")
    {
        int number;
        cin >>number;
        if(r%2==0)
            to_do_list.push_front(number);
        else 
            to_do_list.push_back(number);
    }
}

}