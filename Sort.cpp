#include<iostream>
using namespace std;

int main()
{   int a,k,c,d,g;
    k=6;
    int b[c]={0.0, -0.5, -0.9, 0.3, 1.9, -0.3 };//nilai yang akan di urutkan
    for(a=0;a<k-1;a++)
    {
    c=a;
        for(d=a+1;d<k;d++) //metode pengurutan
        {
            if(b[c]<b[d])
            {
                c=d;
            }
        }
        g=b[c];
        b[c]=b[a];
        b[a]=g;
    }
    cout<<"\n setelah diurutkan akan menjadi : \n";
    for(a=0;a<k;a++)
    {
        cout<<b[a]<<" \n";
    }
}
