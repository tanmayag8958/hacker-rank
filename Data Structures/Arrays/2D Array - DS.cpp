/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
	*/
 #include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){ int sum=0; int temp=0; int a,b;
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
        for(int arr_i = 0;arr_i < 4;arr_i++){
       for(int arr_j = 0;arr_j < 4;arr_j++){
       sum = arr[arr_i][arr_j]+arr[arr_i][arr_j+1]+arr[arr_i][arr_j+2]+arr[arr_i+1][arr_j+1]+ arr[arr_i+2][arr_j+2] +arr[arr_i+2][arr_j+1] +arr[arr_i+2][arr_j];
        if(arr_i==0 && arr_j==0)
        temp =sum;
           if (sum>temp)
           {temp=sum;}
       
       }}
        cout<<temp;  
           return 0 ;}
