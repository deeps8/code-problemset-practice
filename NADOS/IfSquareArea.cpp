/*
	There is a group of four friends standing at some coordinates in 2D plane. Each one's coordinate are given as cordi = [ ai, bi ].
The coordinates of the friends are given in any order.
Check if a square can be created by using the coordinates of the friends. If square can be created then return the area of the square formed. If square creation is not possible then return -1.0.

Constraints

c1.length == c2.length == c3.length == c4.length == 2
-10^4 <= ai, bi <= 10^4

Format

Input

input is managed for you.

Output

output is managed for you.

Example

Sample Input

0 3
0 -3
3 0
-3 0

Sample Output

324.0


*/
#include<bits/stdc++.h>
using namespace std;
    
double charDost(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d){
    //Write your code here
    double dist[6];
        dist[0] = sqrt(pow(a[0]-b[0],2) + pow(a[1]-b[1],2));
        dist[1] = sqrt(pow(a[0]-c[0],2) + pow(a[1]-c[1],2));
        dist[2] = sqrt(pow(a[0]-d[0],2) + pow(a[1]-d[1],2));
        dist[3] = sqrt(pow(b[0]-c[0],2) + pow(b[1]-c[1],2));
        dist[4] = sqrt(pow(b[0]-d[0],2) + pow(b[1]-d[1],2));
        dist[5] = sqrt(pow(c[0]-d[0],2) + pow(c[1]-d[1],2));
        
    sort(dist,dist+6);
    
    int count = 1;
    for(int i=1;i<4;i++){
        if(dist[0]==dist[i])
            count++;
    }

    if(count!=4)
        return -1;
    double d1 = (dist[5])*(dist[5]), d2 = dist[0]*dist[0]*2; 
    if(dist[4]==dist[5])
        return pow(d2/2,2);
    else
        return -1;
    
        
}

int main()
{
    vector<int> c1(2,0),c2(2,0),c3(2,0),c4(2,0);
    cin>>c1[0]>>c1[1];
    cin>>c2[0]>>c2[1];
    cin>>c3[0]>>c3[1];
    cin>>c4[0]>>c4[1];
    double ans = charDost(c1, c2,c3,c4);
    cout<<ans<<".0";
}

