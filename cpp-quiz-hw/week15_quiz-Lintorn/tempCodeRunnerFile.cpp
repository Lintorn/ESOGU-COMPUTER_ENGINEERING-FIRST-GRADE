 file.open("teacher.txt",ios::in);
    if(file.is_open()){
        
        int i=0;
        while(getline(file,str)){
            istringstream iss(str);
            string temp;
            while(getline(iss,temp,' ')){
               
            }
        }

    }file.close();