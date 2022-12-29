#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("C:\rayhan\loc_test2\test3.txt");
    file<<"This is a location test 3"<<endl;
    file.close();
    return 0;
}

