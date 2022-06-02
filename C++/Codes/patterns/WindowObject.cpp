#include <iostream>


class Window
{
private:
    /* data */

    int x = 2;
    int y = 2;

public:

    void init();
    void print_p();
    void print_h();
    void print_v();
    
    void print_box();

    void set_v(int n) { x = n; };
    void set_h(int n) { y = n; };

    Window(int i);
    ~Window();
};

Window::Window(int i)
{   
    x = i;
    std::cout << "Create obj Window\n";
}

Window::~Window()
{
    std::cout << "Destroy obj Window\n";
}


void Window::init()
{
    std::cout << "Init Window\n";
}

void Window::print_p()
{
    // Print properties
    std::cout << "\n^^^^^^^^Properties^^^^^^^^\n";
    std::cout << "X:" << x << "\n";
    std::cout << "Y:" << y << "\n";

}

void Window::print_h()
{
    /*
        Print horizontal lines of box.
    */

    for (int h=0; h<=x; h++ )
        {
            std::cout << "*";
        }
    std::cout << "\n";
}


void Window::print_v()
{

    /*
        Print vertical lines of box, fill empty space.
    */

    for (int w=0; w<=y; w++ )
    {
        for (int h=0; h<=x; h++ )
        {
            if (h == 0 | h == x)
            {
                std::cout << "|";
            }
            else
            {
                std::cout << ".";
            }
            
        }
    

        std::cout << "\n";
    }
      

}


void Window::print_box()
{

    /*
        Print box, show description box
    */

    print_p();

    print_h();

    print_v();

    print_h();
  
}



int main()
{

    Window W(10);

    W.init();
 

    W.print_box();

    
    W.set_v(40);
    W.set_h(10);



    W.print_box();

    return 0;
}