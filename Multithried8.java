
ic static void main(String arg[])thros Exception{

ut.println("current thred is :"+Thread.urentThread().getName());

1=new Dem(;

Name("First_Thread");obj1.sta

    public void run() {

        for (int i = 1; i < 10; i++) {
            try{
                System.out.println("value of i is "+i);
                Thread.sleep(1000);
            }
        }
        System.out.println("End of thread");
    }
}

// javac Multithried8.java
// java Multithried8