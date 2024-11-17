import java.util.Scanner;
class maths
{
    int sum(int a , int b)
    {
        return(a+b);

    }
    int sub (int a , int b)
    {
        return(a-b);
    
    } 
    int multiply(int a, int b)
    {
        return(a*b);
    
    }
    public static void main (String args[])
    {
        Scanner sc  = new Scanner(System.in);
        System.out.println("enter 2 no.s");
        int i = sc.nextInt();
        int j = sc.nextInt();
        maths ob = new maths();
        System.out.println(ob.sum(i,j));
        System.out.println(ob.sub(i,j));
        System.out.println(ob.multiply(i,j));
       
    }

}