#include <iostream>

using namespace std;

int main()
{
    int a[100],r=0,n,temp=0,j,sw=1;


    cout << "enter the length of array: ";
    cin >> n;
    cout << endl<<endl;

    for (int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    cout << "{ ";

    for (int i=0 ; i<n ; i++)
    {
        cout << a[i] << ",";
    }
    cout << " }";

    cout<<endl<<endl;

    for (int i=0 ; i<n-1 ; i++)
    {
        for (j=i+1 ; j<n ; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }

    for (int i=0; i<n; i++)
    {

        cout << a[i]<<",";
    }




    cout << endl<<endl;

    return 0;
}
