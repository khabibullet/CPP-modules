/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:25:15 by anemesis          #+#    #+#             */
/*   Updated: 2022/09/18 17:41:33 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	(void)argc;
	for (int i = 1; i < argc; i++) {
		for (int j = 0; argv[i][j] != '\0'; j++) {
			if (argv[i][j] > 96 && argv[i][j] < 122) {
				cout << (char)(argv[i][j] - 32);
			} else {
				cout << (char)(argv[i][j]);
			}
		}
	}
	if (argc == 1) {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	cout << endl;
	return (0);
}