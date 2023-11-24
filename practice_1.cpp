#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

bool compare(Student a, Student b)
{
    // Compare based on reversed sections
    return a.s > b.s;
}

int main()
{
    int n;
    cin >> n;
    Student *arr = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
    }
    sort(arr, arr + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << endl;
    }

    delete[] arr; 

    return 0;
}
