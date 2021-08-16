 //Harsh Bamotra AC-1216
//Program to display a string in window with pink background

import java.awt.*;
import java.awt.event.*;

class PinkBackground
    {
	public static void main(String args[])
	    {
		Frame f = new Frame("Pink Background !!");
		
		Label l = new Label("This background is pink !!");
		l.setBounds(50 , 100 , 300 , 30);
		f.add(l);
		f.addWindowListener(new WindowAdapter()
				{
					public void windowClosing(WindowEvent v)
						{
							f.dispose();
						}
				});

		f.setBackground(Color.PINK);
		f.setSize(400 , 400);
		f.setLayout(null);
		f.setVisible(true);
	    }
    }
			