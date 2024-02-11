


int Sqrt(int x)
{
    int num = 0;
    while(1)        // Kosullu sinirsiz dongu. kosul saglanirsa cikiyor
    {
        if(num*num > x) // Karekoku fazla mi kontrolu
        {
            return num - 1;
        }

        num++;  // Arttirma
    }

}