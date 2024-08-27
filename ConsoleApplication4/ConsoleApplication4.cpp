#include <iostream>



using namespace std;

// Funksiyalar

//===============================================================
void randomArrayOne(int array[], int size)
{
    srand(time(NULL));

    int min_num_ = 1;
    int max_num_ = 100;

    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % (max_num_ - min_num_ + 1) + min_num_;
    }
}

void Show_array_one(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;;
 
 
    }
}


void randomArrayOne(float array[], int size)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
       float array_ = (float)(rand () % 1010) / 10;
       array[i] = (float)(array_);
    }
}

void Show_array_one(float array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;;
    }
}


void randomArrayOne(double array[], int size)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
       double array_ = (double)(rand () % 1010) / 10;
       array[i] = (double)(array_);
    }
}

void Show_array_one(double array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;;
    }
}

void randomArrayOne(char array[], int size)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        char array_ = (char)(rand() % 101);
        array[i] = (char)(array_);
    }
}

void Show_array_one(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;;
    }
}


//===============================================================

int array_Random(int array[], int size,int max,int min)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        int _arry_ = rand() % (max - min + 1) + min;
    }

    return max - min;
}

int main()
{
    cout << "=============================================";
    cout << "\n\n";
    cout << "Tap - 1 , 3";
    cout << "\n\n\n\n";

    int arraY[10] = {};
    float array__[10] = {};
    double array___[10] = {};
    char array____[10] = {};

    cout << "Array : ";
    cout << "\n";

    randomArrayOne(arraY, 10);
    Show_array_one(arraY, 10);
    randomArrayOne(array__, 10);
    Show_array_one(array__, 10);
    randomArrayOne(array___, 10);
    Show_array_one(array___, 10);
    randomArrayOne(array____, 10);
    Show_array_one(array____, 10);

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "=============================================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";

    int min_num_two;
    int max_num_two;
    int array_two[10] = {};

    cout << "Enter first number : ";
    cin >> min_num_two;

    cout << "Enter secound number : ";
    cin >> max_num_two;

    int answer = array_Random(array_two, 10, max_num_two, min_num_two);
    cout << "Array : " << answer << endl;

    
    
}

