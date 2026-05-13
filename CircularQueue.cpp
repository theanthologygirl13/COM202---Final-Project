#include <iostream>
using namespace std;
#include "Car.h"
#include "CircularQueue.h"


CircularQueue::CircularQueue() {
    front = 0;
    rear = -1;
    count = 0;
}

bool CircularQueue::isEmpty() {
    return (count == 0);
}

bool CircularQueue::isFull() {
    return (count == 5);
}

void CircularQueue::display() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = 0; i < count; i++) {
        int index = (front + i) % 5;
        cout << index << endl;
            cout << "Owner Name: " << arr[index].owner_name << endl;

            cout << "Name: " << arr[index].name << endl;
            cout << "Car Plate: " << arr[index].car_plate << endl;
            cout << "---------------------------------------" << endl;

    
    }

    cout << endl;
}

void CircularQueue::enqueue(Car value) {
    if (isFull()) {
        cout << "Queue is full!" << endl;
        return;
    }
    rear = (rear + 1) % 5;   // wrap around
    arr[rear] = value;
    count++;
    cout << "Enqueued: " << endl;
    value.display();
}

void CircularQueue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return;
    }
    cout << "Dequeued: " << endl;
    arr[front].display();
    front = (front + 1) % 5; // wrap around
    count--;
}
