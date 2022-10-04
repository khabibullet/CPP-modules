/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:40:04 by anemesis          #+#    #+#             */
/*   Updated: 2022/10/04 23:35:18 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "Invalid input!" << std::endl;
		return (1);
	}
	
	std::string oldFileName = argv[1];
	std::string oldStr = argv[2];
	std::string newStr = argv[3];
	
	std::ifstream infile(oldFileName);
	if(!infile){
		std::cout << "Cannot read file!" << std::endl;
		return (1);
	}
	
	std::string inputFileText;
	std::ofstream outfile(oldFileName + ".replaced");
	if(!outfile){
		std::cout << "Cannot write to file!" << std::endl;
		return (1);
	}
	
	while (std::getline(infile, inputFileText)) {
		if(inputFileText.find(oldStr) != std::string::npos) {
			int findPos = inputFileText.find(oldStr);
			inputFileText.erase(findPos, oldStr.length());
			inputFileText.insert(findPos, newStr);
			outfile << inputFileText << std::endl;
		} else {
			outfile << inputFileText << std::endl;
		}
	}
	outfile.close();
	infile.close();
	return (0);
}