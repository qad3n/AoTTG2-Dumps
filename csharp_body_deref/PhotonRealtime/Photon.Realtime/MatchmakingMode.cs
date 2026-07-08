using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000030")]
public enum MatchmakingMode : byte
{
	[Token(Token = "0x400018A")]
	FillRoom,
	[Token(Token = "0x400018B")]
	SerialMatching,
	[Token(Token = "0x400018C")]
	RandomMatching
}
