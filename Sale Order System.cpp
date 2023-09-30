#include "Transactions.h"
#include "Orderitem.h"
#include "Customers.h"
#include "Company.h"
#include "Product.h"
#include "Person.h"
#include "Stock.h"
#include "Order.h"
#include <iostream>
#include <string>
using namespace std;
Transactions T;
Customers cus;
Product p[50];
Product P[50];
Order* order = new Order;
Stock s;
int num =0;
int orderc = 0;
int counter = 0;
void intro()
{
    cout << "\t\t------------------------------------------------------\n"
        << "\t\t|  Welcome To My Project Sale Order System (*^_^*)   |\n"
        << "\t\t------------------------------------------------------\n\n";
}
int main()
{
    intro();
    int closed;
    do
    {
        int test = -1;
        do
        {
            cout<< "\t\t[1]-Data Entry \n"
                << "\t\t[2]-Sale Process \n"
                << "\t\t[3]-Print\n"
                << "\t\t[0]-Exit\n"
                << "Enter Your Choice : ";
            cin >> test;
            closed = test;
        } while (test < 0 || test > 3);
        switch (test)
        {
        case 1:
        {
            int entry = -1;
            do
            {
                cout << "\n\t\tData Entry\n"
                    << "\t\t----------\n"
                    << "[1]-Add New Customer \n"
                    << "[2]-Update Customer \n"
                    << "[3]-Delete Customer \n"
                    << "-----------------------\n"
                    << "[4]-Add New Product in The Stock \n"
                    << "[5]-Update Product in The Stock \n"
                    << "[6]-Delete Product in The Stock \n";
                cout << "Enter Your Choice : ";
                cin >> entry;
            } while (entry < 0 || entry > 6);
            switch (entry)
            {
            case 1:
                cus.addcustomers();
                break;
            case 2:
                cout << "Enter Customer ID : ";
                int id;
                cin >> id;
                cus.Edit(id, s.profun(), counter);
                break;
            case 3:
                cout << "Enter Customer ID : \n";
                cin >> id;
                cus.Delete();
                break;
            case 4:
                cin >> p[counter];
                P[counter] = p[counter];
                s.addstock(p[counter++]);
                //counter++;
                break;
            case 5:
                cout << "Enter Product ID : ";
                cin >> id;
                p[id - 1] = P[id - 1];
                s.Updatestock(id);
                break;
            case 6:
                cout << "Enter Product ID : ";
                cin >> id;
                s.deletestock(id);
                break;
            }
        }
        break;
        case 2:
        {
            int enter;
            do
            {
                cout << "_____________________________________________________\n\n"
                    << "\t\tSales Process \n"
                    << "\t\t-------------\n"
                    << "[1]-Add Transaction\n"
                    << "[2]-Update Order\n"
                    //<< "[3]-Pay Order\n"
                    << "Enter Your Choice : ";
                cin >> enter;
            } while (enter < 0 || enter > 3);
            switch (enter)
            {
            case 1:
                int choice;
                cout << "\t\tAdd Transaction\n"
                    << "\t\t---------------\n"
                    << "[1]-Enter Item To Customer\n"
                    << "[2]-Show Customer Items \n"
                    << "[3]-Pay Transactions \n"
                    << "Enter Your Choice : ";
                cin >> choice;
                switch (choice)
                {
                    case 1:
                        cout << "Enter Customer ID : ";
                        int id;
                        cin >> id;
                        cus.assign(id,s.profun(),counter);
                     /*   cout << "Enter Order ID : ";
                        int oid;
                        cin >> oid;
                        cus.assign2(order[oid - 1],id-1);
                        //delete ord;*/
                        break;
                    case 2:
                        cout << "Enter Customer ID : ";
                        cin >> id;
                        cus.printcus(id);
                        break;
                    case 3:
                        cout << "Enter Customer ID : ";
                        cin >> id;
                        cus.settotal(id, -1);
                        cus.settotal(id,T.getorder(cus.gettotal(id)));//
                        break;
                }
                break;
            case 2:
                int choic;
                cout << "[1]-Order Item Quantity\n"
                     << "[2]-Order Statue\n"
                     << "Enter Your Choice : ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    cout << "Enter Customer ID : ";
                    int id;
                    cin >> id;
                    cout << "Enter New Quantity : ";
                    double q;
                    cin >> q;
                    ///order[oid - 1].updatO(q,s.profun());
                    cus.updato(q, s.profun(),id);
                    cout << "\n\tsucessfully Updated \n";
                    break;
                case 2:
                    cout << "Enter Customer ID : ";
                    //int id;
                    cin >> id;
                    //cus.getorder(id).editO();
                    cus.updates(id);
                    break;
                }
                break;
            case 3:
                break;
            }
        }
        break;
        case 3:
        {
            // Print
            int enter;
            cout << "[1]-Print Customers\n"
                << "[2]-Print Stock Data\n"
                << "[3]-Print Transactionsn\n"
                << "Enter Your Choice : ";
            cin >> enter;
            switch (enter)
            {
            case 1:
                cus.print();
                break;
            case 2:
                cout << s;
                cout << endl;
                break;
            case 3:
                ///2Print transactions
                cout << "Enter Customer ID : ";
                int id;
                cin >> id;
                T.display();
                cus.gettotal(id);
                break;
            }
        }
            break;
        default :
            continue;
            break;
        }
    } while (closed);
    delete order;
    return 0;
}