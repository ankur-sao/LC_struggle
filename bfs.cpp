#include<iostream>
#include<stack>
#include  "int_overflow.h"
#include "transform_use.h"
#include "Tree.h"
#include "linked_list.h"
#include "min_stack.h"
#include "queue_stack.h"
#include "sliding_window_max.h"

#include<cmath>


using namespace std;


#define nl cout<<endl

int main(){

    cout <<  "Hello  world!" << endl;

    vector<int> A = {-10,-2,3,4,-5,2,3,1};

    slideWindowMax SM;

    vector<int> B = SM.solution3(A,3);
    for(auto b:B)cout<<b<<" ";
    nl;

   return 0;

}