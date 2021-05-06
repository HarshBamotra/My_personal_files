class Book 
    {
        String title , publisher;
        int yearOfPublication , price;

        Book(String t , String p , int y , int pri)
            {
                title=t;
                publisher=p;
                yearOfPublication=y;
                price=pri;
            }
        
        public void show()
            {
                System.out.println("****** Details of book ******");
                System.out.println("Book ::" + title);
                System.out.println("Year of publication ::" + yearOfPublication);
                System.out.println("Publisher ::" + publisher);
                System.out.println("Price ::" + price);
            } 

            public static void main(String[] args)
            {
                Book obj=new Book("Goosebumps" , "abc" , 2020 , 299);
                obj.show();
            }
    }
