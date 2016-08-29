#ifndef CALCOBJ_H
#define CALCOBJ_H

class CalcObj {
	public:

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