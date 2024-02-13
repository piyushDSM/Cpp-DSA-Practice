#include <iostream>
using namespace std;

void reach(int src, int dest)
{
    cout << "Source " << src << " Destination " << dest << endl;

    if (src == dest)
    {
        cout << "I'm reached";
        return;
    }

    src++;
    reach(src, dest);
}
int main()
{
    int dest = 10;
    int src = 1;

    reach(src, dest);

    return 0;
}
