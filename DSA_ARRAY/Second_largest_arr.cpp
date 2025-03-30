class Solution {
    public:
      // Function returns the second
      // largest elements
      int getSecondLargest(vector<int> &arr) {
          // Code Here
          int largest = INT_MIN;
          int second_l = INT_MIN;
          
          for(int i = 0; i < arr.size(); i++){
              if(arr[i] > largest){
                  second_l = largest;
                  largest = arr[i];
              }else if(arr[i] > second_l && arr[i] < largest){
                  second_l = arr[i];
              }
          }
          return (second_l == INT_MIN) ? -1 : second_l;
      }
  };
    
