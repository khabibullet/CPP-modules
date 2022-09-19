/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:25:15 by anemesis          #+#    #+#             */
/*   Updated: 2022/09/19 10:29:01 by anemesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	(void)argc;
	for (int i = 1; i < argc; i++) {
		for (int j = 0; argv[i][j] != '\0'; j++) {
				cout << (char)toupper(argv[i][j]);
		}
	}
	if (argc == 1) {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	cout << endl;
	return (0);
}