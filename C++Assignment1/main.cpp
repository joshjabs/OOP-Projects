#include <iostream>
#include <sstream>
#include<string>
#include<algorithm>
using namespace std;


class Student {
private:
    string first_name, last_name;
    int age, id;
public:
    int publicId;
    int get_age(){
        return age;
    }
    void set_age(int a){
        age = a;
    }
    string get_first_name(){
        return first_name;
    }
    void set_first_name(string f){
        first_name=f;;
    }

    string get_last_name(){
        return last_name;
    }
    void set_last_name(string l){
        last_name=l;
    }
    int get_id(){
        return id;
    }
    void set_id(int s){
        id=s;
    }
    string to_string ()
    {
        stringstream ss;
        ss<<age<<","<<first_name<<","<<last_name<<","<<id;
        string result = ss.str();
        return result;
    }

};



int main() {
    int age, id;
    string first_name, last_name;

    cout << "Enter First Name:";
    cin >> first_name;
    cout << "Enter Last Name: ";
    cin >> last_name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter ID: ";
    cin >> id;


    Student st;
    st.set_age(age);
    st.set_id(id);
    st.publicId = id+10;
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_first_name() << " " << st.get_last_name() << " is " << st.get_age() << " with ID " << st.get_id() << endl;
    cout << st.get_first_name() << "\'s only publicly accessible record is a seperate public ID which is " << st.publicId << endl<< endl;
    cout << st.to_string()<<endl;

    return 0;
}
