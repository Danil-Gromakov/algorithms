
#include <iostream>
using namespace std;


// определение класса 

class queue
{
private:
    
    int q[100];
    int sloc,rloc;

public:
    queue();  // конструктор 
    ~queue(); // деструктор

    void qput( int i );

    int qget();
};

queue::queue(/* args */)
{
    sloc = rloc = 0;
    cout << "Очередь инициализирована";
}

queue::~queue()
{
    cout << "Очередь разрушена.\n";
}

void queue::qput( int i)
{
    if (sloc == 100){
        cout << "Очередь заполнена.\n";
        return;
    }

    sloc++;

    q[sloc] = i;
}

int queue::qget()
{
    if(rloc == sloc) {
        cout << "Очередь пуста.\n";
        return 0;
        }
        rloc++;
        return q[rloc];
}


int main()

{
    cout << "Class\n";


    queue a, b; // Создание двух объектов класса queue.
    a.qput(10);
    b.qput(19);
    a.qput(20);
    b.qput(1);
    cout << a.qget() << " ";
    cout << a.qget() << "\n";
    cout << b.qget() << " ";
    cout << b.qget() << "\n";return 0;

    return 0;
}