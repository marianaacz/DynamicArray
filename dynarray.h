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
