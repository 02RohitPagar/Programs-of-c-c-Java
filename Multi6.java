
class Multi6
{
    public static void main(String Arr[])throws Exception
    {
        System.out.println("Current thread is:"+Thread.currentThread().getName());
        Demo obj1 = new Demo();
        Demo obj2 = new Demo();
        obj1.start();
        obj2.start();
        System.out.println("Priority of obj1 is:"+obj1.getPriority());
       System.out.println("Priority of obj2 is:"+obj2.getPriority());
       
       obj1.setPriority(8);
       obj1.setPriority(10);
       System.out.println("Priority of obj1 is:"+obj1.getPriority());
       System.out.println("Priority of obj2 is:"+obj2.getPriority());

    }
}
class Demo extends Thread
{
  public void run()
  {
  
  }
}