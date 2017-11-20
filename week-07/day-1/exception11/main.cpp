#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int rnd = 0;
	for (int i = 0; i < 20; ++i) {
		rnd = rand() % 5;
		try {
			switch (rnd) {
				case 0:
					throw 3.2f;
					break;
				case 1:
					throw double(43.56);
					break;
				case 3:
					throw "Abrakadabra";
					break;
				case 4:
					throw false;
					break;
				default:
					throw 12;
					break;
			}
		}
// Write catch blocks for each possibly thrown exception.
// In each catch block write out what the exception's type was. And what the exceptions value was.


        catch (float x) {
            std::cout << "The exception type is float." << "\nThe exception value is: " << x << std::endl;
        }
        catch (double x) {
            std::cout << "The exception type is double." << "\nThe exception value is: " << x << std::endl;
        }
        catch (const char* x) {
            std::cout << "The exception type is char." << "\nThe exception value is: " << x << std::endl;
        }
        catch (bool x) {
            std::cout << "The exception type is bool." << "\nThe exception value is: " << x << std::endl;
        }
        catch (int x) {
            std::cout << "The exception type is int." << "\nThe exception value is: " << x << std::endl;
        }
	}
	return 0;
}
