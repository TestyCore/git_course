#include <iostream>
using namespace std;

int main()
{
    void new_line(int* ptr);

    int* line = new int[4] {1, 2, 3, 4};
    cout << endl << &line;
    new_line(line);
    cout << line[0];
    //std::cout << "Hello Wodrld!\n";
}

void new_line(int* ptr) {
    cout << endl << &ptr;
    ptr[0] = 99;
}
