#include <iostream>
using namespace std;

int main()
{
float n;
float pi;
cin >> n;
int i = 0;
int n1 = n;
while (n > 0)
{
pi=(float)22/7;
cout.precision(n);
cout << pi;
while (i)
{
cout << '*';
i--;
}
i = n1 - n + 1;
n--;
cout << endl;
}
cout << "3" << endl
<< "Fill Setting:*";

return 0;
}
void d()
{
cout.fill('a');
cout.width(10);
}