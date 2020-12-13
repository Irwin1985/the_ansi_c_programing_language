using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TestNET
{
    class Program
    {
        public static int fibbonacci(int n)
        {
            if (n == 0)
                return 0;
            if (n == 1)
                return 1;
            return fibbonacci(n - 1) + fibbonacci(n - 2);
        }

        static void Main(string[] args)
        {
            Stopwatch stopWatch = new Stopwatch();
            stopWatch.Start();
            for (int i = 1; i <= 35; i++)
                Console.WriteLine(fibbonacci(i));
            stopWatch.Stop();
            TimeSpan ts = stopWatch.Elapsed;
            string elapsedTime = String.Format("{0:00}:{1:00}:{2:00}.{3:00}",
            ts.Hours, ts.Minutes, ts.Seconds,
            ts.Milliseconds / 1);
            Console.WriteLine("RunTime " + elapsedTime);
        }
    }
}
