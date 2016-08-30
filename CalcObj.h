// Header Guards

#ifndef CALCOBJ_H
#define CALCOBJ_H


// CalcObj class with required member functions
class CalcObj {
	public: // Allows Code to be used by other files.

		// Functions use parameters to receive user inputted data.

		double add (double x, double y){
			double final = x + y;
			return final;
		}

		double subtract (double x, double y){
			if (y > x){
				double final = y - x;
				return final;
			}
			else{
				double final = x - y;
				return final;
			}	
		}

		double multiply (double x, double y){
			double final = x * y;
			return final;
		}

		double divide (double x, double y){
			double final = x / y;
			return final;
		}
};
#endif