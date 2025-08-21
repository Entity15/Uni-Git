class RandomFuncs {
    public static void ctof(int c) {
        System.out.println((c * 9 / 5) + 32);
    }
    public static void areaoftriangle(int b, int h) {
        System.out.println((b * h) / 2);
    }
    public static void primechecker(int n) {
        boolean isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i <= Math.sqrt(n); i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        System.out.println(n + " is " + (isPrime ? "a prime number." : "not a prime number."));
    }
    public static void sumofdigits(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        System.out.println(sum);
    }
    public static void fibonacci(int n) {
        int a = 0, b = 1;
        System.out.print("Fibonacci series up to " + n + ": ");
        while (a <= n) {
            System.out.print(a + " ");
            int next = a + b;
            a = b;
            b = next;
        }
        System.out.println();
    }
}
