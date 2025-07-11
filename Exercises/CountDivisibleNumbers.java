    /*
    CODEWARS EXERCISE
    AUTHOR: joh_pot
    URL: https://www.codewars.com/kata/55a5c82cd8e9baa49000004c/java
     */
    public static void main(String[] args) {
        System.out.println(divisibleCount(6, 11, 2));
    }
    public static long divisibleCount(long x, long y, long k) {
        //num of divisors
        long nDiv = 0;
        //With this operation we obtain the number of divisors till the major number (y) and substract the number of divisor till the lower number (x)
        nDiv = (y/k) - (x/k);
        //And in cases where x = 0, or x = y because in this cases the operation doesnt work
        if(x%k == 0){
            nDiv++;
        }
        return nDiv;
    }