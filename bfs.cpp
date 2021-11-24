#include<iostream>
#include<stack>
#include<set>
#include<unordered_map>

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
#include "level_order_queue.h"

using namespace std;


#define nl cout<<endl

int main(){
    
    string A =  "  Ankur     Sao";
    Spliter S;
    vector<string> B;
    S.split(A, ' ', B);
    cout << "start  printing\n";
    for(auto s: B)cout<<s<<endl;

    unordered_map<int, set<int>> ummap;

    set<int>S1,S2;
    S1.insert(1);

    ummap[1] = S1;
    ummap[2] = S2;

    if (ummap.find(1) != ummap.end()){
        cout << "Entry for 1: present..\n";
    }

    if (ummap.find(2) != ummap.end()){
        cout << "Entry for 2: present..\n";
    }

    if (ummap.find(3) == ummap.end()){
        cout << "Entry for 3: not present..\n";
    }



   return 0;
}