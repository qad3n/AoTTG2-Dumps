using System;
using Il2CppDummyDll;

namespace Photon.Voice.Unity;

[Serializable]
[Token(Token = "0x20000A0")]
public struct AndroidAudioInParameters
{
	[Token(Token = "0x40002A2")]
	[FieldOffset(Offset = "0x0")]
	public bool EnableAEC;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0x1")]
	public bool EnableAGC;

	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0x2")]
	public bool EnableNS;

	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0x0")]
	public static AndroidAudioInParameters Default;
}
