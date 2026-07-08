using Il2CppDummyDll;

namespace Photon.Voice.IOS;

[Token(Token = "0x20000AE")]
public enum AudioSessionCategory
{
	[Token(Token = "0x40002CE")]
	Ambient,
	[Token(Token = "0x40002CF")]
	SoloAmbient,
	[Token(Token = "0x40002D0")]
	Playback,
	[Token(Token = "0x40002D1")]
	Record,
	[Token(Token = "0x40002D2")]
	PlayAndRecord,
	[Token(Token = "0x40002D3")]
	AudioProcessing,
	[Token(Token = "0x40002D4")]
	MultiRoute
}
