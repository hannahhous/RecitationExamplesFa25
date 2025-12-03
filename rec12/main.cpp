// stackqueue_exercises.cpp
// Driver program to demonstrate Stack and Queue exercises

#include <iostream>
#include "stack.h"
#include "queue.h"

using namespace std;


void stackExercise1()
{
   cout << "=== Stack Exercise 1: Basic Operations ===\n\n";

   Stack<int> s;
   int value;

   s.push(10);
   cout << "\nadded: 10 \n";
   s.push(20);
   cout << "\nadded: 20 \n";
   s.push(30);
   cout << "\nadded: 30 \n";
   s.push(40);
   cout << "\nadded: 40 \n";
   s.pop(value);
   cout << value;
   s.push(50);
   cout << "\nadded: 50 \n";
   s.push(60);
   cout << "\nadded: 60 \n";
   s.pop(value);



   cout << "\n*** Final Stack Contents (top to bottom): ***\n";
   s.printStack();
   cout << "Answer: 50, 30, 20, 10\n";
}

void stackExercise2()
{
   cout << "=== Stack Exercise 2: Sequence ===\n\n";

   Stack<int> s;
   int value;

   s.push(5);
   cout << "\nadded: 5 \n";
   s.push(15);
   cout << "\nadded: 15 \n";
   s.push(25);
   cout << "\nadded: 25 \n";
   s.pop(value);
   s.push(35);
   cout << "\nadded: 35 \n";
   s.push(45);
   cout << "\nadded: 45 \n";
   s.pop(value);
   s.pop(value);
   s.push(55);
   cout << "\nadded: 55 \n";

   cout << "\n*** Final Stack Contents (top to bottom): ***\n";
   s.printStack();
   cout << "Answer: 55, 15, 5\n";
}

void stackExercise3()
{
   cout << "=== Stack Exercise 3: Complex ===\n\n";

   Stack<int> s;
   int value;

   s.push(100);
   s.pop(value);
   s.push(200);
   s.push(300);
   s.push(400);
   s.pop(value);
   s.pop(value);
   s.pop(value);
   s.push(500);

   cout << "\n*** Final Stack Contents (top to bottom): ***\n";
   s.printStack();
   cout << "Answer: 500\n";
}

void queueExercise4()
{
   cout << "=== Queue Exercise 4: Basic Operations ===\n\n";

   Queue<int> q;
   int value;

   q.enqueue(10);
   q.enqueue(20);
   q.enqueue(30);
   q.enqueue(40);
   q.dequeue(value);
   q.dequeue(value);
   q.enqueue(50);
   q.enqueue(60);
   q.dequeue(value);

   cout << "\n*** Final Queue Contents (front to back): ***\n";
   q.printQueue();
   cout << "Answer: 40, 50, 60\n";
}

void queueExercise5()
{
   cout << "=== Queue Exercise 5: Sequence ===\n\n";

   Queue<int> q;
   int value;


   q.enqueue(5);
   q.enqueue(15);
   q.enqueue(25);
   q.dequeue(value);
   q.enqueue(35);
   q.enqueue(45);
   q.dequeue(value);
   q.dequeue(value);
   q.enqueue(55);

   cout << "\n*** Final Queue Contents (front to back): ***\n";
   q.printQueue();
   cout << "Answer: 35, 45, 55\n";
}

void queueExercise6()
{
   cout << "=== Queue Exercise 6: Complex ===\n\n";

   Queue<int> q;
   int value;

   q.enqueue(100);
   q.dequeue(value);
   q.enqueue(200);
   q.enqueue(300);
   q.enqueue(400);
   q.dequeue(value);
   q.dequeue(value);
   q.dequeue(value);
   q.enqueue(500);

   cout << "\n*** Final Queue Contents (front to back): ***\n";
   q.printQueue();
   cout << "Answer: 500\n";
}

void mixedExercise7()
{
   cout << "=== Mixed Exercise 7: Stack vs Queue Comparison ===\n\n";

   Stack<int> s;
   Queue<int> q;
   int value;

   cout << "--- Performing same operations on both ---\n\n";

   s.push(1);
   q.enqueue(1);

   s.push(2);
   q.enqueue(2);

   s.push(3);
   q.enqueue(3);

   s.pop(value);
   q.dequeue(value);

   s.push(4);
   q.enqueue(4);

   s.pop(value);
   q.dequeue(value);;

   cout << "\n*** Final Contents: ***\n";
   cout << "Stack (top to bottom): "; s.printStack();
   cout << "Queue (front to back): "; q.printQueue();
   cout << "Stack Answer: 3, 1\n";
   cout << "Queue Answer: 3, 4\n";
}

void stackExercise8()
{
   cout << "=== Stack Exercise 8: Tricky ===\n\n";

   Stack<int> s;
   int value;

   s.push(7);
   s.push(14);
   s.push(21);
   s.pop(value);
   s.pop(value);
   s.pop(value);
   s.push(28);
   s.push(35);

   cout << "\n*** Final Stack Contents (top to bottom): ***\n";
   s.printStack();
   cout << "Answer: 35, 28\n";
}

int main()
{

    stackExercise1();
    stackExercise2();
    stackExercise3();
    queueExercise4();
    queueExercise5();
    queueExercise6();
    mixedExercise7();
    stackExercise8();

   return 0;
}
