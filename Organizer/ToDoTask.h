#ifndef TODO_TASK_H
#define TODO_TASK_H
#include <iostream>
#include "Date.h"
using namespace std;

class ToDoTask {
private:
	string Task;
	Date date;
	bool isCompleted;
public:
	ToDoTask() :
		Task("EmptyTask"), isCompleted(false)
	{}
	ToDoTask(string Task) :
		Task(Task), isCompleted(false)
	{}

	bool getisCompleted() {
		return isCompleted;
	}
	void setisCompleted(bool complt) {
		isCompleted = complt;
	}

	string getTask() {
		return Task;
	}
	void setTask(string newTask) {
		Task = newTask;
	}

	void showTask() {
		cout << "Task: " << endl;
		cout << Task << endl;
		cout << "Date: " << endl;
		date.showTime();
		cout << "IsCompleted: " << endl;
		if (isCompleted)
			cout << "Well done!" << endl;
		else
			cout << char(215) << endl;
	}

	Date getDate() {
		return date;
	}
};
#endif // TODO_TASK_H