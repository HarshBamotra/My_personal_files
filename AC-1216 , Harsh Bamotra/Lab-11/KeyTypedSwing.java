 //Harsh Bamotra AC-1216
//Program to display the typed key

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class KeyTypedSwing extends Frame
    {
	JLabel l;

	KeyTypedSwing()
		{
			l = new JLabel();
			l.setBounds(100 , 100 , 200 , 30);
			
			addKeyListener(new KeyAdapter()
				{
					public void keyTyped(KeyEvent k)
						{
							l.setText("The character you typed is " + k.getKeyChar());
						}
				});

			addWindowListener(new WindowAdapter()
				{
					public void windowClosing(WindowEvent v)
						{
							dispose();
						}
				});
				
			add(l);
			setBackground(Color.YELLOW);
			setSize(400 , 400);
			setLayout(null);
			setVisible(true);
		}
	public static void main(String args[])
		{
			new KeyTypedSwing();
		}
    }
			