// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
        
//         return  (n>0 && (n & (n-1))==0) ? true:false;
//     }
// };

// int main(){
//     // int a = 0;
//     // int b = 1;
//     // int f;
//     // cout<<a<<"\t";
//     // cout<<b<<"\t";
//     // for(int i = 0; i < 10; i++)
//     // {
//     //     f = a+b;
//     //     cout<<f<<"\t";
//     //     a = b;
//     //     b = f;
//     // }


//     // int n = 5;
//     Solution obj;
//     bool a = obj.isPowerOfTwo(6);
//     cout<<;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//   int k = 10;
//   int s = 20;
//   swap(k,s);
//   cout<<k<<" "<<s;  
// } 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,3,6,5,4,2,6,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans  =0;
    for(int i = 0; i < size; i++)
    {
        cout<<ans<<"^"<<arr[i]<<"=="<<ans<<endl;
        ans = (ans)^(arr[i]);
    }
    cout<<ans;

    return 0;
}


