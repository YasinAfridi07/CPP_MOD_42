
#include <iostream>

void to_upper(char *str)
{
    int  i = 0;
    while((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 32 && str[i] <= 46))
    {
        if(str[i] >= 32 && str[i] <= 46)
        {
            std::cout<< str[i];
        }
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
                std::cout<< str[i];
            }
            else 
                std::cout<< str[i];
        }
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 1;
    if(ac < 2)
    {
        std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else 
    while (av[j])  
    {
        to_upper(&av[j][i]);
        j++;
    }
    std::cout<<std::endl;
    return 0;
}



