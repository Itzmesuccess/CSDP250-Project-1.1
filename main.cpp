#include <iostream>

#include "CourseList.h"

using namespace std;

int main() 
{
    CourseList courseList;

    int choice;

    string courseCode;

    int creditHours;

    char grade;

    do {
        // Display menu

        cout << "\nMenu:\n";

        cout << "1. Enter course\n";

        cout << "2. Delete course\n";

        cout << "3. Delete all courses\n";

        cout << "4. Display course list\n";

        cout << "5. Exit\n";

        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {

        case 1:

            cout << "Enter course code: ";

            cin >> courseCode;

            cout << "Enter credit hours: ";

            cin >> creditHours;

            cout << "Enter grade: ";

            cin >> grade;

            courseList.addCourse(courseCode, creditHours, grade);

            cout << "Course added successfully.\n";

            break;

        case 2:

            cout << "Which code do you want deleted: ";

            cin >> courseCode;

            courseList.deleteCourse(courseCode);

            cout << "Course deleted successfully.\n";

            break;

        case 3:

            courseList.deleteAllNodes();

            cout << "All courses deleted successfully.\n";

            break;

        case 4:

            cout << "Course List:\n";

            courseList.displayList();

            break;

        case 5:

            cout << "Exiting program.\n";

            break;

        default:

            cout << "Wrong choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
