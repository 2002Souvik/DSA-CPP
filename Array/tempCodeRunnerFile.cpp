pair<int, int> checkTwoSum(int arr[], int n, int target){
//     //assuming -1,-1 as no answer found
//     pair<int, int>ans = make_pair(-1, -1); 
//     // let's check all pairs
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             //found a pair that sums to target
//             if(arr[i] + arr[j] == target){
//                 ans.first = arr[i];
//                 ans.second = arr[j];
//             return ans;
//             }
//         }
//     }
//     return ans;
// }