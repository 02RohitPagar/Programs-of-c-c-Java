import java.awt.*;

class GUI2
{
    public static void main(String arg[])
    {
      MarvellousFrame mobj=new MarvellousFrame("PPA49");
    }
}
class MarvellousFrame
{
    public MarvellousFrame(String title)
     {Frame fobj = new Frame (title);
       fobj.setSize(300,600);
       fobj.setVisible(true);
     }
}