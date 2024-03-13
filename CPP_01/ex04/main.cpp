/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:21:30 by yusman            #+#    #+#             */
/*   Updated: 2024/03/07 18:21:31 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replace_text(std::ifstream &MyFile, char **av)
{
    std::string file_name;  
    std::string replace_file_name;
    std::string find;
    std::string replace;
    std::string content_str;
    std::string final_str;
    std::size_t pos_idx;

    file_name = av[1];
    find = av[2];
    replace = av[3];
    replace_file_name = file_name + ".replace";
    std::ofstream rep_file(replace_file_name.c_str());

    while(!MyFile.eof() && find.size())
    {
        final_str = "";
        std::getline(MyFile, content_str);
        pos_idx = content_str.find(find);

        while(pos_idx != std::string::npos)
        {
            content_str.erase(pos_idx, find.size());
            final_str = final_str + content_str.substr(0, pos_idx);
            final_str = final_str + replace;
            content_str = content_str.substr(pos_idx);
            pos_idx = content_str.find(find);
        }
        if(content_str.size() && pos_idx == std::string::npos)
            final_str = final_str + content_str.substr(0, pos_idx);
        rep_file << final_str ;
        if(!MyFile.eof())
            rep_file << "\n";
    }
    MyFile.close();
    rep_file.close();
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::ifstream MyFile(av[1]);
        if(MyFile)
        {
            if(MyFile.is_open())
                replace_text(MyFile, av);
            else 
                std::cout << "file not opened" << std::endl;
        }
        else 
            std::cout << "file does not exits" << std::endl;
    }
    else
         std::cout << "Error: Invalid Arguments" << std::endl;

}