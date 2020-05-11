#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
const int MAX_INVOICES=100;
const double FLORENCE_TAX_RATE=0.095;

struct invoiceType
{
  int invoiceID;
  string custFirstNames, custLastName, itemDescription;
  double itemUnitCost;
  int quantity;
};
void readInvoices (invoiceType inv[], int &num);
void printSingleInvoice (invoiceType inv);
void printInvoiceIDs (const invoiceType inv[], int num);
double findTotalCost (invoiceType inv);
void sortByLastName(invoiceType inv[], int num);
void newInvoices (invoiceType inv[], int &num);
void writeToFile (invoiceType inv[],int num);
int main()
{
  int numInvoices=0;
  invoiceType invoice[MAX_INVOICES];
  readInvoices (invoice, numInvoices);
  //printInvoiceIDs (invoice, numInvoices);
  newInvoices(invoice, numInvoices);    
  for (int k=0; k<numInvoices; k++){
      printSingleInvoice (invoice[k]);

 
  }

 sortByLastName(invoice, numInvoices);
 cout<<"AFTER THE SORT: "<<endl;
  for (int k=0; k<numInvoices; k++){
      printSingleInvoice (invoice[k]);
   }
  writeToFile(invoice, numInvoices);
 
  return 0;
}
void writeToFile (invoiceType inv[],int num)
{
 ofstream outfile("invoices.txt");
 for(int i=0;i<num;i++)
     outfile<< inv[i].invoiceID << endl<< inv[i].custFirstNames 
      <<endl<< inv[i].custLastName << endl <<inv[i].itemDescription << endl
      << inv[i].itemUnitCost << endl << inv[i].quantity<<endl
      << endl;
 outfile.close();


}
void printSingleInvoice (invoiceType inv)
{
 cout << inv.invoiceID << setw(8) << inv.custFirstNames 
      <<setw(2)<< inv.custLastName << setw(16)<<inv.itemDescription << setw(8)
      << inv.itemUnitCost << setw(9) << inv.quantity<<setw(11)<<setprecision(2)<<fixed<<findTotalCost(inv)
      << endl;



}
void sortByLastName(invoiceType inv[], int num)
{
   invoiceType temp;
   int minIndex=0;
   for (int i=0; i<num-1; i++)
   {
       minIndex=i;
       for(int j=i+1;j<num;j++)
          if (inv[j].custLastName < inv[minIndex].custLastName)
             minIndex=j;
        temp=inv[i];
        inv[i] = inv[minIndex];
        inv[minIndex] = temp;


   }



}
double findTotalCost (invoiceType inv)
{
  double total=0;
  total = inv.itemUnitCost * inv.quantity;
  total *= (1 + FLORENCE_TAX_RATE);
  return total;
  
 




}
void printInvoiceIDs (const invoiceType inv[], int num)
{
  cout<< "Invoice IDS "<<endl;
  for (int i=0; i<num; i++)
  {
     cout << inv[i].invoiceID <<endl;


  }



}
void newInvoices (invoiceType inv[], int &num)
{
   cout << "Inv ID?";
   cin >> inv[num].invoiceID;
 
   cout << "Cust.First?";
   cin >> ws;
   getline(cin, inv[num].custFirstNames);
   cout<<"Cust.Last?";
   getline(cin, inv[num].custLastName);
   cout<<"Item Description?";
   getline(cin, inv[num].itemDescription);
   cout<<"Item Unit Cost?";
   cin >> inv[num].itemUnitCost;
   cout << "Quantity purchased?";
   cin >> inv[num].quantity;
   num++;
   
  


}

void readInvoices (invoiceType inv[], int &num)
{

 ifstream input;
 input.open("invoices.txt");
 if (input.fail())
 {
  cout<<"Error opening the file"<<endl;
  exit(1);
 }
 input >> inv[num].invoiceID;
 while(!input.eof())
 {
   input >> ws;
   getline(input, inv[num].custFirstNames);
   getline(input, inv[num].custLastName);
   getline(input, inv[num].itemDescription);
   input >> inv[num].itemUnitCost;
   input >> inv[num].quantity;
   num++;
   input >> inv[num].invoiceID;
  
 }
  input.close();


}
