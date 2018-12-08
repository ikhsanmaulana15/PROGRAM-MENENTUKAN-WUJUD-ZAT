#include <iostream>

using namespace std;

int main ()
{
    int a;
    cout<<"masukkan suhu dalam derajat celcius    :  ";
    cin>>a;
        if (a<=0)
            {
                cout<<"ZAT dalam wujud PADAT"<<endl;
            }
        else
        if ((a>0) && (a<100))
            {
                cout<<"ZAT dalam wujud CAIR"<<endl;
            }
        else
        cout<<"ZAT dalam wujud GAS"<<endl;

return 0;

}