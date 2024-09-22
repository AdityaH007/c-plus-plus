#include <iostream>
#include <mutex>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

mutex m; // used to protect access to shared data

void f()
{
    unique_lock<mutex>lck {m}; //acquire the mutex m
    // manipulate shared data
}

// a thread will not procees until lck's constrcutor has expired ts mutex,m

/* 
   In this examle
   unique lock's destrcutor releases the mutex when the thread of control leaves 
   f() 

*/


RESOURCE ACQUISITION IS INITIALIZATION 
