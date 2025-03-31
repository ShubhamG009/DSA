//pointer approach

class Solution {
    public:
      void pushZerosToEnd(vector<int>& arr) {
          // code here
          int not_zero = 0;
          for(int i = 0; i < arr.size(); i++){
              if(arr[i] != 0){
                  swap(arr[i],arr[not_zero]);
                  not_zero++;
              }
          }
      }
  };
