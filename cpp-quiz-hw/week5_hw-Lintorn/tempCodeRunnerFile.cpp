void print_with_pointer2(){
    cout << "Print with pointer2"<<endl;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 5; j++)
        { // print values without pointer
            cout << "Element at x"<<*(*(A+i)+j)<<" Address:"<<&*(*(A+i)+j)<<endl;
        }
        
    }