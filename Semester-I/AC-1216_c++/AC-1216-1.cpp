#include <iostream>
using namespace std;

int main()

{

    int nTV , nDVD , nremote;
    double subtotal , total , tax;
    cout << "Enter the number of TVs you want::";
    cin >> nTV;
    cout << "Enter the number of DVDs you want::";
    cin >> nDVD;
    cout << "Enter the number of Remotes you want::";
    cin >> nremote;
    subtotal=nTV*1400 + nDVD*220 + nremote*35;
    tax=(subtotal*8.25)/100;
    total=subtotal+tax;
    cout << "***************BILL***************" << endl;
    cout << "ITEMS     QUANTITY    TOTAL COST" << endl;
    cout << "TVs        " << nTV << " X 1400    $" << nTV*1400 << endl;
    cout << "DVDs       " << nDVD << " X 220     $" << nDVD*220 << endl;
    cout << "Remotes    " << nremote << " X 35      $" << nremote*35 << endl;
    cout <<"__________________________" << endl;
    cout << "Subtotal       $" << subtotal << endl;
    cout << "Tax            $" << tax << endl;
    cout << "Total          $" << total << endl;
    return 0;

}
    
    