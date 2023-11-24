#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int total_marks;
    int math_marks;
    int eng_marks;
};

bool compare(Student a, Student b)
{
    if (a.total_marks > b.total_marks)
    {
        return true;
    }
    else if (a.total_marks < b.total_marks)
    {
        return false;
    }
    else
    {
        return a.id < b.id;
    }
}

int main()
{
    int n;
    cin >> n;
    Student *arr = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;

        arr[i].total_marks = arr[i].math_marks + arr[i].eng_marks;
    }
    sort(arr, arr + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }
    delete[] arr;
    return 0;
}
