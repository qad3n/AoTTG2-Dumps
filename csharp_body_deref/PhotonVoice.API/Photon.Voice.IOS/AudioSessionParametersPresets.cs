using Il2CppDummyDll;

namespace Photon.Voice.IOS;

[Token(Token = "0x20000B2")]
public static class AudioSessionParametersPresets
{
	[Token(Token = "0x40002E4")]
	[FieldOffset(Offset = "0x0")]
	public static AudioSessionParameters Game;

	[Token(Token = "0x40002E5")]
	[FieldOffset(Offset = "0x10")]
	public static AudioSessionParameters VoIP;
}
