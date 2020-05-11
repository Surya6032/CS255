using namespace std;
const int MAX=5;
class Customer
{
   private:
      int arrivalTime;
      int departureTime;
      int serviceTime;
      int processTime;
   public:
       Customer(int ArrivalTime,int DepartureTime,int ServiceTime,int ProcessTime)
            {
                arrivalTime=ArrivalTime;
                departureTime=DepartureTime;
                serviceTime=ServiceTime;
                processTime=ProcessTime;
            }
        void setArrival(int ArrivalTime){arrivalTime=ArrivalTime;}
        void setDeparture(int DepartureTime){departureTime=DepartureTime;}
        void setService(int ServiceTime){serviceTime=ServiceTime;}
        void setProcess(int ProcessTime){processTime=ProcessTime;}
        int  getArrival() const{return arrivalTime;}
        int  getDeparture() const{return departureTime;}
        int  getService() const{return serviceTime;}
        int  getProcess() const{return processTime;}




};
class Queue
{
   private:
     int front;
     int rear;
     int count;
     int array[MAX];
   public:
     Queue(int size)
        {
          front=-1;
          rear =-1;
          count=size;
          array[MAX]=0;
        }
     void eneque(int value);
     int dequeue();
     bool full() const;
     bool empty()const;
     void dump()const;
     void update(Customer ProcessTime);


};



