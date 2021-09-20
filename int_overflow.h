#include<iostream>

using namespace  std;
/*

https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/880/

*/

class int_overflow{
    public:

    int reverse(int a);
};

int int_overflow::reverse(int a){

    cout << "int_max: " << INT32_MAX << endl;
    cout << "int_min: " << INT32_MIN << endl;
    int res  = 0;

    while (a){
        int pop = a % 10;
        a  = a/10;

        int temp = res*10 + pop;     

         // res * 10  + pop > int32_max   
        // res  > (int32_max  - pop )/ 10  
         //  res == int32_max/ 10 && pop > 7    overflow
         // res < int32_max /10  ok
         // res > int32_max / 10 overflow 

         // res  == intr32_min / 10 && pop > 8  overflow
         // res  > int32_min / 10  ok
         // res < int32_min / 10   overflow
        

        if  ((res > INT32_MAX / 10 ) || (res == INT32_MAX / 10 && pop > 7 )) { 
            return -1;
        }
        if ( (res < INT32_MIN / 10 ) || ( res == INT32_MIN / 10 && pop < -8)) {
            return -1;
        }

        res =  temp;

    }

    return res;

}