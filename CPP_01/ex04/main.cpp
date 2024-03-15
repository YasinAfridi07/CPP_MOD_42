/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:21:30 by yusman            #+#    #+#             */
/*   Updated: 2024/03/15 21:36:44 by yusman           ###   ########.fr       */
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

    while(!MyFile.eof() && find.size())  // This loop condition ensures that the loop continues as long as the end of the file (eof) has not been reached.
	// & the size of the string to find (find.size()) is not zero.
    {
        final_str = "";
        std::getline(MyFile, content_str); // Reads a line from the input file (MyFile) and stores it in content_str.
        pos_idx = content_str.find(find); // Finds the position of the string to find (find) in the current line (content_str).

        while(pos_idx != std::string::npos) //
        {
            content_str.erase(pos_idx, find.size()); // Removes the found string from the current line.
            final_str = final_str + content_str.substr(0, pos_idx); // Appends the portion of the current line before the found string to the final string.
            final_str = final_str + replace; // Appends the replacement string (replace) to the final string.
            content_str = content_str.substr(pos_idx); // Updates the current line to start after the found string.
            pos_idx = content_str.find(find); // Finds the position of the string to find (find) in the updated current line (content_str).
        }
        if(content_str.size() && pos_idx == std::string::npos)
		{
            final_str = final_str + content_str.substr(0, pos_idx);
		}
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
