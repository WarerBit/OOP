#include "TheGame.h"


int main()
{
	bool game = true;
	while (game) {
		TheGame seabattoru;

		seabattoru.Texturising();
		seabattoru.StageOne();
		if (seabattoru.goOn) {
			seabattoru.StageTwo();

			seabattoru.StageThree();

		}
		if (seabattoru.goOn) {
			seabattoru.StageFinal();
		}
		game = seabattoru.goOn;
	}
}