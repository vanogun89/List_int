#include <iostream>
#include <string>

using namespace std;

struct Knot
{
    Knot* next;
    int rel;
};

class int_List
{
private:
    Knot* head; //encapsulated data
public:
    int_List()
    {
        head = NULL; //creation of free place in memory for the first node from constructor
    }
    void add_int(int d)
    {
        Knot* knt = new Knot; //creation of free node
        knt->next = NULL;
        knt->rel = d;

        if (head == NULL)
        {
            head = knt;
        }
        else
        {
            Knot* y = new Knot;
            y = head;
            while (y->next != NULL)
            {
                y = y->next;
            }
            y->next = knt;
        }
    }
    void print_all()
    {
        Knot* u = new Knot;
        u = head;
        std::cout << "Print the all elements of int_List:\n";
        while (u != NULL)
        {
            std::cout << u->rel << std::endl;
            u = u->next;
        }
    }
    void delete_elem(int y)
    {
        if (head == NULL)
        {
            std::cout << "Node is empty!\n";
        }
        else
        {
            Knot* p = new Knot;
            p = head;
            while (p != NULL)
            {
                if (p->rel == y)
                {
                    break;
                }
                p = p->next;
            }
        }
    }
    ~int_List()
    {

    }
};

void stroch(string y)
{
    int cnt = y.length();
    string newer;
    int ptrs = 0, flag = 0, t = 0, flag1 = 0;
    for (int i = 0; i < cnt; i++)
    {
        if ((ptrs == 0) && (y[i] == ' ') && (t == 0))
        {
            t += 1;
            flag += 1;
        }
        if ((ptrs == 0) && (y[i] == ' '))
        {
            t += 1;
        }
        if ((ptrs != 0) && (y[i] == ' '))
        {
            ptrs = 0;
            t += 1;
            flag += 1;
        }
        if ((ptrs == 0) && (y[i] != ' '))
        {
            ptrs += 1;
            t = 0;
        }
        if ((ptrs != 0) && (y[i] != ' '))
        {
            ptrs += 1;
        }
    }
    int* ar_space = new int(flag);
    for (int i = 0; i < cnt; i++)
    {
         if ((ptrs == 0) && (y[i] == ' ') && (t == 0))
        {
            t += 1;
        }
        if ((ptrs == 0) && (y[i] == ' '))
        {
            t += 1;
        }
        if ((ptrs != 0) && (y[i] == ' '))
        {
            ptrs = 0;
            t += 1;
            flag1 += 1;
        }
        if ((ptrs == 0) && (y[i] != ' '))
        {
            ptrs += 1;
            t = 0;
        }
        if ((ptrs != 0) && (y[i] != ' '))
        {
            ptrs += 1;
        }
    }
}

void bin_search(int* u)
{

}

int main()
{
    setlocale(LC_ALL, "Russian");
    stroch("dkfjjf");
    cout << endl;
    stroch("");
    cout << endl;
    stroch("sjjf fgg");
    cout << endl;
    stroch("fsjfjfjfjfj     snfnfn     dnfnnng");
    cout << endl;
    stroch(" sas ");
    cout << endl;
    stroch(" sa sa ");
    cout << endl;
    stroch("svat");
    cout << endl;
    stroch("s s s s s ");
    cout << endl;
    stroch("                         s                      ");
    cout << endl;
}