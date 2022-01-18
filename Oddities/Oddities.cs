using System;
namespace Oddities
{
    class program
    {
        static void Main(string [] args)
        {
            int cases = Convert.ToInt32(Console.ReadLine());
            int query;
            while (cases > 0)
            {
                cases--;
                query = Convert.ToInt32(Console.ReadLine());
                if (query % 2 == 0)
                {
                    Console.WriteLine(query + " is even");
                } 
                else 
                {
                    Console.WriteLine(query + " is odd");
                }
            }
        }
    }  
}