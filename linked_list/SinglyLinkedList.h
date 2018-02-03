#ifndef _KEL_S_LINKED_LIST_H_
#define _KEL_S_LINKED_LIST_H_

#include <cstddef> // std::size_t
#include <iostream> // std::cout, std::endl


template <class T>
class SinglyLinkedList
{
public:

    typedef T* Iterator;

    SinglyLinkedList();
    ~SinglyLinkedList();


    Iterator begin();
    const Iterator begin() const;
    
    Iterator end();
    const Iterator end() const;

    // Add a node to the back of the list
    void push_back(const &T input);

    // Remove a node from the back of the list
    void pop_back();

    // Add a node to the front of the list
    void push_head(const &T input);

    // Remove a node from the front of the list
    void pop_head();

    // Insert data at position
    void insert(const &T data, unsigned int position);


    void remove(unsigned int position);

    Node* get_head() const;

    Node* get_tail() const;

    std::size_t get_size() const;

    bool is_empty() const;

    Node* get_node(unsigned int position) const;

    void print() const;


    //size() num of elements
    //erase(index) remove node at index 
    //get_value_from_back(n) get value of node at nth position from end
    //reverse() reverse list
    //remove_value(value) remove first encounter of value

private:
    template <class T>
    struct Node
    {  
        T data;
        Node *next;
    }   

    Node<T> *head;
    Node<T> *tail;
    std::size_t size;
};

#endif //_KEL_S_LINKED_LIST_H_