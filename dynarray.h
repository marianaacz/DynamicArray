#include <vector>
#include <string>
#include <iostream>
#include <algorithm> 

using namespace std;

class DynArray
{
private:
   int *sam;
   int _size; //m
   int _capacity; //n
   int n;


public:
   DynArray(); // def constructor
   DynArray(int n); //param constructor
   ~DynArray();
   int size();
   int capacity();
   void pop_back();
   void push_back(int n);
   void clear();
   int at(int n);

};

/*A function size() that returns the current size of your DynArray instance. 
The size will change as integer values are added or removed.
*A function capacity() that returns the current allocated capacity of the DynArray.
The capacity is defined as the number of integer values that can be stored in the DynArray instance. 
The capacity changes when the underlying array grows.
*A function clear() that returns the dynamic memory to the heap, 
and resets its size to zero and capacity to the default of two, allocating fresh heap memory.
*A function push_back(int n) that adds the integer value n to the end of the DynArray. 
If it is not large enough to hold this additional value, you must increase the size of the backing array, as explained above.
*A function pop_back(), that decrements the size of the DynArray by 1. No change is made to the allocation.
*A function at(int n) that returns the value of the integer stored at index n of the DynArray. 
If the index is outside the range of the vector (no element at that index), 
this function should throw a std::runtime_error with an appropriate message.
*/