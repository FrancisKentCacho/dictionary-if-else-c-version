#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputWord;
    while (true) {
        cout << "Enter your word: ";
        cin >> inputWord;
        
        
        if (inputWord == "algorithm") {
            cout << inputWord << " - A set of well-defined instructions for solving a problem or accomplishing a task." << endl;
        } else if (inputWord == "analog") {
            cout << inputWord << " - A signal that varies continuously over time, like the voltage in a circuit." << endl;
        } else if (inputWord == "bandwidth") {
            cout << inputWord << " - The range of frequencies that a communication channel can carry." << endl;
        }
	    else if (inputWord == "bit") {
	        cout << inputWord << " - The smallest unit of data in a computer, representing a single binary digit (0 or 1)." << endl;
	    } else if (inputWord == "boolean algebra") {
	        cout << inputWord << " - A system of logic used in computer science to represent truth values (true or false) and operations on them." << endl;
	    } else if (inputWord == "cache") {
	        cout << inputWord << " - A temporary storage area used to speed up data access by storing frequently used data." << endl;
	    } else if (inputWord == "circuit") {
	        cout << inputWord << " - A closed loop of electrical components that allows current to flow." << endl;
	    } else if (inputWord == "compiler") {
	            cout << inputWord << " - A program that translates source code written in a high-level programming language into machine code that a computer can execute." << endl;
        } else if (inputWord == "data structure") {
            cout << inputWord << " - A way of organizing and storing data in a computer." << endl;
        } else if (inputWord == "debugging") {
            cout << inputWord << " - The process of finding and fixing errors in computer programs." << endl;
        } else if (inputWord == "digital") {
            cout << inputWord << " - A signal that is discrete, meaning it can only take on a finite number of values." << endl;
        } else if (inputWord == "dynamic programming") {
            cout << inputWord << " - A technique for solving complex problems by breaking them down into smaller, overlapping subproblems." << endl;
    	
    	
        } else if (inputWord == "frequency") {
            cout << inputWord << " - The number of cycles per second of a periodic signal." << endl;
        } else if (inputWord == "hardware") {
            cout << inputWord << " - The physical components of a computer system, such as the CPU, memory, and storage." << endl;
        } else if (inputWord == "heuristics") {
            cout << inputWord << " - Rule-of-thumb methods used to solve problems that may not always guarantee the optimal solution." << endl;
        } else if (inputWord == "interrupt") {
            cout << inputWord << " - A signal that temporarily stops the execution of a program to handle a specific event." << endl;
        } else if (inputWord == "kernel") {
            cout << inputWord << " - The core of an operating system that manages the computer's resources." << endl;
                                    
        } else if  (inputWord == "linear algebra") {
            cout << inputWord << " - A branch of mathematics that deals with vectors, matrices, and linear transformations." << endl;
        } else if (inputWord == "logic gate") {
            cout << inputWord << " - An electronic circuit that performs a logical operation, such as AND, OR, or NOT." << endl;
        } else if (inputWord == "machine learning") {
            cout << inputWord << " - A type of artificial intelligence that allows computers to learn from data without explicit programming." << endl;
            
    	} else if  (inputWord == "linear algebra") {
            cout << inputWord << " - A branch of mathematics that deals with vectors, matrices, and linear transformations." << endl;
        } else if (inputWord == "logic gate") {
            cout << inputWord << " - An electronic circuit that performs a logical operation, such as AND, OR, or NOT." << endl;
        } else if (inputWord == "machine learning") {
            cout << inputWord << " - A type of artificial intelligence that allows computers to learn from data without explicit programming." << endl;
        } else if (inputWord == "network") {
            cout << inputWord << " - A group of interconnected devices that can communicate with each other." << endl;
        } else if (inputWord == "operating system") {
            cout << inputWord << " - A program that manages the computer's resources and provides a user interface." << endl;
        } else if (inputWord == "protocol") {
            cout << inputWord << " - A set of rules that govern communication between devices." << endl;
        } else if (inputWord == "software") {
            cout << inputWord << " - The programs and data that run on a computer." << endl;
        } else if (inputWord == "linear algebra") {
            cout << inputWord << " - A branch of mathematics that deals with vectors, matrices, and linear transformations." << endl;
        } else if (inputWord == "logic gate") {
            cout << inputWord << " - An electronic circuit that performs a logical operation, such as AND, OR, or NOT." << endl;
        } else if (inputWord == "machine learning") {
            cout << inputWord << " - A type of artificial intelligence that allows computers to learn from data without explicit programming." << endl;
        } else if (inputWord == "network") {
            cout << inputWord << " - A group of interconnected devices that can communicate with each other." << endl;
        } else if (inputWord == "operating system") {
            cout << inputWord << " - A program that manages the computer's resources and provides a user interface." << endl;
        } else if (inputWord == "protocol") {
            cout << inputWord << " - A set of rules that govern communication between devices." << endl;
        } else if (inputWord == "software") {
            cout << inputWord << " - The programs and data that run on a computer." << endl;
        } else if (inputWord == "system_architecture") {
            cout << inputWord << " - The overall design and structure of a computer system or software." << endl;
        } else if (inputWord == "transformer") {
            cout << inputWord << " - An electrical device that changes the voltage of an alternating current (AC) signal" << endl; 
    
    	} else {
            cout << "Word not found." << endl;
        }
    }
}
