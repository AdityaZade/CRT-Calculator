#include<iostream>
#include<algorithm>
using namespace std;

int findMinX(int num[], int rem[], int k)
{
    int x = 1; // Initialize result

    // As per the Chinise remainder theorem,
    // this loop will always break.
    while (true)
    {
        // Check if remainder of x % num[j] is
        // rem[j] or not (for all j from 0 to k-1)
        int j;
        for (j=0; j<k; j++ )
            if (x%num[j] != rem[j])
               break;

        // If all remainders matched, we found x
        if (j == k)
            return x;

        // Else try next numner
        x++;
    }

    return x;
}
int main()
{
	int n;
	long int N=1;//product of coprimes
	
	cout<<"Enter the number of simultaneous congruence relations";
	cin>>n;
	
	int a[n];//array  of remainders
	int c[n];// array of coprimes	
	
	cout<<"Enter the remainder and co-prime integer for each equation";
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int ans= findMinX(c,a, n);
	cout<<"-----------------------------------------------------------------"<<"\n";
     
	cout<<"The final answer is :"<<ans;
	return 0;
	
}
