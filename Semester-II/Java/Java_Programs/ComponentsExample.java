 //Harsh Bamotra AC-1216
//Program to add different awt components 

import java.awt.*;

class ComponentsExample extends Frame
    {	
	ComponentsExample()
		{
			Button b = new Button("Submit");
			add(b);
			b.setBounds(50 , 50 , 50 , 20);
			setSize(400 , 300);
			setLayout(null);
			setVisible(true);
		}
	public static void main(String[] args)
		{
			new ButtonsExample();
		}
    }