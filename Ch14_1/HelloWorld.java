public class HelloWorld {
	public HelloWorld(){
		
        }
	public static void main(String[] args)
	{
				int count = 0; 
				
                try
                {
                	count++;
					if(count == 1) throw new Exception("Exception in try");	            			
	            	return;		
                }
                catch(Exception e)
                {
                	 System.out.println("catch block");
                	 System.out.println(count);
                	 //return;                	 
                }
                finally
                {
                	System.out.println("This is inside the finally block.");
                	count = 0;
                	System.out.println(count);

                }                  
		        System.out.println("Hello World");
                
	}
}
