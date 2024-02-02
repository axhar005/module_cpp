#include "inc/ShrubberyCreationForm.hpp"
#include "inc/colors.hpp"
#include "inc/Bureaucrat.hpp"
#include <fstream>

// Default constructor
ShrubberyCreationForm::ShrubberyCreationForm(){
	if (CALL)
		std::cout << MAGENTA << "ShrubberyCreationForm default constructor as been called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){
	if (CALL)
		std::cout << MAGENTA << "ShrubberyCreationForm default constructor as been called" << RESET << std::endl;
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) {
	if (CALL)
		std::cout << MAGENTA << "ShrubberyCreationForm copy constructor as been called" << RESET << std::endl;
	*this = other;
}

// Copy assignment overload
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	if (CALL)
		std::cout << MAGENTA << "ShrubberyCreationForm assignment overload as been called" << RESET << std::endl;
	return *this;
}

// Default destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {
	if (CALL)
		std::cout << MAGENTA << "ShrubberyCreationForm default deconstructor as been called" << RESET << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const{
	return(_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	std::ofstream out;
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	if (!this->getSign())
		throw std::invalid_argument("Form not signed!");
	out.open(_target + "_shrubbery");
	if (!out.is_open())
		throw std::invalid_argument("Cannot open file!");
	out << "                                                                                  " << std::endl;
	out << "                                                                                  " << std::endl;
	out << "                                ,.           .  ...                               " << std::endl;
	out << "                          .  , .....    .   ........    . *                       " << std::endl;
	out << "                            ,.,..... ..  *,  .(.,.,....(,,,                       " << std::endl;
	out << "                           ........,..,..   . #,*,,.##***/**(/                    " << std::endl;
	out << "                    .        ,,.,,../ ..     ,......(#*/*/(,#.%* . %#             " << std::endl;
	out << "                    ......  ..,,...,.,...*/,*/.,%.,/%(/(*,*,(/*,,,..,.(...        " << std::endl;
	out << "                    .  ...  ....,.,,,,#/,/,,*,.%(%%(///,/,(/*,,,***/,(*,,,**...   " << std::endl;
	out << "           .    %   (/* ,,, ....,...*//(*#/#,,,/%,(**,,/,,,***/,(*,,,**...        " << std::endl;
	out << "              .....,.....,.. . /(**,.((..,(*(/*,.,,.,(,,,*/***,,****,,..,.(       " << std::endl;
	out << "             .. ..............,#./*/..,,,(,/&#/((/*,*%%,,#,*.,,**,(*/,.(..   ..   " << std::endl;
	out << "               ..,.*...,,#,.,,,.....,.,,.,,&**%&(*((**%,,,./,.,/,./*/.*...  ,.    " << std::endl;
	out << "            ./. ,,,,,,*/.,...**,*,,.,....,*%(**%/(&((#((#(,.,.*.**#**.//      .   " << std::endl;
	out << "        .   . . /*.  .,,**,,.*,,#,/,.,,,*..%(#*,/,,&#  # ... ,,......,**, ..   .  " << std::endl;
	out << "             ##//*(...,./../.*.**%#,#%/,.%,*.**..* &&*.../ .(( .,*.,../, ./ /,.   " << std::endl;
	out << "       . ,   *#(,*.*,*,,,.(...*,#.,%*(.,@/%*/  ,.     /  /.#,% %.....,.,*,*,.,    " << std::endl;
	out << "             /**..,,,#*#,(,,,,,*#%*,***&*,*. /  ..*.* /#&%...*..,,....*(*,/.,     " << std::endl;
	out << "           ,***,,.##/#,  %,,&%/&.(,    %@            /%@        *  .. ##%*# *.    " << std::endl;
	out << "        . . ,//,#*#,#,(*,(/**,( .  ,   %%##%#*      @&    ..    ..  . . #.%#(     " << std::endl;
	out << "        ..,((/,**.((%#%(%%.     .    .     .#%#(, (%#                  * ,./      " << std::endl;
	out << "       ./..         (.&*%&   *.              ,####%                               " << std::endl;
	out << "              .        #    ..                 @##%                               " << std::endl;
	out << "                              .                %#%##                              " << std::endl;
	out << "                                        .(     ###%#                              " << std::endl;
	out << "                              ....     /* .   #(#%&                               " << std::endl;
	out << "       .                                     #%%&&                                " << std::endl;
	out << "                                          .&%%%%&.                                " << std::endl;
	out << "                                         %###&&#(                                 " << std::endl;
	out << "                      ,            #((%#%%&&&&@&&. ././.                          " << std::endl;
	out << "                         .#/. ..*,((,/*%%/%%#&&&/&&%***#.* .,                     " << std::endl;
	out << "                         ,,.,,**,**, //******&**/(%###%%%&.&/((**///****/*,.      " << std::endl;
	out.close();
}