 //Harsh Bamotra AC-1216
//Program to create a mouselistener to record mouse events 

import java.awt.*;
import java.awt.event.*;

public class MouseExample extends Frame implements MouseListener
    {
	Label l;
	MouseExample()
		{
			addMouseListener(this);
			l=new Label();
			l.setBounds(50 , 50 , 100 , 20);
			add(l);
			setSize(400 , 300);
			setLayout(null);
			setVisible(true);
		}
	public void mouseClicked(MouseEvent e)
		{
			l.setText("Mouse Clicked !!");
		}
	public void mousePressed(MouseEvent e)
		{
			l.setText("Mouse Pressed !!");
		}
	public void mouseEntered(MouseEvent e)
		{
			l.setText("Mouse Entered !!");
		}
	public void mouseExited(MouseEvent e)
		{
			l.setText("Mouse Exited !!");
		}
	public void mouseReleased(MouseEvent e)
		{
			l.setText("Mouse Released !!");
		}
	public static void main(String[] args)
	   	 {
			MouseExample obj = new MouseExample();
	    	 }
    }
	
			