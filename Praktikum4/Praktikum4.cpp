// Praktikum4.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include "Tree.h"
#include <string>
#include "TreeNode.h"
#include "Tree.cpp"

int main()
{
    std::cout << "Hello World!\n"; 

	Tree <string> stringTree;
	string data;
	ifstream in("Heine.txt", ios::in);
	 if (!in) {
		 cerr << "File could not be opened." << endl;
		exit(1);
		
	} // end if
	
	 while (in >> data) {
		 stringTree.insertNode(data);
		}
	
		cout << "Anzahl der unterschiedlichen Wörter " << ": " << stringTree.size(stringTree.getRoot()) << endl;
		cout << "Anzahl der gesammten Wörter " << ": " << stringTree.sum(stringTree.getRoot()) << endl;

}

