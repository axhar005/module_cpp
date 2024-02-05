#include <iostream>

struct Data{
	std::string s1;
	std::string s2;
};

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int main(void){
	std::string s1 = "Bien le";
	std::string s2 = " bonjours";

	Data *data = new Data;
	data->s1 = s1;
	data->s2 = s2;

	std::cout << data->s1 << data->s2 << std::endl;

	data = deserialize(serialize(data));

	std::cout << data->s1 << data->s2 << std::endl;

	delete data;

	return (0);
}