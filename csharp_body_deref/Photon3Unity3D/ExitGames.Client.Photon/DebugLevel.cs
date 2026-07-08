using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200002A")]
public enum DebugLevel : byte
{
	[Token(Token = "0x400012D")]
	OFF = 0,
	[Token(Token = "0x400012E")]
	ERROR = 1,
	[Token(Token = "0x400012F")]
	WARNING = 2,
	[Token(Token = "0x4000130")]
	INFO = 3,
	[Token(Token = "0x4000131")]
	ALL = 5
}
