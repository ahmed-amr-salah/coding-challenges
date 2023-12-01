#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {

int n;
int m;
cin >> n;
cin >> m;
queue<int> students;
queue<int> students_indexes;
stack<int> back_to_home;
for(int i=0;i<n;i++)
{
    int temp;
    cin >> temp;
    students.push(temp);
    students_indexes.push(i+1);
}

while(!students.empty())
{
    if(students.front()<=m)
    {
        back_to_home.push(students_indexes.front());
        students.pop();
        students_indexes.pop();
    }
    else
    {
        int front = students.front();
        int index = students_indexes.front();
        front = front - m;
        students.pop();
        students_indexes.pop();
        students.push(front);
        students_indexes.push(index);
    }
}
cout << back_to_home.top() << endl;
}