int secv_dif(int v[], int n, int& st, int& dr)
{
    st = -1;
    dr = -1;
    int lg = 1, lg_max = 1, poz_s = 1, i = 1, semn = 0;
    while (i < n) {
        if (v[i] < v[i + 1])
        {
            if (semn == 0) poz_s = i, semn = -1, lg = 2;
            else
            {
                if (semn == 1)
                    lg++, semn = -1;
                else
                    if (semn == -1)
                    {
                        if (lg > lg_max) {
                            lg_max = lg;
                            st = poz_s;
                            dr = i;
                        }
                        lg = 1;
                        semn = 0;
                    }
            }
        }
        else
            if (v[i] > v[i + 1])
            {
                if (semn == 0)
                    poz_s = i, semn = 1, lg = 2;
                else
                {
                    if (semn == -1)
                        lg++, semn = 1;
                    else
                        if (semn == 1)
                        {
                            if (lg > lg_max) {
                                lg_max = lg;
                                st = poz_s;
                                dr = i;
                            }
                            semn = 0;
                            lg = 1;
                        }
                }
            }
            else {
                if (lg > lg_max) {
                    lg_max = lg;
                    st = poz_s;
                    semn = 0;
                    dr = i;
                }
                semn = 0;
            }

        i++;
    }
    if (lg > lg_max) {
        lg_max = lg;
        st = poz_s;
        semn = 0;
        dr = i;
    }
    return lg_max;
}

int secv_elem_dif(int v[], int n, int& st, int& dr)
{
    st = -1;
    dr = -1;
    int i = 1;
    int l = 1, lmax=1, poz=0;
    while (i < n)
    {
        if ((v[i] < 0 and v[i + 1]>0) or (v[i] > 0 and v[i + 1] < 0))
            if (l == 1)
                poz = i, l++;
            else
                l++;
        else
        {
            if (l >= lmax) lmax = l, dr=i, st=poz;
            l = 1;
        }
        i++;
    }
    if (l >= lmax) lmax = l, l = 1, dr = i, st = poz;
    return lmax;
}
