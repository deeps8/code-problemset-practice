/*
	In this question, there is two arrays, A and B of same length (let n). You have to identify pairs of indices (i, j) such that i < j and A[i] + A[j] > B[i] + B[j].

Return the count of pairs satisfying the given condition.

Constraints

n == A.length == B.length
1 <= n <= 10^5
1 <= A[i], B[i] <= 10^5

Format

Input

Input is managed for you.

Output

Output is managed for you.

Example

Sample Input

4
2 1 2 1
1 2 1 2

Sample Output

1


*/
import java.util.*;
public class Main{
    public static long countPairs(int[] A, int[] B,int n) {
        //write your code here..
        long c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(A[i]+A[j] > B[i]+B[j])
                    c++;
            }
        }
        return c;
    }

   

    public static void main(String [] args){
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int [] A = new int[n];
        int [] B = new int[n];
        for(int i = 0; i<n; i++){
            A[i] = scn.nextInt();
        }
        for(int i = 0; i<n; i++){
            B[i] = scn.nextInt();
        }

        long ans = countPairs(A,B,n);
        System.out.println(ans);
    }

}
