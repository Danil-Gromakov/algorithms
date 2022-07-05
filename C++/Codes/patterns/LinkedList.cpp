// https://www.geeksforgeeks.org/linked-list-set-1-introduction/
// https://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/



#include <iostream>

// Создать контейнер для элемента списка
class Node 
{
public:
    // Значение хранимое 
    int data;
    // Ссылка указатель на ссылку ( Это и есть ссылка на Экземпляр класс объект Node )
    Node* next;
};

void printList(Node* n)
{
    // third->next = nullptr;
    while (n != nullptr)
    {
        std::cout << n->data << " ";
        n = n->next;
    }
}

void push(Node** head_ref, int new_data)
{   
    // 1. Создать элемент списка
    Node* new_node = new Node();

    // 2. Добавить значение в элемент
    new_node->data = new_data;

    // 3.Добавить ссылку на элемент
    new_node->next = (*head_ref);

    // 4. переназначить head элемент
    (*head_ref)  = new_node;
}   

int main()
{
    // Создали ссылки на пустое место в памяти .
    Node* head = nullptr;
    
    // Инициализировали экземпляры и подвязали к ним ссылки, на занимаемую объектом память.
    head = new Node();
    
    push(&head,1);
    push(&head,2);
    push(&head,3);
    

    printList(head);

    return 0;

}