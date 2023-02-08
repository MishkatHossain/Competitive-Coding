#include<bits/stdc++.h>
using namespace std;

#define endl        '\n'
#define pb          push_back
#define pf          push_front
#define mp          make_pair
#define mem(a,i)    memset(a,i,sizeof(a))
#define ff          first
#define ss          second
#define all(V)      V.begin(),V.end()
#define w(t)        int t;cin>>t;while(t--)
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;

int gcd(int a, int b) {
    if (b == 0) return a;
        return gcd(b, a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}


int Prime[300000];
int nPrime = 0; // counting prime
bool mark[1000002];
void sieve(int n)
{
    int limit = sqrt(n*1) + 2;

    mark[1] = false;    //1 != prime

    for(int i=4; i<= n; i += 2) 	//Cutting even no. or 2's multiple except 2 because 2 is a prime
        mark[i] = true;

    Prime[nPrime++] = 2;    // 2 is prime; Prime[0] = 2 and than nPrime++;

    for(int i=3; i<=n; i+=2) //running loop only for odds.
    {
        if(!mark[i])    //if false
        {
            Prime[nPrime++] = i;

            if(i<=limit)
                for(int j = i*i; j <= n; j = j + i*2)
                    mark[j] = true;
        }
    }
}
ll modpow(int x, int n, int m)
{
    if (n == 0) return 1%m;
    ll u = modpow(x,n/2,m);
    u = (u*u)%m;
    if (n%2 == 1) u = (u*x)%m;
    return u;
}
ll bigPow(ll a, ll n)
{
    if(n==0) return 1;

    ll res = bigPow(a, n/2);

    if(n%2==0) // even pow
        return res * res;
    else    // odd pow
        return res * res * a;
}


void printSubArrays(vector<int> arr, int start, int end)
{
    // Stop if we have reached the end of the array
    if (end == arr.size())
        return;
    // Increment the end point and start from 0
    else if (start > end)
        printSubArrays(arr, 0, end + 1);
    // Print the subarray and increment the starting point
    else {

        for (int i = start; i <= end; i++)
            cout << arr[i] << " ";
        cout << endl;

        printSubArrays(arr, start + 1, end);
    }
}



int main()
{
    FASTIO

//    w(t)
//    {
//        int n; cin>>n;
//        string s; cin>>s;
//
//        int m = -999;
//
//
//
//        for(int i=0; i<n; i++)
//        {
//            set<char>Q;
//            set<char>T;
//
//            for(int k=0; k<=i; k++)
//            {
//                Q.insert(s[k]);
//            }
//
//            for(int w=i+1; w<n; w++)
//            {
//                T.insert(s[w]);
//            }
//
//            int sum = Q.size() + T.size();
//            m = max(m, sum);
//        }
//
//        cout << m << endl;
//    }




}







