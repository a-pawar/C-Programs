#include <iostream>
using namespace std;
class student
{
public: 
    static int nextid;
    int id;
    student()
    {
        id = ++nextid;
    }
};
int student::nextid = 0;
int main()
{
    student s1, s2, s3;
    cout << s1.id << endl;
    cout << s2.id << endl;
    cout << s3.id << endl;
    return 0;
}