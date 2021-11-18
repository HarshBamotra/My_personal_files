 //Harsh Bamotra AC-1216
//Program to display different details on pressing different buttons

import java.awt.*;
import java.awt.event.*;

class ButtonChoice extends Frame implements ActionListener
    {
	Label l1 , l2 , l3 , l4 , l5;
	Button b1 , b2;
	
	ButtonChoice()
		{
			l1 = new Label();
			l2 = new Label();
			l3 = new Label();
			l4 = new Label();
			l5 = new Label();

			l1.setBounds(250 , 100 , 200 , 30);
			l2.setBounds(250 , 150 , 200 , 30);
			l3.setBounds(250 , 200 , 200 , 30);
			l4.setBounds(250 , 250 , 200 , 30);
			l5.setBounds(250 , 300 , 200 , 30);
			
			b1 = new Button("Details");
			b2 = new Button("CGPA");

			b1.addActionListener(this);
			b2.addActionListener(this);
			
			b1.setBounds(150 , 500 , 100 , 30);
			b2.setBounds(350 , 500 , 100 , 30);

			add(b1);add(b2);add(l1);add(l2);add(l2);add(l3);add(l4);add(l5);
			
			addWindowListener(new WindowAdapter()
				{
					public void windowClosing(WindowEvent v)
						{
							dispose();
						}
				});
			
			setBackground(Color.GREEN);
			setSize(600 , 600);
			setLayout(null);
			setVisible(true);
		}

	public void actionPerformed(ActionEvent e)
		{
			if(e.getSource()==b1)
				{
					l1.setText("Name :: Harsh Bamotra ");
					l2.setText("Course :: BSc Hons. CS");
					l3.setText("Roll No. :: AC-1216");
					l4.setText("Colloge :: ANDC");
				}
			if(e.getSource()==b2)
				l5.setText("CGPA :: 9.27");
		}

	public static void main(String args[])
		{
			new ButtonChoice();
		}
    }
					
									
	