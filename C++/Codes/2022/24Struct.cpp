
#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 100;

struct inv_type
{
    /* data */

    char item[40]; // наименование товара
    double cost; // стоимость
    double retail; // розничная цена
    int on_hand; // имеющееся в наличии количество
    int lead_time; // число дней до пополнения запасов

} invtry[SIZE];


int menu();

void init_list();
void enter();
void display();
void update();
void input(int x);

int main()
{

    strcpy(invtry[1].item, "orange");
    
    cout << invtry[1].item << "\n";
    cout << *invtry[1].item << "\n";

    return 0;

    // char choice;
    // init_list();

    // for (;;){
    //     choice = menu();

    //     switch (choice)
    //         {
    //         case 'e': enter();
    //             break;
    //         case 'd': display();
    //             break;
    //         case 'u': update();
    //             break;
    //         case 'q': return 0;
            
    //         }
    // }
}

    

 

void init_list()
{
    
    for ( int t=0; t<SIZE; t++) *invtry[t].item = '\0';
}


int menu()
{
    char ch;
    cout << '\n';
    do {
    cout << "(E)nter\n"; // Ввести новый элемент.
    cout << "(D)isplay\n"; // Отобразить всю ведомость.
    cout << "(U)pdate\n"; // Изменить элемент.
    cout << "(Q)uit\n\n"; // Выйти из программы.
    cout << "Выберите команду: ";
    cin >> ch;

}while(!strchr("eduq", tolower(ch)));
    return tolower(ch);
}


void enter(){
    cout << "😼 enter" << "\n";

    int i;

    // Находим первую свободную структуру.
    for ( i = 0; i < SIZE; i++)
    {
        if ( ! *invtry[i].item) break;
    }

    // Если массив полон, значение i будет равно SIZE.
    if(i==SIZE){
        cout << "Список полон. \n";
        return;
    }

    input(i);
    
}

// Ввод информации

void input(int i){
    cout << "Товар: ";
    cin >> invtry[i].item;

    cout << "Стоимость: ";
    cin >> invtry[i].cost;
    
    cout << "Розничная цена: ";
    cin >> invtry[i].retail;
    
    cout << "В наличии: ";
    cin >> invtry[i].on_hand;
    
    cout << "Время до пополнения запасов (в днях): ";
    cin >> invtry[i].lead_time;
}


// Отображение на экране инвентарной ведомости.
void display(){
cout << "😼 display" << "\n";
int t;
for(t=0; t<SIZE; t++ ) {
if(*invtry[t].item) {
cout << invtry[t].item << '\n';
cout << "Стоимость: $" << invtry[t].cost;
cout << "\nB розницу: $";
cout << invtry[t].retail << '\n';
cout << "В наличии: " << invtry[t].on_hand;
cout << "\nДо пополнения осталось: ";
cout << invtry[t].lead_time << " дней\n\n";
}
}
}


// Модификация существующего элемента.
void update()
{
    cout << "😼 update" << "\n";
int i;
char name[80];
cout << "Введите наименование товара: ";
cin >> name;
for(i=0; i<SIZE; i++)
if(!strcmp(name, invtry[i].item)) break;
if(i==SIZE) {
cout << "Товар не найден.\n";
return;
}
cout << "Введите новую информацию.\n";
input(i);
}