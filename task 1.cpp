 #include<iostream>
 using namespace std;
 int main(){
    int size,value;
    cout<<"enter the size of an array:"<<endl;
    cin>>size;
    int arr[size];
    for(int i=1;i<=size;i++){
        cout<<"enter the value to store in array:"<<endl;
        cin>>arr[i];
    }
    for(int i=1;i<=5;i++)
    {
        cout<<arr[i]<<endl;
    }
 }