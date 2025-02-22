#include "../include/datastructure/SingleLinkedList.h"
#include <iostream>
using namespace std;
/******************************************************************************************
** File       : SingleLinkedList.cpp                                                      *         
** Project    : Data_structure and Algorithim                                             *
** Author     : Alie Eldeen                                                               *
** Date       : 26.01.25                                                                  *
** Email      : alieldeen81@gmail.com                                                     *
**                                                                                        *                                                                            *    
** This file contains the implmentation of the SingleLinkedList class,                    *
** which implements a basic LinkedList data structure using pointers .                    *
** The Linkedlist supports common operations such as append, prepend, delete and update   *                   
** as well as utility methods for checking if the Node is exist or not in Node            *
**                                                                                        *
*******************************************************************************************/

namespace datastructure
{
    Node::Node()
    {
        key = 0;
        data = 0;
        next =NULL;
    }

    Node::Node(int k, int d)
    {
        key = k;
        data = d; 
        next = nullptr;
    }

    SingleLinkedList::SingleLinkedList()
    {
        head = NULL;
    }

    SingleLinkedList::SingleLinkedList(Node *n)
    {
        head = n ;
    }

    Node* SingleLinkedList::nodeExist(int k)
    {
        Node* temp = head;
        Node* ptr = NULL;
        while(temp->next != nullptr)
        {

            if (temp->key == k)
            {
                ptr = temp;
            }
            temp = temp->next;    
        }
        return ptr;
    }
    
    void SingleLinkedList::prependNode(Node*n)
    {
        if (head == nullptr)
        {
            head = n;
        }
        else
        {
            n->next = head; 
            head = n; 
        }
        cout <<"Node has prepended "<<std::endl;

    }

    void SingleLinkedList::appendNode(Node *n)
    {
        if (nodeExist(n->key) != NULL)
        {
            std::cout<<"The node-key is exist please change the key";
            return;
        }

        else
        {

            if (head == NULL)
            {
                head = n;
                std::cout<<"The node has appended"<<std::endl;

            }
            else
            {
                Node * temp = head;
                while(temp->next !=NULL)
                {
                    temp = temp->next;
                }

                temp->next = n;

            }
                n->next = NULL;
                std::cout<<"The node has appended"<<std::endl;
        }

    }
    void SingleLinkedList::insertNode(Node*n,int k)
    {
        Node * ptr = nodeExist(k);
        if (ptr  == nullptr)
        {
            cout<<"The key is not available so we Can't insert this Node to this key";
            return;
        }
        else
        {
            if (nodeExist(n->key) != nullptr)
            {
                cout<<"The key is already exsist with another Node";
                return;
            }

            n->next = ptr->next;
            ptr->next = n;
            cout <<"Node Inserted" <<std::endl;

        }
    }

    void SingleLinkedList::deleteNodeByKey(int k)
    {
        if (head == nullptr)
        {
            cout <<"The list is empty";
            return;
        }
        else if (head != nullptr)
        {
            if (head->key == k)
            {
                head = head->next;
                cout <<"Node unlinked with key values: " <<k <<std::endl;
            }  
            else
            {
                Node * temp = nullptr;
                Node * prev = head;
                Node * curr = head->next;

                while(curr != nullptr)
                {
                    if (curr->key == k)
                    {
                        temp = curr;
                        curr = nullptr;
                    }
                    else
                    {
                        prev = prev->next;
                        curr = curr->next;
                    }
                }
                if (temp != nullptr)
                {
                    prev->next = temp->next ;
                    cout << "Node Unlinked with keys value "<<k<<std::endl;
                }
                else
                {
                    cout <<"Node doesn't exsists"<<std::endl;
                }
            }
     
        }

    }

    void SingleLinkedList::updateNodeByKey(int k,int d)
    {
        Node *ptr = nodeExist(k);
        if (ptr == nullptr)
        {
            cout<<"Node doesn't exsists";
        }
        else
        {
            ptr->data = d ;
            cout <<"Node data updated Sucessfully"<<std::endl;
        }
    }

    void SingleLinkedList::print()
    {
        Node* ptr = head;
        if (ptr == nullptr)
        {
            cout<<"Empty linked list";
        }
        else
        {
            while (ptr->next != nullptr)
            {
                cout << "Node Address: "<<ptr<<std::endl;
                cout << "Node key "<<ptr->key<<std::endl;
                cout << "Node data "<<ptr->data<<std::endl;
                cout << "#############################"<<std::endl;
                ptr =ptr->next;
            }

            cout << "Node Address: "<<ptr<<std::endl;
            cout << "Node key "<<ptr->key<<std::endl;
            cout << "Node data "<<ptr->data<<std::endl;
            cout << "#############################"<<std::endl;

        }
    }

}
