#include <iostream>
#include <iomanip>
#include <chrono>
using namespace std;


void progress( int currentPage );

int main(){

    float page;

    cout << "Enter current page ";

    cin >> page;

    if (page > 0) progress(page);

    else cout << "negative page \n ";

    

    return 0;
}

void progress( int currentPage ){

    float totalPage = 790;

    float res;

    time_t now = chrono::system_clock::to_time_t(chrono::system_clock::now());

    
    res = currentPage/totalPage * 100 ;

    cout << put_time(localtime(&now), "%F %T") << " Page " << currentPage << " / " << totalPage << " Your Progress c++ " <<  res << " %" <<"\n";


}
