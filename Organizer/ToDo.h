#pragma once
#include <iostream>
#include <vector>
#include "ToDoTask.h"
#include "Date.h"
using namespace std;

class ToDo {
private:
	vector<ToDoTask> Tasks;
	int TaskCount;
public:
	ToDo() : TaskCount(0) {}

	void addTask(string Task) {
		Tasks.push_back(Task);
		TaskCount += 1;
	}
	void deleteTask(int index) {
		Tasks.erase(Tasks.begin() + index);
		TaskCount -= 1;
	}
	void editTask(int index, string newTask) {
		Tasks[index].setTask(newTask);
	}
	void changeStatus(int index, bool status) {
		Tasks[index].setisCompleted(status);
	}

	void showAll() {
		for (int i = 0; i < TaskCount; i++)
		{
			Tasks[i].showTask();
		}
	}
	void showCompleted() {
		for (int i = 0; i < TaskCount; i++)
		{
			if (Tasks[i].getisCompleted())
				Tasks[i].showTask();
		}
	}
	void showUncompleted() {
		for (int i = 0; i < TaskCount; i++)
		{
			if (!Tasks[i].getisCompleted())
				Tasks[i].showTask();
		}
	}
	void showByDate(Date date) {
		for (int i = 0; i < TaskCount; i++)
		{
			if (Tasks[i].getDate().getYear() == date.getYear() &&
				Tasks[i].getDate().getMonth() == date.getMonth() &&
				Tasks[i].getDate().getDay() == date.getDay())
			{
				Tasks[i].showTask();
			}

		}
	}
};