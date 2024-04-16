#include <iostream>
#include "planprocess.h"
#include "show_result.h"
using namespace std;

int main()
{
    cout << "Planning start" << endl;
    PlanProcess pro;
    pro.planProcess();
    cout << "Planning end" << endl;
    cout << "Show graph" << endl;

    ShowResult show;
    show.drawResult();

    return 0;
}