#include <vector>
#include <string>
#include <iostream>
#include <algorithm> 
#include "dynarray.h"
using namespace std;

DynArray::DynArray() {
   sam = new int[2];
   _capacity = 2;
   _size = 0;
}

DynArray::DynArray(int n){
   _capacity = 2;
   _size = 0;
   return;
}


DynArray::~DynArray(){
   //delete _capacity;
   //delete _size;
   //return;
}


int DynArray::size(){
   
   return _size;
}

int DynArray::capacity(){
   return _capacity;
}

void DynArray::clear(){
   delete[] sam;
   sam = new int[2];
   _size = 0;
   _capacity = 2;
}

void DynArray::push_back(int n){
   if (_capacity >= _size ){
      sam[_size] = n;
      _size++;
   }
   else {
     // if (_capacity )
      _capacity*=2;
      _size++;
      int *temp = new int[_capacity];
      for (int i=0; i < (_size -1); i++){
         temp[i]= sam[i];
      }
      delete[] sam;
      sam = temp;
      sam[_size-1] = n;
   }
}

void DynArray::pop_back(){
   if (_size > 0) {
      _size--;
   }
}

int DynArray::at(int n){
   if (n <= _capacity) {
      return sam[n]; 
   }
   else {
    throw runtime_error("invalid index");
    return sam[n]; 
   }
}

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