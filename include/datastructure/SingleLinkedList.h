#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H

#include <iostream>
#include <stdexcept>

/*************************************************************************
** File       : Circular_queue.h                                          *
** Project    : Data_structure and Algorithim                             *
** Author     : Alie Eldeen                                               *
** Date       : 13.01.25                                                  *
** Email      : alieldeen81@gmail.com                                     *
**                                                                        *                                                                          *    
** This file contains the definition of the Circular_queue class,         *
** which implements a basic queue data structure using a dynamic array.   *
** The circular queue supports common operations such as enqueu, deqeue   *                            
** as well as utility methods for checking if the queue is empty or full. *
**                                                                        *
**************************************************************************/

namespace datastructure 
{
    class Node
    {
        public:
            int key;            // The key value for linked list
            int data;           // The data inside linked list
            Node * next;        // The pointer to next Node 

            // Defualt constructor for Node 
            Node();

            // Paramaterized constructor for Node 
            Node (int k, int d);
    };

    class SingleLinkedList
    {

        public:
            //Head of the linked list
            Node* head;

            /* Constructor of the singleLinkedList */ 
            SingleLinkedList();

            /* Paramterized Constructor of the single linked list withe Node paramter*/
            SingleLinkedList(Node *n);        


            /*********************************************************
            * brief : Check the Node exsist by key                   *
            * Arguments : integer value for key to search by it      *
            * return : Nullptr  : if it is Not exsist.               *
            *        : ptr of node : if it is exsist.                *
            *********************************************************/
            Node * nodeExist(int k);

            /*********************************************************
            * brief : Add a new node to the end of the linked list   *
            * Arguments : Pointer to Node that will be added         *
            * return : void                                          *
            *********************************************************/
            void appendNode(Node *n);

            /*********************************************************
            * brief : Add a new node to the first of the linked list *
            * Arguments : Pointer to Node that will be added         *
            * return : void                                          *
            *********************************************************/
            void prependNode(Node*n);

            /************************************************************
            * brief : Insert a new node to the first of the linked list *
            * Arguments : Pointer to Node that will be added            *
            * return : void                                             *
            *************************************************************/
            void insertNode(Node*n,int k);

            /*************************************************************
            * brief : Delete a node to by the key                        *
            * Arguments : Pointer to Node that will be added             *
            *           : integer to key of the node                     *
            * return : void                                              *
            *************************************************************/
            void deleteNodeByKey(int k);

            /*************************************************************
            * brief :     Update a node to by the key value              *
            * Arguments : integer to key of the node 
            *           : integer to the data value                         *
            * return : void                                              *
            *************************************************************/
            void updateNodeByKey(int k ,int d);

            /*************************************************************
            * brief : Print the whole linked list                        *
            * Arguments : integer to key of the node                     *
            * return : void                                              *
            *************************************************************/
            void print();
       
    };
}
#endif