#include<iostream>
#include<string>
using namespace std;
 
class Book{
    private:
    int bookId;
    string bookOfName;
    string bookauthorname;
    float bookprice;

    public:
    void inputbookdetails()
    {
        cout<<" enter the book id"<<endl;
        cin>>bookId;
        cout<<" enter the book name"<<endl;
        cin>>bookOfName;
        cout<<" enter the book authorname"<<endl;
        cin>>bookauthorname;
        cout<<" enter the book price"<<endl;
        cin>>bookprice;
    }


    void displaybookdetails()
  {
    cout<<"book id "<< bookId<<endl;
    cout<<"book name "<< bookOfName<<endl;
    cout<<"book author name "<< bookauthorname<<endl;
    cout<<"book price "<< bookprice<<endl;
  }
};

int main()
{
   int n,i;
   cout<<"enter the number of book :"<<endl;
   cin>>n;

   Book *books=new Book[n];

   for(i=0;i<n;i++)
   {
    cout<<"\nenter details of book"<<i+1<<endl;
    books[i].inputbookdetails();
   }
   cout<<"\n -------book information -------";

   for(i=0;i<n;i++)
   {
    cout<<"\nenter details of book"<<i+1<<endl;
    books[i].displaybookdetails();
   }
    return 0;
}