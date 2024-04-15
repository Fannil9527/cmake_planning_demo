#include <iostream>
#include "process.h"
using namespace std;

int main()
{
    cout << "Planning start" << endl;
    Process pro;
    pro.planProcess();
    cout << "Planning end" << endl;

    return 0;
}