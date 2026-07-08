using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x20000E5")]
public enum ScreenOrientation
{
	[Token(Token = "0x4000286")]
	Portrait = 1,
	[Token(Token = "0x4000287")]
	PortraitUpsideDown = 2,
	[Token(Token = "0x4000288")]
	LandscapeLeft = 3,
	[Token(Token = "0x4000289")]
	LandscapeRight = 4,
	[Token(Token = "0x400028A")]
	AutoRotation = 5,
	[Token(Token = "0x400028B")]
	[Obsolete("Enum member Unknown has been deprecated.", false)]
	Unknown = 0,
	[Token(Token = "0x400028C")]
	[Obsolete("Use LandscapeLeft instead (UnityUpgradable) -> LandscapeLeft", true)]
	Landscape = 3
}
