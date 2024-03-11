    
//

#include <iostream>
using namespace std;
int main()
int so1, so3, lonnhat, nhonhat;
cout << "Nhap so 1:"; cin >> so1;
cout << "Nhap so 2:"; cin >> so2;
cout << "Nhap so 3:"; cin >> so3;

lonnhat = nhonhat = so1;
if (nhonhat > so2) {
    nhonhat = so2;
}
 if (lonnhat < so3) {
     nhonhat = so3;
            }
            cout << "So nho nhatb la:" << nhonhat << endl;
            cout << "So lon nhat la:" << lonnhat << endl;
            return 0;
            }