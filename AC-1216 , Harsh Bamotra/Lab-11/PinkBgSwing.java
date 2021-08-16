 //Harsh Bamotra AC-1216
//Program to display a string in window with pink background

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class PinkBgSwing
    {
	public static void main(String args[])
	    {
		JFrame f = new JFrame("Pink Background !!");
		
		JLabel l = new JLabel("This background is pink !!");
		l.setBounds(50 , 100 , 300 , 30);

		f.addWindowListener(new WindowAdapter()
				{
					public void windowClosing(WindowEvent v)
						{
							f.dispose();
						}
				});
		f.add(l);
		f.getContentPane().setBackground(Color.PINK);
		f.setSize(400 , 400);
		f.setLayout(null);
		f.setVisible(true);
	    }
    }
			