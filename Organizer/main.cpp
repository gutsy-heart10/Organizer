#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"ToDo.h"
#include"ToDoTask.h"
using namespace std;

int main() {
	ToDo toDo;
	
	toDo.addTask("Work is completed!");
	toDo.showAll();
}