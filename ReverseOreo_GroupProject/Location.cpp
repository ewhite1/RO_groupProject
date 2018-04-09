#include "Location.h"



Location::Location()
{
	Location A, B, C, D, E, S;
		A.Description = "Oh hey. The Spacewalk group has returned. Hard to tell who all was out there but lets get back to work. J.A.F.A.R. needed a job done. Better do it before it tells the captain im being lazy.";
		A.AltDescription = "Its hard to look around in here. Just moments ago part of the crew was just here.....";
		B.Description = "Sonsory room. Always fun to watch Jensens attempt at hitting on Laura fail, Captain getting hounded by Chef Dahm about needing new supplies before he starts feeding us grease and the occasional soap opera this ships crew plays out for me.";
		B.AltDescription = "I cant see a thing on these monitors anymore. No audio, no visuals. Not even the heat sensors are working. That AI.... ill delete it once i get to it.";
		C.Description = "My usual workspace. Working with the new AI system makes my job so much easier. Thank god the Captain got this for us. He said he got it fairly cheap but for a cheap AI it is well worth its cost.";
		C.AltDescription = "My workspace..... Time to shut this AI down before it makes things worse.";
		D.Description = "Captains not in his room? Must be in the kitchen with Florence. They usually stay there telling stories for hours. They have way to many adventures together. I wonder how old they are....";
		D.AltDescription = "Captains room. Less of a mess than one would think. Hopeully the captain wasnt jetisoned with that group....";
		E.Description = "Empty as always. I can just faintly hear the chatter over comms from the members out on a spacewalk. I guess thats one good thing about working maintenece: Less distractions by the more....... outgoing of the crew";
		E.AltDescription = "Radio Silence. Nothing but the comms randomly hitting objects out in space. The room is still empty. No alarm. No issues. The ship doesnt even know its crew is gone. Just that blasted J.A.F.A.R. and me left.";
		S.Description = "Vast and mostly empty. space is quite a sight to see.";
		S.AltDescription = "Vast and mostly empty. space is quite a sight to see..... without all of these dead bodies...";

		A.items[1] = {};
		B.items[1] = {};
		C.items[1] = {};
		D.items[1] = {};
		E.items[1] = {};
		S.items[1] = {};

}


Location::~Location()
{
}
