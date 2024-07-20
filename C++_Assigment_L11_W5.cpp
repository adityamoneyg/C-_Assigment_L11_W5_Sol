#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mult=1;
    for(int i=0;i<n;i++){
        mult=mult*arr[i];
    }
    cout<<mult;
}

//                                 2 Solution

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }else if(arr[i]>max2 && arr[i]!=max1){
            max2 = arr[i];
        }
    }
    cout<<max2;
}

//                                 3 Solution

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int min_value = INT_MAX;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<min_value){
            min_value = arr[i];
        }
    }
    cout<<min_value;
}

//                                 4 Solution

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    bool flag = false;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    if(flag){
        cout<<"Duplicate";
    }else{
        cout<<"No Duplicate";
    }
}

//                                 5 Solution

#include<iostream>
#include<climits>
using namespace std;
int smallestMissingPositiveElement(int arr[], int n){
    int min_element = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>0 && arr[i]<min_element){
            min_element = arr[i];
        }
    }
    int i=1;
    while(i<=min_element){
        bool flag = true;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                flag = false;
                break;
            }
        }
        if(flag){
            return i;
        }
        i++;
    }
    return min_element+1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<smallestMissingPositiveElement(arr,n);
}

//                                    6 Solution

#include<iostream>
using namespace std;
int main()
{
int sub[50], i ;
for ( i = 0 ; i <= 48 ; i++ ) ;
{
sub[i] = i ;
cout<<sub[i]<<endl ;
}
return 0;
}                                                    // Output is 49