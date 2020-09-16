
#include <iostream>
using namespace std;
int main()
{
	int source = 0;
	cin >> source;
    int t = 0, d = 1;
    while (source > 0)
    {
        t += (source % 2) * d;
        source = source / 2;
        d = d * 10; // razryad
    }
    cout << t;
	return 0;
}
