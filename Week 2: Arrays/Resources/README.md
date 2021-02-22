# Arrays: Resources


**Table of Contents**

- [What are Arrays?](#what-are-arrays)
	- [Fixed-size Arrays](#fixed-size-arrays)
		- [Statically Allocated Arrays](#statically-allocated-arrays)
		- [Dynamically Allocated Arrays](#dynamically-allocated-arrays)
	- [Dynamic Arrays](#dynamic-arrays)
- [What are some advantages of Arrays?](#what-are-some-advantages-of-arrays)
- [Language Specifics](#language-specifics)
    + [Python](#python)
      - [Initializing arrays](#initializing-arrays)
      - [Manipulating values in an array](#manipulating-values-in-an-array)
      - [Difference from Lists](#difference-from-lists)
      - [More](#more)
    + [C++](#c--)
      - [Initializing arrays](#initializing-arrays-1)
      - [Manipulating values in an array](#manipulating-values-in-an-array-1)
      - [Array Library](#array-library)
      - [Caution](#caution)
      - [More](#more-1)
      - [Videos](#videos)
    + [Java](#java)
      - [Initializing arrays](#initializing-arrays-2)
      - [Manipulating values in an array](#manipulating-values-in-an-array-2)
      - [Is Java's Array safer than C++ Arrays?](#is-javas-array-safer-than-c-arrays)
      - [More](#more-2)
      - [Videos](#videos-1)



## What are Arrays?
- An **array** is a collection of data items of the **same data type**.
	 For example if an array is of type *int*, it can only store integer elements and cannot allow the elements of other types such as *double*, *float*, *char* etc.
- Elements of an array are stored in** contiguous memory locations**. 
- They are **zero-indexed**
- Many data structures are built on top of arrays.

![Array Depiction](https://i.imgur.com/ufbgxzY.png)


##### Fixed-size Arrays
- Fixed-size array reffers to the most commonly seen type of arrays that are initialized with a fixed size and do not grow.

###### Statically Allocated Arrays
- These are arrays whose size are known at compile time.
- The specified size must either be from a constant value or a integer literal

###### Dynamically Allocated Arrays
- These are arrays whose size are unknown at compile time and are determined only at runtime.

##### Dynamic Arrays
- Dynamic array (not to be confused with *dynamically allocated arrays*)  ussually refer to a collection data structure that may grow or shrink as needed.
- They use fixed-size Arrays as backing data
- As these fall out of the scope of this document, they will not be explored much.

## What are some advantages of Arrays?
- **Constant Random Access Time**
	- The compiler can infer the pointer to a specific index of an array with the type (i.e, size of data of the type), the index and the starting pointer
	- Therefore random access on an array takes constant time since there is no search involved.
- **Cache Friendliness**
	- Since array elements are stored in contiguous memory locations, they can easily be accessed from CPU to cache and lead to higher [cache hits](https://en.wikipedia.org/wiki/Cache_(computing))
	- Therefore iteration over arrays are much faster than over structures like linked lists
- **Multi Dimensional Arrays**
	- The type of data stored in an array can also be an array
	- This allows formation of complex types that could represent boards, matrixes and much more

# Language Specifics
Now, lets go into more details specific to three common languages.

### Python
 - Python stands out a bit different here. 
 - First of all, you do not get arrays straight out of the box. To use them you need to import the array module.
 - Secondly, these are dynamic arrays.
 - Even so these arrays are limited to only numeric types.
 - There are of course external array implementations that provide more features such as arrays from numpy

#### Initializing arrays
```python
import array as arr 

arr.array(TYPE_CODE, LIST)
```
- In place of TYPE_CODE i.e., the first argument,
	- You would use the type code specific to the data what you want to store. Refer to [this](https://docs.python.org/3/library/array.html) to know about the supported type codes.

- In place of LIST, i.e., the second argument,
	- You would list of elements that satisfy the type code mentioned in the previous argument

#### Manipulating values in an array
```python
import array as arr
a = arr.array('i',[1,2,3,4,5])

b = a[2] # Accessing a value from an array

a[1] = 45 # Seting a value in an array

c = a[1:3] # Array slices
```
- Reffer to [this](https://www.programiz.com/python-programming/array) for further info

#### Difference from Lists
```python
import array as arr

list_example = [1, "str", 2] # This would be a list and can store multiple datatypes
arr_example = arr.array('i',[1,2,3,4,5]) # Arrays here are limited to the data type specified by the `i` type code
# Initializing the array with a different data type would result in an error
```
#### More
 - [Python Arrays Module](https://docs.python.org/3/library/array.html)
 - [NumPy Arrays](https://cs231n.github.io/python-numpy-tutorial/#arrays)
 - [Difference between Arrays and Lists in Python](https://www.pythoncentral.io/the-difference-between-a-list-and-an-array/)

#### Videos
 - [Operations on Numerical Array with array module](https://www.youtube.com/watch?v=M3dLn6F7NuY)
 - [Telusko - Array Module and Numpy](https://www.youtube.com/watch?v=H58aj9TniFA)
 - [Python lists vs arrays](https://www.youtube.com/watch?v=JtW_xGNDEJ8)

### C++
 - C++ supports both statically-allocated and dynamically allocated arrays and shows clear distinction between them.
 - Statically allocated arrays reside on the stack while dynamically allocated arrays reside in the heap [\[What are the Stack and Heap memory segments?\]](https://www.learncpp.com/cpp-tutorial/the-stack-and-the-heap/)
 - Statically allocated arrays are slightly faster than Dynamically allocated arrays, 
 - As they reside on the stack, Statically allocated arrays must not be too large as it would result in a stack overflow.
 - Some compilers also provide a shorthand for dynamically allocated arrays to be declared in the same way as statically allocated array. This is not applicable to newer implementations and is generally considered bad practice.

#### Initializing arrays
```cpp
#include<iostream>
int main() 
{
	// Statically allocated array
	int s[5]; 
	// The elements could be specified as well
	int s1[5] = {1, 2, 3, 4, 5};
	int s2[] = {1, 2, 3, 4, 5};
	
	int n;
	std::cin>>n;
	int *d = new int[n]; // Dynamically allocated array
}
```
- The syntax for creating statically allocated array would be ``type identifier[SIZE]`` where
	- type refers to the datatype stored in the array
	- identifier refers to the name of the variable
	- SIZE would be the amount of elements to be in the array. (This must be a constant or integer literal)

- The syntax for creating statically allocated array would be ``new type[SIZE]`` which would return a value of type ``type*`` where
	- type refers to the datatype stored in the array
	- SIZE would be the amount of elements to be in the array. (This must be a constant or integer literal)

#### Manipulating values in an array
```cpp
int main() 
{
	
	int a[] = {1, 2, 3, 4, 5};
	
	int b = a[2]; // Accessing value from array
	
	a[1] = 45; // Setting value in an array
	
	// C++ does not natively support slicing but this may easily be achieved in other means
}
```
- Reffer to [this](https://www.cpp.edu/~elab/ECE114/Array.html) for further info

#### Array Library
- C++ also provides a separate array implementation i.e, a containerized version of C's arrays in the arrays package
- Reffer to [this](https://docs.microsoft.com/en-us/cpp/standard-library/array-class-stl?view=msvc-160) for further info

#### Caution
- In C++/C, accessing values outside an arrays bounds can cause [undefined behaviour](https://en.cppreference.com/w/cpp/language/ub) and often lead to [SIGSEGV](https://en.cppreference.com/w/c/program/SIG_types)

#### More
 - [Arrays - cplusplus.com](http://www.cplusplus.com/doc/tutorial/arrays/)
 - [Statically declared/allocated And Dynamically declared/allocated Arrays - University Of Washington](http://courses.washington.edu/css342/zander/css332/array.html#:~:text=In%20C%2B%2B%2C%20arrays%20do,how%20many%20elements%20they%20have.&text=Statically%20declared%20arrays%20are%20allocated,%2C%20one%20initialized%2C%20one%20not.)
 - [Dynamic memory](http://www.cplusplus.com/doc/tutorial/dynamic/)
 - [Microsoft C++ docs - Array Allocations](https://docs.microsoft.com/en-us/cpp/cpp/arrays-cpp?view=msvc-160)

#### Videos
- [TheCherno - Arrays](https://www.youtube.com/watch?v=ENDaJi08jCU) 
- [TheCherno - 2D Arrays](https://www.youtube.com/watch?v=gNgUMA_Ur0U) 
- [TheCherno - std::array](https://www.youtube.com/watch?v=Hw42GkHPyvk)


### Java
 - Arrays in Java are generally allocated on the heap and therefore can be categorized under dynamically allocated arrays.
 - Although in some cases the Just-In-Time (JIT) compiler optimizes certain array allocations onto the stack by [Escape Analysis](https://docs.oracle.com/javase/8/docs/technotes/guides/vm/performance-enhancements-7.html#escapeAnalysis), but this mostly should not be relied upon.

#### Initializing arrays
```java
import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); 
		int n = sc.nextInt();
		
		int[] a = new int[n];
		int[] b = new int[5]; 
		
		int[] c = {1, 2, 3, 4, 5};
		
		/*
		*  Altho generally considered bad practice, Java also allows C-style array types.
		*  i.e, using the array notation(The `[]`) after the identifier. 
		*/
		int d[] = {1, 2, 3, 4, 5};  
	}
}
```
- The syntax for creating arrays in java is ``new type[SIZE]`` which returns a value of type ``type[]`` where
	- type refers to the datatype stored in the array
	- SIZE would be the amount of elements to be in the array. (This can be a dynamically produced value, for eg: user input)
- Java also provides syntax to declare the elements of the array directly. i.e, ``new type[]{ELEMENTS}`` where
	- type refers to the datatype stored in the array
	- ELEMENTS refers to comma separated values of the type mentioned
- There is a further shorthand for the above syntax when the array is declared and initialized together. i.e ``type[] identifier = {ELEMENTS}`` where
	- type refers to the datatype stored in the array
	- ELEMENTS refers to comma separated values of the type mentioned

#### Manipulating values in an array
```java
public class Main {
	public static void main(String[] args) {
		int[] a = {1, 2, 3, 4, 5};
	
		int b = a[2]; // Accessing value from array
	
		a[1] = 45; // Setting value in an array
	
	// Java does not natively support slicing but this may easily be achieved in other means
	}
}
```
- Reffer to [this](https://www.w3schools.com/java/java_arrays.asp) for further info

#### Is Java's Array safer than C++ Arrays?
- Yes, these avoid undefined behaviour by throwing a runtime exception when program attempts to access indices outside the array's bounds, i.e, [ArrayIndexOutOfBoundsException](https://docs.oracle.com/javase/8/docs/api/java/lang/ArrayIndexOutOfBoundsException.html)

#### More
 - [Oracle Docs - Array](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
 - [Programiz - Array](https://www.programiz.com/java-programming/arrays)
 - [In-depth Tutorial on Arrays and Supporting functions](http://tutorials.jenkov.com/java/arrays.html)
 - [fyr, Array - JVM Bytecode Instructions](https://cs.nyu.edu/courses/fall00/V22.0201-001/jvm3.html)

#### Videos
 - [Arrays - Array Util Functions](https://www.youtube.com/watch?v=GQWbUdb4d58)
 - [Intro to Arrays](https://www.youtube.com/watch?v=o2ARur9hs9M)
 - [2D Arrays](https://www.youtube.com/watch?v=uaUddnxeK5M)
