///Resolu��o exercicio 1095:

#include <iostream>

using namespace std;

int main()
{
    int i=1, j;

    for (j=60; j>=0; j=j-5) {
        cout << "I=" << i << " J=" << j << endl;
        i = i + 3;
    }

    return 0;
}
