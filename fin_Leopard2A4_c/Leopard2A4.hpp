/*	Faction variants	*/
class fin_Leopard2A4 : fin_leopard_base 
{
	scope = 2;
		AuthNameMacro(fin_Leopard2A4)
	model = "FinMod\Leopard2A4\Leopard2A4";
	picture = "FinMod\Leopard2A4\Data\UI\Leopard2A4_ca.paa";
	// Faction defines: side ID, faction class, crew, typical cargo
};

/*	Public class	*/
class O_Test_Tank_01 : O_Test_Tank_01_base {
	// Basic defines: public scope
	scope = 2;
	// Editor displayname
	accuracy = 1000;	// accuracy > 4 is not possible to be fully recognized during game
		AuthNameMacro(O_Test_Tank_01)
};