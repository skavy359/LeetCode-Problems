class ParkingSystem
{
public:
    int b, m, s;
    ParkingSystem(int big, int medium, int small)
    {
        b = big;
        m = medium;
        s = small;
    }

    bool addCar(int type)
    {
        if (type == 1)
        {
            if (b > 0)
            {
                b--;
                return true;
            }
        }
        else if (type == 2)
        {
            if (m > 0)
            {
                m--;
                return true;
            }
        }
        else if (type == 3)
        {
            if (s > 0)
            {
                s--;
                return true;
            }
        }
        return 0;
    }
};