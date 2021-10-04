#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    int n;
    cout<<"Enter N = ";
    cin>>n;
    int count[n] = {0};
    int a[n];
    cout<<"Enter"<<n<<"Elements in range [0,"<<n-1<<"]= ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        int da = (n/10)+1;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {count[a[i]]++;}
        for(int i=0;i<n;i++)
        {
            if(count[i]>0)
            {
                cout<<i<<"-->"<<count[i]<<'\n';
            }
        }
        cout<<"Decimal Dominants - \n";
        for(int i=0;i<n;i++){
            if(count[i]>0){
                if(count[i]>da)
                cout<<i<<"-->"<<count[i]<<'\n';
            }
        }
    

    return 0;
}
