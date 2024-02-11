


double Pow(double x,int n)
{

    if(n < 0)
    {
        return 1.0 / (x * Pow(x,-n-1));   // eksiyi artiya cevirip kolaylastiran ic ice fonksiyon olsusmu
    }
    
    double result = 1;
    
    for(int i = 0; i< n;i++)        // Asil Carpma forksiyoru. Algoritma;
    {
        result *= x; 
    }
    return result;
}