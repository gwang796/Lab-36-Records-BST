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
        cout << "data.txt was unable to be opened" << endl;
        return 1;
    }
    string code;
    while (inputfile >> code) {
        tree.insertNode(code);
    }
    inputfile.close();
    int choice;
    while (true) {
        cout << "BST options: " << endl;
        cout << "1) Add record" << endl;
        cout << "2) Search record" << endl;
        cout << "3) Delete record" << endl;
        cout << "4) Modify record" << endl;
        cout << "5) Display records" << endl;
        cout << "6) Exit" << endl;
        cin >> choice;
        switch (choice ) {
            case 1:
                <#statements#>
                break;
            case 1:
                <#statements#>
                break;
            case 1:
                statements
                break;
            case 1:
                <#statements#>
                break;
            default:
                break;
        }
    }
    return 0;
}
