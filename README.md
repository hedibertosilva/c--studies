# Project 60 Days

From zero to intermediate in 60 days.

## Day 1/60

What is C++?

Is an extension of the C programming language, adding features such as classes, objects, and exceptions.

### Topics:
    => #include

        We use the #include to directive to include libraries or header files into our program.

        Eg.: #include <iostream>

    => Main function

        It is the entrypoint of our program. Every C++ programs must have a main function:

        Eg.:
            int main() {
                # Your code goes here
                return 0
            }

    => Input/Output

        We can use the standard <iostream> library to use the built-in objects std::cin for input and std::cout for output.

        Eg.:
            #include <iostream>

            int main() {
                int number;
                std::cout << "Enter a number: ";
                std::cin >> number;
                std::cout << "You entered: " << number << "." << std::endl;
                return 0
            }

    => Variables and Data Types

        There are several basic data types for representing integer, floating-point and characters values.

        - int: integer values
            - 2 or 4 bytes
        - float: single-precision floating-point values
            - 4 bytes = 32 bits
            - Support values of up to 6-7 digits
        - double: double-precision floating-point values
            - 8 bytes = 64 bits
            - Support values of up to 15 digits taking up a space of 8 bytes (1 signed bit, 11 bits exponent, 52 bits significant) in the memory
            - Every C++ compiler, by default, treats every value as a double and implicitly perfoms a type convension between different data types.
            - Generally, the double type is used as it is more precise and prevents a loss of data in terms of significant digits
            - When you perform the division or multiplication operation, both the numbers should be of the double data type or else there could be a loss of some data.
        - char: single character/letter/number, or ASCII values
            - 1 byte
        - bool: Boolean
            - 1 byte
        - string: String


        You must declarate with a data type before they can be used.

        int x, x1, x2;
        float y, y1, y2;
        double z, z1, z3;
        char h, h1, h2;

    => Control Structures

        Such as if, else, while, for and switch statements.

        if/else:

            if (condition) {
                // code to execute if the condition is true
            } else {
                // code to execute if the condition is false
            }

        while:

            while (condition) {
                // code to execute while the condition is true
            }

        do while:

            do {
                // first execute this code, after check the condition
            } while (condition)

        for loop:

            for (initialization; condition; update) {
                // code to execute while the condition is true
            }

        switch:

            switch (variable) {
                case value1:
                    // code to execute if variable == value1
                    break;
                case value2:
                    // code to execute if variable == value2
                    break;
                default:
                    // code to execute if variable does not match any case value
            }

    => Functions

        ReturnType functionName(ParameterType1 parameter1, ParameterType2 parameter2) {
            // Function body
            // ...
            return returnValue;
        }

        Eg.:

            int add(int a, int b) {
                return a + b;
            }

            int main() {
                int result = add(3, 4);
                std::cout << "3 + 4 = " << result << std::endl;
                return 0;
            }

## Day 2/60

C vs C++

C and C++ are two popular languages with some similarities, but they also have key differences.

    => C:
        - C is a procedural programming language
        - Focuses on functions and structured programming
        - Does not support objects and classes
        - Memory management is manual, using functions such as malloc and free

    => C++:
        - C++ is both procedural and object-oriented
        - Support both functions and classes
        - Memory management can be manual (like C) or rely on constructors/destructors and smart pointers

Both languages is easy to reuse code 'cause they are procedural languages using functions and methods.
C++ has a plus 'cause classes support.

Regarding Error Handling, C treats handling through returns code instead exceptions handling by C++.
In C++ we can use try, catch and throw keywords, providing more control over error handling.

### Topis:

    => Arithmetic Operations:

        Addition: a + b
        Subtraction: a - b
        Multiplication: a * b
        Division: 12 / 4 // quotient is 3
        Modules: 15 % 4 // remainder is 3

    => Relational Operators

        5 == 5 // true
        3 == 4 // false
        5 != 2 // true
        1 != 1 // false
        5 > 3  // true
        2 > 2  // false
        3 < 8  // true
        3 < 3  // false
        5 >= 5 // true
        4 >= 3 // false
        4 <= 4 // true
        2 <= 1 // false

    => Logical Operators

        AND (&&) , OR (||), NOT (!)

        true && true   // true
        false && true  // false
        true || false  // true
        false || false // fasle
        !true          // false
        !false         // true

    => Increment Operator (++)

        int x = 5;
        int y = ++x; // x = 6, y = 6
        int z = x++; // x = 7, z = 6

    => Decrement Operator (--)

        int x = 5;
        int y = --x; // x = 4, y = 4
        int z = x--; // x = 3, z = 4

    => Bitwise Operator

        AND (&):

            int result = 5 & 3; // result will be 1

                  0 2 5
                0 1 0 1

                    1 3
                0 0 1 1

                0000 0101 & 0000 0011 = 0000 0001

        OR (|):

            int result = 8 & 7; // result will be 16

                     1 3 7
                   0 1 1 1

                   0 2 4 8
                   1 0 0 0

                0000 1000 | 0000 0111 = 0000 1111

        XOR (^)

            int result = 9 ^ 6; // result will be 8

            0 2 4 9
            1 1 1 0

              1 3 6
            0 1 1 0

            1110 ^ 0110 = 1000

            2⁰x0 = 0
            2¹x0 = 0
            2²x0 = 0
            2³x1 = 8

        NOT (~):
            int result = ~5; // result will be -6

              0 2 5
            0 1 0 1

             ~ 0000 0101 = 1111 1010

## Day 3/60


### Topics:

    => Functions Prototypes:

        #include <iostream>

        using namespace std;

        // function prototype
        int multiplyNumbers(int x, int y);

        int main() {
            int num1 = 3, num2 = 5;
            int result = multiplyNumbers(num1, num2);

            cout << "The product is: " << result << endl;
            return 0;
        }

        // function definition
        int multiplyNumbers(int x, int y) {
            int product = x * y;
            return product;
        }

    => Operators:

        Arithmetic:

            +: adition
            -: subtration
            *: multiplication
            /: division quotient
            %: division remainer (modulo)

        Comparation:

            ==: equal
            !=: not equal
            <: less
            >: greater
            <=: less or equal
            >=: greater or equal

        Logical Operators:

            &&: and
            ||: or
            !: not

        Assignment Operators:

            =: simple assignment
            +=: addition assignment
            -=: subtraction assignment
            *=: multiplication assignment
            /=: division assignment
            %=: modulo assignment

    => Lambda

        It is a unnamed function.

## Day 4/60


### Topics:

    => Lambda:

        auto var1 = [capture-list](parameters) -> return_type {
            // function body
        };

    => Data Types:

        Integer (int):

            Eg.: int num = 42;

            The size of int depends on the system architecture (usually 4 bytes - 32-bit and 64-bit size)

            - short (shot int): Smaller range than int.
            - long (long int): Larger range than int.
            - long long (long long int): Even larger range than long int.

            +-------------------------------------------+
            | Type Name     | 32-bit size | 64-bit size |
            --------------------------------------------+
            | char          | 1 byte      | 1 byte      |
            | short int     | 2 bytes     | 2 bytes     |
            | int           | 4 bytes     | 4 bytes     |
            | long int      | 4 bytes     | 8 bytes     |
            | long long int | 8 bytes     | 8 bytes     |
            +-------------------------------------------+

        Floating-Point (float, double):

            Eg.: float pi = 3.14f;

            float: Provides single-precision floating-point numbers. It typically occupies 4 bytes of memory.

            Eg.: double pi_high_precision = 3.1415926535;

            double: Provides double-precision floating-point numbers. It consumes more memory (usually 8 bytes) but has a higher precision than float.

        Character (char):

            Represent a single character, such as letter, digit, or symbol.
            They are stored using the ASCII value.
            Consumes 1 byte of memory.

            char letter = 'A';

        Boolean (bool):

            Booleans represent logical values: true or false.
            Consumes 1 byte of memory.

            bool is_cpp_greater = true;

        Arrays:

            Arrays are used to store multiple values of the SAME DATA TYPE in consecutive memory locations.

            - You must declare the data type;
            - You must declare the size of array;
            - Array uses braces {}

            int numbers[5] = {1, 2, 3, 4, 5};

        Pointers:

            Pointers are used to store the memory address of a variable.

            - pointers receive references;

            int num = 42;
            int *pNum = &num;

            cout << pNum // print <memory-address>
            cout << *pNum // print 42 // dereference operator (*)

            *pNum = 52 // num = 52

        References:

            Like an alias.

            References are an alternative way to share memory locations between variables,
            allowin' you to create an alias for another variable.

            - references receive a variable

            int num = 42;
            int &numRef = num;

            cout << numRef // print 42
            cout << &numRef // print <memory-address> // address-of operator (&)

            numRef = 52 // or num = 52

## Day 5/60


### Topics:

    => Dinamic Types:

        Generic Pointers: A void pointer is a generic pointer that can point to objects of any data
        type.

        Eg.: void* void_ptr;

        std::Any:

        C++17 introduced the std::any class with represents a generalized type-safe container for
        single values of any type.

        Eg.: std::any any_valur;


## Day 6/60


### Topics:

    => Function pointer:

        Create an alias for a funcion through pointer.

        int add(int x, int y) {
            return x + y;
        };

        int (*funcptr) (int, int) = add;

    => Memory Model:

        Defines how the program stores and accesses data in computer memory.

        It consists of different segments, such as the Stack, Heap, Data and Code.

        Stack Memory:

            Summary: local variables and function call data.

            It is used for automatic storage duration variables, such as local variables and function call data.
            Stack memory is managed by the compiler, and  it's allocation and deallocation are done automatically.
            The stack memory is also a LIFO (Last In First Out) data structure, meaning that the most recent data allocated is the first to be deallocated.

            void functionExample() {
                int x = 10; // x is stored in the stack memory
            };

        Heap Memory:

            Summary:objects created using the "new" keyword

            It is used for dynamic storage duration variables, such as objects created using the new keyword.
            The programmer has control over the allocation and deallocation of heap memory using new and delete operators.
            Heap memory is a larger pool of memory than the stack, but has a slower access time.

            void functionExample() {
                int *p = new int; // dynamically allocated in in heap memory
                *p = 10;

                // more code

                delete p; // deallocation memory
            };

        Data Segment:

            Summary: global, static, and constant variables.

            The Data segment is composed of two parts: initialized and uninitialized data segment.
            Initialized data segment stores global, static, and constant variables with initial values.
            Uninitialized data segment stores uninitialized global and static variables.

            // Initialized data segment
            int globalVar = 10; // global variables
            static int staticVar = 10; // static local variables
            const int constVar = 10; // constant variables with value

            // Uninitialized data segment
            int globalVar; // uninitialized global variables

        Code Segment:

            Summary: store all the executable code in read-only memory area.

            The Code segment (also known as the Text segment) stores the executable code (machine code) of the program.
            It's usually located in a read-only area of memory to prevent accidental modification.

    => Object Lifetime:

        - Static Storage Duration:

            Summary:

                Includes all the variables that are loaded at the beginning of the program
                and are destroyed when the program terminates.

                Global variables, static data members and static local variables fall into this category:

            int globalVar;
            class MyClass {
                static int staticVar;
            };
            void myFunction() {
                static int localVar;
            }

        - Thread Storage Duration:

            Summary:

                Objects that exists along the lifetime of the thread they belong to.
                They are created when a thread stats and destroyed when the thread exits.
                Thread storage duration can be specified using the thread_local keyword.

            thread_local int my_var;

        - Automatic Storage Duration:

            Summary:

                Objects with automatic storage duration are created at the point of definition and
                destroyed when the scope in which they are declated is exited.

                These objects are also known as "local" and "stack" objects.
                Function parameters and local non-static variables fall into this category.

            void myFunction() {
                int local_var;
            };

        - Dynamic Storage Duration:

            Summary:
                Objects create by the programmers and they are allocated at runtime.
                These objects are created using the keywords new and malloc.

                These memory is not deallocated automatic when the scope exits
                needing that the programmer declarate the exact momment when this memories should
                be released when it's no longer needed, to avoid memory leak issues;

            int *ptr = new int;
            delete ptr;


        Relationship:

            Data Segment -> Static Storage Duration (global, static and constant variables)
            Stack Memory -> Automatic Storage Duration (local variables)
            Heap Memory  -> Dynamic Storage Duration (objects created using the new or malloc keyworkds)


## Day 7/60


### Topics:

    => Smarter Pointers:

        - unique_ptr:

            std::unique_ptr is a smater pointer provided by the C++ Standard Library.
            Works on the concept of exclusive ownership - meaning only one unique_pr is allowed
            to own an object at a time.

            This concept helps to prevent issues like dangling pointers, reduce memory leaks,
            and eliminates the need for manual memory management.

            When the unique_ptr goes out of scope, it automatically deletes the object it owns.

## Day 8/60


### Topics:

    => shared_ptr:

        A shared_ptr is a type of smart pointer in C++ that allows multiple pointers to share
        ownership of dynamically allocated object. The object will be automatically deallocated
        only when the last shared_ptr that points to it is destroyed.

    => Raw Pointers: low-level constructs that directly hold a memory address. They can be used for
       manually allocating memory, creating dynamic arrays, and passing values efficiently, among other things.

        - New Operator:

            The new operator is used to allocate memory on the heap. The memory allocated using new remains available
            until you exclicitly deallocate it using the corresponding delete operator.

                int* ptr = new int;
                *ptr = 42;

        - Delete Operator:

            delete ptr;

        - Array:

            int* ptr = new int[10];

            delete[] ptr;

        - Memory Leakeage:

            Memory leakage occurs when a program allocates memory in the heap but does not release the memory back to the operating system when it is no longer needed. Over time, this leads to exhaustion of available memory, resulting in low system performance or crashes.
