// https://www.geeksforgeeks.org/linked-list-set-1-introduction/

#include <iostream>

// Создать контейнер для элемента списка
class Node 
{
public:
    // Значение хранимое 
    int data;
    // Ссылка указатель на ссылку
    Node* next;
};

void printList(Node* n)
{
    while (n != nullptr)
    {
        std::cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    // З контейнера в памяти где то ...
    head = new Node();
    second = new Node();
    third = new Node();

    // Нагрузить контейнер

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;


    printList(head);

    return 0;

}