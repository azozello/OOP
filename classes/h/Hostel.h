//
// Created by azozello on 08.05.17.
//

#ifndef CAMPUS_HOSTEL_H
#define CAMPUS_HOSTEL_H

#include <vector>
#include <array>
#include "Room.h"
#include "Student.h"
#include "Teacher.h"
#include "Staff.h"

using namespace std;

class Hostel {
public:
    vector<Room> loadRooms();
    vector<Student> loadStudents();
    vector<Staff> loadStaff();
    vector<Room> freeRooms();
    vector<Teacher> loadTeachers();

    void saveRooms(vector<Room> rooms);
    void saveStudents(vector<Student> students);
    void saveTeachers(vector<Teacher> teachers);
    void saveStaff(vector<Staff> staff);

    Hostel();

    void removeStudent(string name, string surname);
    void changeRoom(string name, string surname,int room);

    Room getRoomByNumber(int number);
    void addRoom(Room room);
    void addStudent(Student student);
    void addTeacher(Teacher teacher);
    void addStaff(Staff staff);
};


#endif //CAMPUS_HOSTEL_H
