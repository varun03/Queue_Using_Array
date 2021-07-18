#include "OwnQueue.h"

OwnQueue::OwnQueue() :front(-1),
rear(-1)
{

}

void OwnQueue::enqueue(int data)
{
	if (rear == MAXSIZE-1)
	{
		cout << "Queue size is full" <<endl;
	}
	else if ((front == -1))
	{
		front = rear = 0;
		queue[rear] = data;
	}
	else
	{
		rear = rear+1;
		queue[rear] = data;
	}
}

void OwnQueue::dequeue()
{
  if ((rear == -1))
	{
		cout << "Queue size is empty" << endl;
	}
	else
	{
		constexpr int length = sizeof(queue) / sizeof(queue[0]) - 1;
		int temp[length];
		int j = 0;
		int deldata = queue[front];
		
		for (int i = front+1; i<= rear; i++)
		{
			temp[j] = this->queue[i];
			j++;
		}

		for (int i = 0; i <= rear; i++)
		{
			this->queue[i] = temp[i];
		}

		rear = rear - 1;
		cout << "deque data " << deldata << endl;
	}
}

int OwnQueue::peek()
{
	return queue[front];
}

bool OwnQueue::isempty()
{
	if (rear == -1)
	{
		return true;
	}

	return false;
}

bool OwnQueue::isfull()
{
	if (rear == MAXSIZE-1)
	{
		return true;
	}
	return false;
}

void OwnQueue::printqueue()
{
	for (int i =0 ; i <= rear; i++)
	{
		cout << "data in queue " << queue[i] << endl;
	}

}
