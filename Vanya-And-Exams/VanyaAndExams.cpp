#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;



int main (){
    

    vector<pair<long long,long long>> grades;
    long long number_of_exams;
    long long max_grade;
    long long sum = 0;
    long long essays_needed = 0;
    long long avg , needed_grades;
    cin >> number_of_exams >> max_grade >> avg;

    for(int i=0;i<number_of_exams;i++)
    {
        long long grade , number_of_essays;
        cin >> grade >> number_of_essays;
        sum += grade;
        grades.push_back({number_of_essays,grade});
    }

    needed_grades = (avg*number_of_exams)-sum;
    sort(grades.begin(),grades.end());
    long long i = 0;
    while (needed_grades > 0 && i<grades.size())
    {
        long long number = min(needed_grades,max_grade-grades[i].second);
        needed_grades -= number;
        essays_needed += number * grades[i].first; 
        i++;
        
    }
        
    cout << essays_needed;
    

}
