#include "profile.hpp"
#include <iostream>
#include <vector>

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns)
  : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {}

std::string Profile::view_profile() {

  std::string profile_info;
  std::string hobby_list;

  for (int i = 0; i < hobbies.size(); i++) {
    
    if (i < (hobbies.size() - 1)) {

      hobby_list += hobbies[i] + ", ";

    }
    else {

      hobby_list += hobbies[i];

    }
    
  }


  profile_info = "Name: " + name + "\n" + "Age: " + std::to_string(age) + "\n" + "City: " + city + "\n" + "Country: " + country + "\n" + "Pronouns: " + pronouns + "\n" + "Hobbies: " + hobby_list;

  return profile_info;

}

void Profile::add_hobby(std::string new_hobby) {

  hobbies.push_back(new_hobby);

}