import java.util.Scanner;

class JavaTest
    {
        public static void main(String []args)
            {
                Scanner input=new Scanner(System.in);
                int arr[]=new int[3];
                for(int i=0 ; i<3 ; i++)
                    {
                        System.out.print("Enter the number " + (i+1) + " ::");
                        arr[i]=input.nextInt();
                    }
                
                for(int i=0 ; i<2 ; i++)
                    for(int j=0 ; j<2-i ; j++)
                        {
                            if(arr[j]<arr[j+1])
						        {
							        int temp=arr[j];
							        arr[j]=arr[j+1];
							        arr[j+1]=temp;
						        }
                        }
                System.out.print("The numbers in descending order ::");
                for(int i=0 ; i<3 ; i++)
                    {
                        System.out.print(arr[i] + " ");
                    }                  
                

                

            }
    }
