using Il2CppDummyDll;

namespace Photon.Voice.IOS;

[Token(Token = "0x20000AF")]
public enum AudioSessionMode
{
	[Token(Token = "0x40002D6")]
	Default = 0,
	[Token(Token = "0x40002D7")]
	VoiceChat = 1,
	[Token(Token = "0x40002D8")]
	VideoRecording = 3,
	[Token(Token = "0x40002D9")]
	Measurement = 4,
	[Token(Token = "0x40002DA")]
	MoviePlayback = 5,
	[Token(Token = "0x40002DB")]
	VideoChat = 6
}
