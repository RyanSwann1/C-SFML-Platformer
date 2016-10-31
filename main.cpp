
#include "Game.h"

#include <iostream>
#include <functional>
#include <string>
#include <unordered_map>

//struct EventDetails
//{
//	EventDetails(const std::string& name)
//		: m_name(name) {}
//
//	std::string m_name;
//};
//
//void printGreeting(const EventDetails* eventDetails)
//{
//	if (eventDetails->m_name == "Print_Greeting")
//	{
//		std::cout << "Hello." << "\n";
//	}
//}
//
//void printFarewell(const EventDetails* eventDetails)
//{
//	if (eventDetails->m_name == "Print_Farewell")
//	{
//		std::cout << "Goodbye." << "\n";
//	}
//}
//
//void addToFunctions(const std::string& name, void(*fp)(const EventDetails*), std::unordered_map<std::string, std::function<void(const EventDetails*)>>& functions)
//{
//	if (functions.find(name) == functions.cend())
//	{
//		functions.emplace(name, fp);
//	}
//}

int main()
{
	Game game;
	while (game.isRunning())
	{
		game.update();
		game.draw();
		game.lateUpdate();
	}
	


	//std::string greeting = "PrintGreet";
	//std::string farewell = "PrintFarewell";
	//std::unordered_map<std::string, std::function<void(const EventDetails*)>> m_functions;
	//std::vector<EventDetails> eventDetails;
	//EventDetails greetEventDetails("Print_Greeting");
	//EventDetails farewellEventDetails("Print_Farewell");

	//addToFunctions()


	char c;
	std::cin >> c;
}

