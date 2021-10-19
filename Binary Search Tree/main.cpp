//
//  main.cpp
//  Binary Search Tree
//
//  Created by Jacob Mejia on 3/14/20.
//  Copyright © 2020 Jacob Mejia. All rights reserved.
//
#include <iostream>
#include "BinarySearchTree.h"
#include "TreeNode.h"
#include "TreeIterator.h"
using namespace std;

int main(){
//BinarySearchTree t;
//t.insert("D");
//t.insert("B");
//t.insert("A");
//t.insert("C");
//t.insert("F");
//t.insert("E");
//t.insert("I");
//t.insert("G");
//t.insert("H");
//t.insert("J");
//t.erase("A"); // Removing leaf
//t.erase("B"); // Removing element with one child
//t.erase("F"); // Removing element with two children
//t.erase("D"); // Removing root
//t.print();
//cout << t.count("E") << "\n";
//cout << t.count("F") << "\n";
//return 0;
    
    BinarySearchTree bst;
    bst.insert(3); bst.insert(2); bst.insert(11);
    bst.insert(13); bst.insert(5); bst.insert(17); bst.insert(17);
    std::cout << "Your tree consists of : ";
//    for (auto x : bst)
//        std::cout << x << ",";
    bst.print();
    std::cout << std::endl;
    
    bst.erase(6);
    bst.erase(11);
    std::cout << "Tree now  consists of : ";
    // fix print function
//    for (auto x : bst)
//        std::cout << x << ",";
    bst.print();
    std::cout << std::endl;
    TreeIterator start = bst.begin();
    TreeIterator stop = bst.end();
    std::cout << "Checking initial value: ";
    if (start != stop)
        // how to make it start++
        std::cout << *start << std::endl;
}
