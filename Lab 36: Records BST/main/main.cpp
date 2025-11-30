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
    tree.displayInOrder();
    return 0;
}
