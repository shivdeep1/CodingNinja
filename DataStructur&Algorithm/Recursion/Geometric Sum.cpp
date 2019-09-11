Ques:

Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion. Return the answer.
Sample Input :
3
Sample Output :
1.875


Sol::

double geometricSum(int k) {
    // Write your code here>
    if( k == 0 )
    return 1;

    int ans = pow ( 2 , k ) ;
    return ( ( double ) 1 / ans ) + geometricSum( k - 1);
}


