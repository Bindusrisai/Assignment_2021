
#include<iostream>
#include<string>
#include <ctime>
#include <thread>
#include <mutex>

using namespace std;

void insert(string);
void read(string);
void modify(string);
void remove(string);
void update(string);
string create(string, string);

int main()
{ 


  std::cout << std::endl;
  
  


    cout << "\t \t \t A file-based key-value data store supporting basic CRD (create, read, and delete) operations !! \n \n" << endl
         << endl;
    // file 
    string file_path;
    string file_name;

    //to create a file
    string final_path = create(file_path, file_name);

    int choice = 1;

    while (choice != 0)
    {
        //getting user's choice of operation
        cout << endl
             << "Operations: \n 1.Create/Insert \n 2.Read \n 3.Modify \n 4.Delete \n 5.Exit \n Enter your choice: ";
        cin >> choice;

        // invoking operation based on choices
        update(final_path);
        
        switch (choice)
        {
        
        case 1:
            insert(final_path);
            break;
        case 2:
            read(final_path);
            break;
        case 3:
            modify(final_path);
            break;
        case 4:
            remove(final_path);
            break;
        case 5:
            exit(1);
            break;
        default:

            cout << "Invalid input \n";
            break;
        }
    }

    std::thread t1(d);
    t1.join();
    thread t2(k,0);
    t2.join();
cout<<"thread is safe\n\n";
cout<<"exit thread2 \n\n";
}
void d()  {  
    std::cout << "thread 1 created \n\n"; 
    
} 
void k(int x){
    cout<<"thread 2 created \n\n";
    cout<<"exit thread1\n\n";
}
 