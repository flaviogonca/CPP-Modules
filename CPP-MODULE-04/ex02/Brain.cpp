/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:37:16 by fmalungo          #+#    #+#             */
/*   Updated: 2025/06/17 15:37:21 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    ideas[0] = "⛅ Focus on Python, Java, or JavaScript.";
    ideas[1] = "⛅ Understand TCP/IP, DNS, and protocols.";
    ideas[2] = "⛅ Pursue certifications like CompTIA, Cisco CCNA, or AWS.";
    ideas[3] = "⛅ Create projects showcasing your skills on GitHub.";
    ideas[4] = "⛅ Solve coding challenges on platforms like LeetCode.";
    ideas[5] = "⛅ Learn about encryption and threat detection.";
    ideas[6] = "⛅ Follow tech news, blogs, and forums regularly.";
    ideas[7] = "⛅ Communication, teamwork, and time management matter.";
    ideas[8] = "⛅ Gain experience and network in the community.";
    ideas[9] = "⛅ Attend IT meetups, webinars, and conferences.";

    std::cout << "🧠 Brain Default Constructor Called ✅" << std::endl;
}

Brain::~Brain()
{
    std::cout << "🧠 Brain Destroyed ❌" << std::endl;
}

Brain::Brain(const Brain& original)
{
    for (size_t i = 0; !original.ideas[i].empty() ; i++)
        this->ideas[i] = original.ideas[i];
    std::cout << "📝 Brain Copy Constructor Called ✅" << std::endl;
}

Brain& Brain::operator=(const Brain& original)
{
    if (this != &original)
    {
        for (size_t i = 0; !original.ideas[i].empty() ; i++)
            this->ideas[i] = original.ideas[i];        
    }
    return *this;
}

void Brain::shouIdeias() const
{
    for (size_t i = 0; !ideas[i].empty(); i++)
        std::cout << ideas[i] << std::endl;
}
