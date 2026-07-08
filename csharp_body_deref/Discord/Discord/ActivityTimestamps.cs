using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200003B")]
public struct ActivityTimestamps
{
	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x0")]
	public long Start;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x8")]
	public long End;
}
