# include <iostream>
# include <string>

using namespace std;

class ValuePrinter
{
    public:
        void Print(string msg, float f)
        {
            std::cout << msg << ":" << f << std::endl;
        }
        void Print(string msg, int f)
        {
            std::cout << msg << ":" << f << std::endl;
        }
        void Print(string msg, string f)
        {
            std::cout << msg << ":" << f << std::endl;
        }
        
};

class Article
{
    public:

        Article( string title, int pageCount, int wordCount, string author )
        {
            m_title = title;
            m_pageCount = pageCount;
            m_wordCount = wordCount;
            m_author = author;
        }


        string m_title;
        int m_pageCount;
        int m_wordCount;
        string m_author;

        ValuePrinter valuePrinter;

        void ShowDetails()
        {
            valuePrinter.Print("Title",m_title);
            valuePrinter.Print("PageCount",m_pageCount);
            valuePrinter.Print("WordCount",m_wordCount);
            valuePrinter.Print("Author",m_author);  
        }

};

int main()
{
    std::cout << "SRP" << std::endl;

    // ValuePrinter vp;
    // vp.Print("Hello",3);

    Article article("Celebrity Crushes!", 2, 200, "Papa Ratsea");

    article.ShowDetails();
    
    return 0;
}