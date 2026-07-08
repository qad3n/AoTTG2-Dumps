using Il2CppDummyDll;

namespace Photon.Voice.IOS;

[Token(Token = "0x20000B0")]
public enum AudioSessionCategoryOption
{
	[Token(Token = "0x40002DD")]
	MixWithOthers = 1,
	[Token(Token = "0x40002DE")]
	DuckOthers = 2,
	[Token(Token = "0x40002DF")]
	AllowBluetooth = 4,
	[Token(Token = "0x40002E0")]
	DefaultToSpeaker = 8
}
