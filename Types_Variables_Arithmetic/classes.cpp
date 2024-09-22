class Vector {
    public:
        Vector(int s):elem(new double[s]), sz{s} {} //construct a vector
        double& operator[](int i){return elem[i];}  //element access:subscripting
        int size() {return sz;}

    private:
        double* elem; //pointer to element
        int sz; 
};
