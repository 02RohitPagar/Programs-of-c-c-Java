import java.awt.*;
import java.awt.event.*;

class GUI3
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
       fobj.addWindowListener(new MarvellousListener());
     }
}
class MarvellousListener implements WindowFocusListener
{
  public void windowLostFocus(WindowEvent obj){}
  public void windowGainedFocus(WindowEvent obj){}
  public void WindowClosing(WindowEvent obj)
  {
    System.exit(0);
  }
}