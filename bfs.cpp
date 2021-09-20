#include<iostream>
#include  "int_overflow.h"
#include "transform_use.h"
#include "Tree.h"
#include "linked_list.h"
#include "min_stack.h"

using namespace std;

int main(){

    cout <<  "Hello  world!" << endl;

    vector<int> A = {1,2,3,4};
    
    minStack MS;
    MS.push(10);
    MS.push(3);
    MS.push(4);
    MS.push(23);
    MS.push(-10);
    MS.pop();
    cout << MS.min() << endl;



    
    
    
    
    

    return 0;
}