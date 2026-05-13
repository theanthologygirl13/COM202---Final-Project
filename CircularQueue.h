#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

#include <iostream>
#include "Car.h"

#define MAX 5

using namespace std;

class CircularQueue {
private:
    Car arr[MAX];
    int front;
    int rear;
    int count;

public:

    CircularQueue();

    bool isEmpty();
    bool isFull();

    void enqueue(Car value);
    void dequeue();

    void display();
};

#endif