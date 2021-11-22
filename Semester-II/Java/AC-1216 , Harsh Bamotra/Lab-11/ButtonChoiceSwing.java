 //Harsh Bamotra AC-1216
//Program to display different details on pressing different buttons

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class ButtonChoiceSwing extends Frame implements ActionListener
    {
	JLabel l1 , l2 , l3 , l4 , l5;
	JButton b1 , b2;
	JTextField t1 , t2 , t3 , t4 , t5;
	
	ButtonChoiceSwing()
		{
			l1 = new JLabel("Name");
			l2 = new JLabel("Course");
			l3 = new JLabel("Roll No.");
			l4 = new JLabel("Colloge");
			l5 = new JLabel("CGPA");

			t1 = new JTextField();
			t2 = new JTextField();
			t3 = new JTextField();
			t4 = new JTextField();
			t5 = new JTextField();	

			l1.setBounds(150 , 100 , 100 , 30);
			l2.setBounds(150 , 150 , 100 , 30);
			l3.setBounds(150 , 200 , 100 , 30);
			l4.setBounds(150 , 250 , 100 , 30);
			l5.setBounds(150 , 300 , 100 , 30);

			t1.setBounds(250 , 100 , 200 , 30);
			t2.setBounds(250 , 150 , 200 , 30);
			t3.setBounds(250 , 200 , 200 , 30);
			t4.setBounds(250 , 250 , 200 , 30);
			t5.setBounds(250 , 300 , 200 , 30);
			
			b1 = new JButton("Details");
			b2 = new JButton("CGPA");

			b1.addActionListener(this);
			b2.addActionListener(this);
			
			addWindowListener(new WindowAdapter()
				{
					public void windowClosing(WindowEvent v)
						{
							dispose();
						}
				});

			b1.setBounds(150 , 500 , 100 , 30);
			b2.setBounds(350 , 500 , 100 , 30);

			add(b1);add(b2);add(l1);add(l2);add(l2);add(l3);add(l4);add(l5);
			add(t1);add(t2);add(t2);add(t3);add(t4);add(t5);
			
			setBackground(Color.GREEN);
			setSize(600 , 600);
			setLayout(null);
			setVisible(true);
		}

	public void actionPerformed(ActionEvent e)
		{
			if(e.getSource()==b1)
				{
					t1.setText("Harsh Bamotra");
					t2.setText("Bsc Hons. CS");
					t3.setText("AC-1216");
					t4.setText("ANDC");
				}
			if(e.getSource()==b2)
				t5.setText("9.27");
		}

	public static void main(String args[])
		{
			new ButtonChoiceSwing();
		}
    }
					
									
	