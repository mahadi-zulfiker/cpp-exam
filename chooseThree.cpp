#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int T;
    cin >> T;
    
    while (T--) {
        int N, S;
        cin >> N >> S;
        
        vector<int> A(N);
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }
        
        sort(A.begin(), A.end());
        
        bool found = false;
        
        for(int i = 0; i < N - 2; i++){
            int left = i + 1, right = N - 1;
            
            while(left < right){
                int currentSum = A[i] + A[left] + A[right];
                
                if(currentSum == S){
                    found = true;
                    break;
                }
                else if(currentSum < S){
                    left++;
                }
                else{
                    right--;
                }
            }
            if(found) break;
        }
        cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}