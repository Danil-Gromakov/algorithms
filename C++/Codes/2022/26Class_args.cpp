
#include <iostream>
using namespace std;


// определение класса 

class queue
{
private:
    
    int a;
    int b;
    int who;

public:
    queue(int id);  // конструктор 
    ~queue(); // деструктор


    int geta();
    int getwho();
};

queue::queue( int id )
{
    a = 10;
    b = 20;
    who = id;

    cout << "Очередь инициализирована" << "\n";
}

queue::~queue()
{
    cout << "Очередь разрушена.\n";
}

int queue::geta()
{
    cout << "a " << a << "\n";

    return a;
}

int queue::getwho()
{
    cout << "who " << who << "\n";

    return who;
}

int main()

{
    cout << "Class\n";


    queue x (199); // Создание двух объектов класса queue.
    
    x.geta();
    x.getwho();

    return 0;
}