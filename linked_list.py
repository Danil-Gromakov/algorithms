


class Node():
    '''Блок связный список'''

    def __init__(self) -> None:
        self.data = None      # Данные в блоке 
        self.reference = None # Указатель на следующий блок, это место где хранится другой блок 
        

    def set(self,x) -> None:

        '''Связать блоки A -- > B'''

        last = Node() # Создать пустой блок
        last.data = x # Назначить данные в блок

        # Пока блок last - это блок B, и блок A не сcылается на B
        # current = self # Доступ к блоку A, текущий контекст
        while self.reference: # Проверим A на наличие ссылки на B, если есть, то сменить текущий контекст на следующий
            self = self.reference
        # После перебора всех ссылок на объекты, мы упёрлись в None - нет ссылок на следущий объект
        self.reference = last

    def get(self,get_index) -> object:
        '''вернуть по индексу элемент'''


        last_reference = self.reference
        index_reference = 0

        while index_reference <= get_index:

            if index_reference == get_index:
                print(f'by index: {get_index} get data: {last_reference.data}')
                return last_reference.data

            index_reference = index_reference + 1 

            last_reference = last_reference.reference
        
ll = Node()


ll.set(1)
ll.set(2)
ll.set(3)
ll.set(4)


ll.get(0)

while ll.reference:
    
    print(ll.reference.data,end=',')    
    ll = ll.reference

print('\n')



'''
https://habr.com/ru/company/otus/blog/470828/
https://github.com/AlterJD/HZL/blob/master/linkedList.py
https://medium.com/nuances-of-programming/%D0%BE-%D1%81%D0%B2%D1%8F%D0%B7%D0%BD%D0%BE%D0%BC-%D1%81%D0%BF%D0%B8%D1%81%D0%BA%D0%B5-%D0%BF%D0%BE%D0%B4%D1%80%D0%BE%D0%B1%D0%BD%D0%BE-9acb5e476f3
https://pythonist.ru/svyaznyj-spisok-na-python-chto-eto-takoe-i-kak-ego-realizovat/

Cвязный список – это структура данных.

Связный список обеспечивает возможность создать двунаправленную очередь
из каких-либо элементов. Каждый элемент такого списка считается узлом.
По факту в узле есть его значение, а также две ссылки – на предыдущий и на последующий узлы. 
То есть список «связывается» узлами, которые помогают двигаться вверх или вниз по списку. 
Из-за таких особенностей строения из связного списка можно организовать стек, очередь или двойную очередь.


[ Объект1 ] указывает на -- > [ Объект2 ], в переменной каждого объекта, все завязано на хранение объектов в памяти.
Это похоже на указатель и ссылку в С++

* Проверять содержится ли в нем тот или иной элемент;
* Добавлять узлы в конец;
* Получать значение узла по индексу;
* Удалять узлы.

Важно помнить при работе с кодом:
    В С++ и С элемент, хранящий адрес ячейки памяти, мы называем Pointer (указатель).
    В Java, Python его же мы называем Reference (ссылкой).
    Для хранения деталей узла в С мы используем Struct (структуры), а в C++, Java или Python — Class (класс).
    В C и C++ в последнем узле адрес обозначается как nil (ноль), а в Python как None (нет).

'''
