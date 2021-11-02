#include <iostream>
#include <time.h>
#include <unistd.h>



using namespace std;

int main()
{

     int a[100],r=0,n;

     srand(time(0));

     cout << "enter the length of array: ";
     cin >> n;
     cout << endl<<endl;

     for (int i=0 ; i<n ; i++){
        r = rand()%n+1;
        a[i]=r;
     cout << a[i]<< ",";
     }
          cout << endl<<endl;


    return 0;
}
