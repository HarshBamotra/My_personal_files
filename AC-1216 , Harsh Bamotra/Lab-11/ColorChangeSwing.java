 //Harsh Bamotra AC-1216
//Program to create change the color of the background with two buttons

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class ColorChangeSwing extends Frame implements ActionListener
    {
	JButton b1 , b2;
	ColorChangeSwing()
		{
			b1 = new JButton("Green");
			b2 = new JButton("Blue");
			
			b1.setBounds(50 , 80 , 100 , 50);
			b2.setBounds(150 , 80 , 100 , 50);

			addWindowListener(new WindowAdapter()
				{
					public void windowClosing(WindowEvent v)
						{
							dispose();
						}
				});
			
			b1.addActionListener(this);
			b2.addActionListener(this);
			
			add(b1);
			add(b2);

			setSize(400 , 400);
			setLayout(null);
			setVisible(true);
		}

	public void actionPerformed(ActionEvent e)
		{
			if(e.getSource()==b1)
				{
					setBackground(Color.GREEN);
				}
			if(e.getSource()==b2)
				{
					setBackground(Color.BLUE);
				}
		}
			
	public static void main(String args[])
	    {
		new ColorChangeSwing();
	    }
    }

		
		