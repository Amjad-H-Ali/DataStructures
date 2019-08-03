#include "./SharedPtr/SharedPtr.h"

#ifndef NODE_H

#define NODE_H

/* * * * * * * * * * * * * * * * * * * * * * * *
 *		   									   *
 * 	 Generic Node to create a Singly Linked-   *
 *   List. No destructor needed. Resources     *
 *   delete on their own.					   *
 *											   *					   
 * * * * * * * * * * * * * * * * * * * * * * * */

template<typename T>

struct Node {

	/*
	 +++++ Pointer to T object +++++
	 */

	SharedPtr<T> value;

    /*
     +++++ Pointer to next and prev node in linked list ++++++
     */

	SharedPtr < Node<T> > next;

	/*
	 +++++ Main C'tor. Takes in ptr to initialize SharedPtr to T Object . +++++
	 */

	Node<T>(T *ObjPtr = nullptr)

		:value(ObjPtr), next(nullptr)
    {}

}; // Node

#endif