class Illustrate
 {
   private:
      int x;
      static int y;      //Private static varibale 
   public:
      static int count; // public static variable
      
      void print() const;
      void setX (int a);
      static void incrementY();   //Static function
      Illustrate (int a=0);       //default parameter
                                  // if no value is passed for a, set x=0
};
      
      
