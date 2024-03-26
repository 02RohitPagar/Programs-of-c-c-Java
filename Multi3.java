
class Multi3
{
    public static void main(String Arr[])
    {
        System.out.println("Current thread is:"+Thread.currentThread().getName());
           Demo obj1 = new Demo();
           Demo obj2 = new Demo();

           obj1.setName("first_thread");
          obj2.setName("second_thread");

           obj1.start();
           obj2.start();
        System.out.println("Thread is dead...");
    }
}
class Demo extends Thread
{
  public void run()
  {
    String name = Thread.currentThread().getName();
    System.out.println("Current thread is:"+Thread.currentThread().getName());
   for(int i=1;i<1000;i++)
   {
      System.out.println("Name of \thread is:"+name+"with counter:"+i);
   }
  }
}