using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200007A")]
public enum FrameFlags : byte
{
	[Token(Token = "0x40001F4")]
	Config = 1,
	[Token(Token = "0x40001F5")]
	KeyFrame = 2,
	[Token(Token = "0x40001F6")]
	PartialFrame = 4,
	[Token(Token = "0x40001F7")]
	EndOfStream = 8,
	[Token(Token = "0x40001F8")]
	FragNotBeg = 16,
	[Token(Token = "0x40001F9")]
	FragNotEnd = 32,
	[Token(Token = "0x40001FA")]
	FEC = 64,
	[Token(Token = "0x40001FB")]
	MaskFrag = 48
}
