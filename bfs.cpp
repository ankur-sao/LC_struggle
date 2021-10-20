#include<iostream>
#include<stack>
#include  "int_overflow.h"
#include "transform_use.h"
#include "Tree.h"
#include "linked_list.h"
#include "min_stack.h"
#include "queue_stack.h"
#include "sliding_window_max.h"
#include "palindrome_int.h"

#include<cmath>
#include "slidingWindow.h"
#include "string_problem.h"

using namespace std;


#define nl cout<<endl

int main(){
    
    string A =  "  Ankur     Sao";
    Spliter S;
    vector<string> B;
    S.split(A, ' ', B);
    cout << "start  printing\n";
    for(auto s: B)cout<<s<<endl;



   return 0;
}