//
//  main.cpp
//  CS-210 | Lab 36: Records BST | Guo An Wang
//  IDE:Xcode
//  Created by Guo An Wang on 11/29/25.
//

#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;
int main() {
    IntBinaryTree tree;
    ifstream inputfile("codes.txt");
    if (!inputfile) {
        cout << "codes.txt was unable to be opened" << endl;
        return 1;
    }
    string code;
    while (inputfile >> code) {
        tree.insertNode(code);
    }
    inputfile.close();
    int choice;
    int choice2;
    string value,newValue;
    while (true) {
        cout << "\nBST options: " << endl;
        cout << "1) Add record" << endl;
        cout << "2) Search record" << endl;
        cout << "3) Delete record" << endl;
        cout << "4) Modify record" << endl;
        cout << "5) Display records" << endl;
        cout << "6) Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        switch (choice ) {
            case 1:
                cout << "Enter record to be inserted: ";
                cin >> value;
                tree.insertNode(value);
                break;
            case 2:
                cout << "Enter record to search: ";
                cin >> value;
                if (tree.searchNode(value)){
                    cout << "\nRecord found" << endl;
                } else {
                    cout << "\nRecord not found" << endl;
                }
                break;
            case 3:
                cout << "Enter record to be deleted: ";
                cin >> value;
                tree.remove(value);
                break;
            case 4:
                cout << "Enter record to be modified: ";
                cin >> value;
                if (tree.searchNode(value)){
                    cout << "Enter new record: ";
                    cin >> newValue;
                    tree.remove(value);
                    tree.insertNode(newValue);
                } else {
                    cout << "\nRecord not found" << endl;
                }
                break;
            case 5:
                cout << "1) Display in order" << endl;
                cout << "2) Display pre order" << endl;
                cout << "3) Display post order" << endl;
                cout << "Choice: ";
                cin >> choice2;
                switch (choice2) {
                    case 1:
                        tree.displayInOrder();
                        break;
                    case 2:
                        tree.displayPreOrder();
                        break;
                    case 3:
                        tree.displayPostOrder();
                        break;
                    default:
                        cout << "Invalid option" << endl;
                        break;
                }
                break;
            case 6:
                cout << "Exiting" << endl;
                return 0;
            default:
                cout << "Invalid option" << endl;
                break;
        }
    }
    return 0;
}
