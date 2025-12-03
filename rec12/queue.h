// Queuecomposition.h
// Template Queue class definition with composed List object.
#ifndef QUEUE_H
#define QUEUE_H

#include "list.h" // List class definition

template< typename QUEUETYPE >
class Queue
{
public:
    // enqueue calls queueList object's insertAtBack member function
    void enqueue( const QUEUETYPE &data )
    {
        queueList.insertAtBack( data );
    } // end function enqueue

    // dequeue calls queueList object's removeFromFront member function
    bool dequeue( QUEUETYPE &data )
    {
        return queueList.removeFromFront( data );
    } // end function dequeue

    // isQueueEmpty calls queueList object's isEmpty member function
    bool isQueueEmpty() const
    {
        return queueList.isEmpty();
    } // end function isQueueEmpty

    // printQueue calls queueList object's print member function
    void printQueue() const
    {
        queueList.print();
    } // end function printQueue
private:
    List< QUEUETYPE > queueList; // composed List object
}; // end class Queue

#endif