#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*1ll * (b)) / gcd(a, b)

using namespace std;
bool isprime(ll a)
{
    for(int i=2;i*i<=a;i++)
    {   if(a%i==0)
            return false;
            
    }   
    return true;
    
}
ll ceil(ll a,ll b)
{   if(a%b==0) 
        return a/b;
    else 
        return a/b+1;
    
}

void sol()
{
    ll n,ind=0,sind=0,jh=0;
    cin>>n;
    string s;
    cin>>s;
    ll tc=0,mc=0;
    for(ll i=0;i<n;i++){
    	if(s[i]=='T'){
    		tc++;
		}else if(s[i]=='M'){
			mc++;
			ind=i;
			if(jh==0){
				sind=i;
				jh=1;
			}
		}
	}
	ll met=n/3;
	ll tet=2*met;
	if(tet!=tc || met!=mc){
		cout<<"NO\n";
	}else{
		tc=0;
		ll flag=0;
		for(ll i=0;i<=ind;i++){
	    	if(s[i]=='T'){
	    		tc++;
			}else if(s[i]=='M' && tc>0){
				tc--;
			}else{
				flag=1;
			}
		}
		if(flag==0){
			tc=0;
			for(ll i=n-1;i>=sind;i--){
				if(s[i]=='T'){
		    		tc++;
				}else if(s[i]=='M' && tc>0){
					tc--;
				}else{
					flag=1;
				}
			}
		}
		if(flag==1){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}
	} 
    
    
    
}

int main() {
    long long int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        sol();
    }
	
	
	return 0;
}
 
