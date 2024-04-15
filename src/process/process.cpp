#include <iostream>
#include "process.h"
using namespace std;

void Process::planProcess()
{
    cout << "This is planning process." << endl;
    my_map.mapInfo();
    cout << "Planning sucess!" << endl;
}