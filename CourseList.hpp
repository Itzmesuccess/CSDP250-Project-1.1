#ifndef CourseList_h
#define CourseList_h

#include <string>

using namespace std;

class CourseList
{
private:

    struct CourseNode
    {
        string courseCode;

        int creditHours;

        char grade;

        CourseNode* next;
    };

    CourseNode* head;

public:

    CourseList();

    ~CourseList();

    void addCourse(const string& courseCode, int creditHours, char grade);

    void deleteCourse(const string& courseCode);

    void deleteAllNodes();

    void displayList() const;

};

#endif 
