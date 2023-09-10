#include <iostream>
#include <vector>

int main(){
  double temperature_list[4] = {34.5,27.8,26.8,22.0};

  std::cout << temperature_list << std::endl;
  temperature_list[3] = 15.4;
  std::cout << temperature_list[3] << std::endl;
  
  std:: vector<double>temperatures;
  temperatures.push_back(34.5);
  temperatures.push_back(27.8);
  temperatures.push_back(26.8);
  temperatures.push_back(22.0);

  
  std::cout << temperatures.at(0) <<std::endl;
  
  return 0;
}

// fix this shiet someday:
// error: non-aggregate type 'std::vector<double>' 
// cannot be initialized with an initializer list