# Strings: Resources
## Table of Content
  
  * [What are strings?](#what-are-strings)
  * [Language specifics](#language-specifics)
    + [C Programming](#c-programming)
      - [String declaration](#string-declaration)
      - [Accessing ith element](#accessing-ith-element)
      - [The end of string](#the-end-of-string)
      - [Length of string](#length-of-string)
      - [More](#more)
      - [Videos](#videos)
    + [C++](#c)
      - [String declaration](#string-declaration-1)
      - [Accessing ith element](#accessing-ith-element-1)
      - [Size ( number of elements ) of the string](#size---number-of-elements---of-the-string)
      - [Appending to the string](#appending-to-the-string)
      - [More](#more-1)
      - [Videos](#videos-1)
    + [Java](#java)
      - [Array declaration](#array-declaration)
      - [Accessing ith element](#accessing-ith-element-2)
      - [Size of the string](#size-of-the-string)
      - [Adding characters to the string](#adding-characters-to-the-string)
      - [More](#more-2)
      - [Videos](#videos-2)
    + [Python](#python)
      - [String declaration](#string-declaration-2)
      - [Accessing the ith element](#accessing-the-ith-element)
      - [Adding chars to the string](#adding-chars-to-the-string)
      - [Size of the string](#size-of-the-string-1)
      - [More](#more-3)
      - [Videos](#videos-3)

## What are strings?
- Strings are defined as an array of characters. 
- The difference between a character array and a string is the string is terminated with a special character ‘\0’.
- Declaring a string is as simple as declaring a one dimensional array. 

    ![string](https://media.geeksforgeeks.org/wp-content/uploads/finnnal.png)
- Depending on the programming language and precise data type used, a variable declared to be a string may either cause storage in memory to be statically allocated for a predetermined maximum length or employ dynamic allocation to allow it to hold a variable number of elements.
- Although formal strings can have an arbitrary finite length, the length of strings in real languages is often constrained to an artificial maximum. In general, there are two types of string datatypes: fixed-length strings, which have a fixed maximum length to be determined at compile time and which use the same amount of memory whether this maximum is needed or not, and variable-length strings, whose length is not arbitrarily fixed and which can use varying amounts of memory depending on the actual requirements at run time. ( [Read more](https://en.wikipedia.org/wiki/String_(computer_science)#:~:text=In%20computer%20programming%2C%20a%20string,as%20some%20kind%20of%20variable.&text=In%20formal%20languages%2C%20which%20are,a%20set%20called%20an%20alphabet.) )

There are many algorithms for processing strings, each with various trade-offs. Competing algorithms can be analyzed with respect to run time, storage requirements, and so forth.

Some categories of algorithms include:

- [String searching algorithms](https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/tutorial/) for finding a given substring or pattern
- [String manipulation algorithms](https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/tutorial/)
- Sorting algorithms
- Regular expression algorithms
- Parsing a string
- Sequence mining
- Advanced string algorithms often employ complex mechanisms and data structures, among them suffix trees and finite-state machines.

## Language specifics

### C Programming
Strings are defined as an array of characters. The difference between a character array and a string is the string is terminated with a special character ‘\0’. 

![stringinc](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20201209135923/String-in-C.png)

#### String declaration
    char A[1000]; // creates a character array of size 1000. 
    char *A = (char *) malloc(1000 * sizeof(char)); // creates a character array of size 1000
#### Accessing ith element
    A[i] 
#### The end of string
    Strings have to end with a '\0' character. 
    All C input functions like scanf do it automatically. 
    Direct string assignments like `char A[20] = "Hello";` does it automatically as well.
#### Length of string
    strlen(A); // O(n) operation where n is length of string

#### More
- [Basics](https://www.geeksforgeeks.org/strings-in-c-2/)
- [String Manipulations](https://www.programiz.com/c-programming/string-handling-functions)
- [Examples](https://www.programiz.com/c-programming/c-string-examples)

#### Videos
- [Understanding Strings in C Programming](https://www.youtube.com/watch?v=SEZpQLG3AZ4)
- [Basics of String Literals](https://www.youtube.com/watch?v=IlqiTmcK1Eg&list=PLBlnK6fEyqRhwQbYrTDZYJaB4z1YgsAPW)

### C++ 

The C-style character string originated within the C language and continues to be supported within C++. This string is actually a one-dimensional array of characters which is terminated by a null character '\0'. Thus a null-terminated string contains the characters that comprise the string followed by a null.

- C++ string class internally uses char array to store character but all memory management, allocation, and null termination is handled by string class itself that is why it is easy to use. 
- The length of the C++ string can be changed at runtime because of dynamic allocation of memory similar to vectors. 
- As string class is a container class, we can iterate over all its characters using an iterator similar to other containers like vector, set and maps, but generally, we use a simple for loop for iterating over the characters and index them using [] operator.
- C++ string class has a lot of functions to handle string easily.

- C style char arrays work in C++ as well.  However, C++ provides string which is much more powerful than C arrays. 

#### String declaration
    string A; // declares an empty string
    string A = "Hello"; // declares string initialized to "Hello".
#### Accessing ith element
    A[i] // O(1)
#### Size ( number of elements ) of the string
    A.length()  // O(1)
#### Appending to the string
    A += "Hello"; // Appends Hello to the string. O(n) operation
    A.push_back('H'); // Append character H to the string. O(1) operation. 

#### More
- [Strings and its application](https://www.geeksforgeeks.org/c-string-class-and-its-applications/)
- [std::string class in C++](https://www.geeksforgeeks.org/stdstring-class-in-c/)
- [Practice Programs](https://www.geeksforgeeks.org/c-programs-gq/string-programs-gq/)
#### Videos
- [Strings in C++](https://www.youtube.com/watch?v=3rDp0yOACZQ)
- [Strings, Getline, Concatenation, and String Functions](https://www.youtube.com/watch?v=_RYLJoJBC7k)

### Java

- Strings, which are widely used in Java programming, are a sequence of characters. In Java programming language, strings are treated as objects.

- The Java platform provides the String class to create and manipulate strings.
- Java has strings as well which are very similar to C++ string. However java strings are immutable. As such, if you plan to keep appending to the string, then better use StringBuilder.

#### Array declaration

    String A = new String(); // declares an empty string. O(1)
    String A = new String("Hello"); // declares string initialized to "Hello"
    OR for mutable string : 
    StringBuilder A = new StringBuilder(); // empty string
    StringBuilder A = new StringBuilder("Hello"); // stringbuilder initialized to "Hello"
    
#### Accessing ith element
    A.charAt(i)     // O(1). Works for both String and StringBuilder
#### Size of the string
    A.length()  // O(1) operation
#### Adding characters to the string
    String : A.concat("Hello"); // O(n) operation. Creates another copy of the string as string is immutable. 
    StringBuilder : A.append("Hello"); // O(l) operation where l is the length of the string being appended. Much more efficient. 

#### More
- [Java - Strings Class](https://www.tutorialspoint.com/java/java_strings.htm)
- [String Functions In Java With Examples](https://www.edureka.co/blog/java-string/)
- [What are the differences between String, StringBuffer and StringBuilder?](https://www.edureka.co/blog/string-vs-stringbuffer-vs-stringbuilder/)
- [Java String Manipulation](https://www.guru99.com/java-strings.html)

#### Videos
- [String Manipulation in Java](https://www.youtube.com/watch?v=N63JCXwdd14)
- [StringBuffer and StringBuilder in Java](https://www.youtube.com/watch?v=oYcb0N1YfVw)
- [User Input using BufferedReader](https://www.youtube.com/watch?v=iVbgcByqFic)
- [Java Essential Training](https://www.youtube.com/playlist?list=PLWPirh4EWFpFfTUVBl5KbeXly1sHKSc-Z)

### Python

- In Python, a string is a sequence of Unicode characters. Unicode was introduced to include every character in all languages and bring uniformity in encoding.
- Strings can be created by enclosing characters inside a single quote or double-quotes. Even triple quotes can be used in Python but generally used to represent multiline strings and docstrings.

- We can access individual characters using indexing and a range of characters using slicing. Index starts from 0. Trying to access a character out of index range will raise an IndexError. The index must be an integer. We can't use floats or other types, this will result into TypeError.

- Python allows negative indexing for its sequences.

- The index of -1 refers to the last item, -2 to the second last item and so on. We can access a range of items in a string by using the slicing operator :(colon). 
- Strings are immutable. This means that elements of a string cannot be changed once they have been assigned. We can simply reassign different strings to the same name.
- There are many operations that can be performed with strings which makes it one of the most used data types in Python.

- Python has string which is very similar to java string. Its immutable.

#### String declaration
    A = "" #  empty string
    A = "Hello" #  string initialized to "Hello"
#### Accessing the ith element
    A[i]  # O(1)
#### Adding chars to the string
    A = A + "Hello" #  O(n) operation and a new copy is created
    An alternative way if you are going to do a lot of appends :

        l = []
        l.append('string1')
        l.append('string2')
        l.append('string3')
        A = ''.join(l)
#### Size of the string
    len(A)  // O(1)

#### More
- [Python Strings](https://www.programiz.com/python-programming/string)
- [Basics](https://developers.google.com/edu/python/strings)
- [String Manipulation](https://www.pythonforbeginners.com/basics/string-manipulation-in-python)
- [String Functions](https://www.digitalocean.com/community/tutorials/an-introduction-to-string-functions-in-python-3)

#### Videos
- [String data type](https://www.youtube.com/watch?v=k9TUPpGqYTo)
- [String Manipulation](https://www.youtube.com/watch?v=iy-b0NtGQZo)
