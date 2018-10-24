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
