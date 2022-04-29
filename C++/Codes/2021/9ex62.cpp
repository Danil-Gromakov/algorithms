#include <iostream>
#include <string>

using namespace std;

class ValuePrinter
{
public:
	 // ValuePrinter();

	 void Print(string msg, float f)
	 { 
	 	cout << msg << ":" << f << endl;
	 }
	 void Print(string msg, int i)
	 { 
	 	cout << msg << ":" << i << endl;
	 }
	 void Print(string msg, string s)
	 { 
	 	cout << msg << ":" << s << endl;
	 }

	// ~ ValuePrinter();
	
};


class Article
{
public:
	Article(string title, int pageCount, int wordCount, string author)
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
	valuePrinter.Print("Article title",m_title);
	valuePrinter.Print("Article pageCount",m_pageCount);
	valuePrinter.Print("Article wordCount",m_wordCount);
	valuePrinter.Print("Article author",m_author);
	}

	// ~Article();
	
};

int main()
{

	cout << "start ..." << endl;

	Article article("Преступление и наказание", 280, 345,"Ф.М.Достоевский");
	
	article.ShowDetails();

	return 0;
}