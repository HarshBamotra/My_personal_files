 //Harsh Bamotra AC-1216
//Program to create change the color of the background with two buttons

import java.awt.*;
import java.awt.event.*;

class ColorChange extends Frame implements ActionListener
    {
	Button b1 , b2;
	ColorChange()
		{
			b1 = new Button("Green");
			b2 = new Button("Blue");
			
			b1.setBounds(50 , 80 , 100 , 50);
			b2.setBounds(150 , 80 , 100 , 50);
			
			b1.addActionListener(this);
			b2.addActionListener(this);
			
			add(b1);
			add(b2);

			addWindowListener(new WindowAdapter()
				{
					public void windowClosing(WindowEvent v)
						{
							dispose();
						}
				});


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
		ColorChange obj=new ColorChange();
	    }
    }

		
		