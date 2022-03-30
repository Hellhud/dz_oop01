#include <iostream>
#include <cstdint>
class RGBA {
public:
	std::uint8_t m_red = 0;
	std::uint8_t m_green = 0;
	std::uint8_t m_blue = 0;
	std::uint8_t m_alpha = 255;
};
struct construct{
	RGBA r;

	void input(std::uint8_t m_red, std::uint8_t m_green, std::uint8_t m_blue, std::uint8_t m_alpha) {

		int  t = 0;
		bool y = true;
			while (y == true) {
				std::cout << "vvedite snach elementa cotorii xotite pomenat 1)m_red 2)m_greeen 3)m_blue 4)m_alpha 0)esli ne xotite menat znachenia" << std::endl;
				std::cin >> t;
				if (t == 1) {
					std::cin >> m_red;
					r.m_red = m_red;
				}
				else if (t == 2) {
					std::cin >> m_green;
					r.m_green = m_green;
				}
				else if (t == 3) {
					std::cin >> m_blue;
					r.m_blue = m_blue;
				}
				else if (t == 4) {
					std::cin >> m_alpha;
					r.m_alpha = m_alpha;
				}
				else if (t == 0) return;

				std::cout << "esle xotite prodolsh vvedite 1 esli net 2";
				if (y == 1) {
					y = true;
				}
				else break;
			}
	}

	void output() {
		int t = 0;
		std::cout << "vvedite snach elementa cotorii xotite vivesti 1)m_red 2)m_greeen 3)m_blue 4)m_alpha" << std::endl;
		std::cin >> t;
		if (t == 1) {
			std::cout << r.m_red << std::endl;
		}
		else if (t == 2) {
			std::cout << r.m_green << std::endl;
		}
		else if (t == 3) {
			std::cout << r.m_blue << std::endl;
		}
		else if (t == 4) {
			std::cout << r.m_alpha << std::endl;
		}
	}
};
int main(){
	RGBA r;
	construct c;
		c.input(r.m_red, r.m_green, r.m_blue, r.m_alpha);
		c.output();
}
