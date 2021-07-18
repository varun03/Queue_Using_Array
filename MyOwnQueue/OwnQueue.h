#pragma once
#include<iostream>
using namespace std;

#define MAXSIZE 5

class OwnQueue
{
	int front, rear;
	int queue[MAXSIZE];

public :
	OwnQueue();
	void enqueue(int data);
	void dequeue();
	int peek();
	bool isempty();
	bool isfull();
	void printqueue();
};