// MyOwnQueue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"OwnQueue.h"


int main()
{
    std::cout << "MY.. QUEUE!\n" << endl;
    OwnQueue queue;
    queue.dequeue();
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(0);
    queue.enqueue(40);
    cout << queue.peek() << endl;
    queue.enqueue(50);
    queue.enqueue(70);
    cout << queue.isempty() << endl;
    cout << queue.isfull() << endl;
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    cout << queue.peek() << endl;
    queue.dequeue();
    queue.dequeue();

    cout << queue.isempty() << endl;
    cout << queue.isfull() << endl; 

    queue.printqueue();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
